#include "radar_comm/bridge/radar_bridge_node.hpp"

#include <algorithm>
#include <cctype>
#include <chrono>
#include <cstring>
#include <functional>
#include <iomanip>
#include <sstream>
#include <string>

#include <pthread.h>

using namespace std::chrono_literals;

namespace {

std::string bytes_to_hex(const uint8_t *data, std::size_t size) {
  std::ostringstream oss;
  oss << std::hex << std::setfill('0');
  for (std::size_t i = 0; i < size; ++i) {
    if (i != 0) {
      oss << ' ';
    }
    oss << std::setw(2) << static_cast<int>(data[i]);
  }
  return oss.str();
}

int64_t steady_now_ns() {
  return std::chrono::duration_cast<std::chrono::nanoseconds>(
             std::chrono::steady_clock::now().time_since_epoch())
      .count();
}

} // namespace

RadarBridgeNode::RadarBridgeNode() : Node("radar_bridge_node") {
  declare_parameters();
  reload_runtime_parameters();

  const auto data_qos = make_data_qos();
  const auto status_qos = make_status_qos();

  position_pub_ = this->create_publisher<radar_interfaces::msg::EnemyPosition>(
      "/radar/rx/enemy/position", data_qos);
  hp_pub_ = this->create_publisher<radar_interfaces::msg::EnemyHP>(
      "/radar/rx/enemy/hp", data_qos);
  ammo_pub_ = this->create_publisher<radar_interfaces::msg::EnemyAmmo>(
      "/radar/rx/enemy/ammo", data_qos);
  macro_pub_ = this->create_publisher<radar_interfaces::msg::MacroStatus>(
      "/radar/rx/enemy/macro_status", data_qos);
  buffs_pub_ = this->create_publisher<radar_interfaces::msg::Buffs>(
      "/radar/rx/enemy/buffs", data_qos);
  key_pub_ = this->create_publisher<radar_interfaces::msg::InterferenceKey>(
      "/radar/rx/enemy/interference_key", data_qos);
  mark_pub_ = this->create_publisher<radar_interfaces::msg::RadarMarkProgress>(
      "/radar/rx/radar/mark_progress", data_qos);
  radar_info_pub_ = this->create_publisher<radar_interfaces::msg::RadarInfo>(
      "/radar/rx/radar/info", data_qos);
  radar_info_forward_pub_ =
      this->create_publisher<radar_interfaces::msg::RadarInfoForward>(
          "/radar/rx/radar_info_forward", data_qos);
  map_robot_data_pub_ =
      this->create_publisher<radar_interfaces::msg::MapRobotData>(
          "/radar/rx/map_robot_data", data_qos);
  decision_cmd_pub_ =
      this->create_publisher<radar_interfaces::msg::RadarDecisionCommand>(
          "/radar/rx/decision_command", data_qos);
  status_pub_ = this->create_publisher<radar_interfaces::msg::RadarCommStatus>(
      "/radar/status/comm", status_qos);

  radar_info_forward_tx_sub_ =
      this->create_subscription<radar_interfaces::msg::RadarInfoForward>(
          "/radar/tx/radar_info_forward", make_status_qos(),
          [this](const radar_interfaces::msg::RadarInfoForward &msg) {
            on_radar_info_forward_tx(msg);
          });
  map_robot_data_tx_sub_ =
      this->create_subscription<radar_interfaces::msg::MapRobotData>(
          "/radar/tx/map_robot_data", make_status_qos(),
          [this](const radar_interfaces::msg::MapRobotData &msg) {
            on_map_robot_data_tx(msg);
          });
  decision_cmd_tx_sub_ =
      this->create_subscription<radar_interfaces::msg::RadarDecisionCommand>(
          "/radar/tx/decision_command", make_status_qos(),
          [this](const radar_interfaces::msg::RadarDecisionCommand &msg) {
            on_decision_command_tx(msg);
          });

  parameter_callback_handle_ = this->add_on_set_parameters_callback(std::bind(
      &RadarBridgeNode::on_parameter_change, this, std::placeholders::_1));

  last_rx_steady_ns_.store(steady_now_ns(), std::memory_order_relaxed);

  status_timer_ = this->create_wall_timer(1s, [this]() { publish_status(); });
  watchdog_timer_ =
      this->create_wall_timer(500ms, [this]() { watchdog_check(); });

  publish_thread_ = std::thread(&RadarBridgeNode::publish_loop, this);
  reconnect_thread_ = std::thread(&RadarBridgeNode::reconnect_loop, this);
}

RadarBridgeNode::~RadarBridgeNode() {
  running_ = false;
  publish_cv_.notify_all();
  if (reconnect_thread_.joinable()) {
    reconnect_thread_.join();
  }
  if (publish_thread_.joinable()) {
    publish_thread_.join();
  }
  disconnect_transport();
  if (raw_record_stream_.is_open()) {
    raw_record_stream_.close();
  }
}

void RadarBridgeNode::declare_parameters() {
  this->declare_parameter("transport_type", "serial");
  this->declare_parameter("port", "/dev/ttyACM0");
  this->declare_parameter("baud_rate", 115200);
  this->declare_parameter("tcp_host", "127.0.0.1");
  this->declare_parameter("tcp_port", 10001);
  this->declare_parameter("reconnect_interval_ms", 1000);
  this->declare_parameter("frame_timeout_ms", 100);
  this->declare_parameter("watchdog_timeout_ms", 2000);
  this->declare_parameter("transport_poll_timeout_ms", 100);
  this->declare_parameter("epoll_timeout_ms", 100);
  this->declare_parameter("read_buffer_size", 4096);
  this->declare_parameter("debug_enabled", false);
  this->declare_parameter("record_raw", false);
  this->declare_parameter("record_path", "/tmp/radar_serial_raw.bin");
  this->declare_parameter("best_effort_qos", true);
  this->declare_parameter("data_qos_depth", 16);
  this->declare_parameter("status_qos_depth", 8);
  this->declare_parameter("publish_queue_warn_threshold", 1536);
  this->declare_parameter("rx_cpu_affinity", -1);
  this->declare_parameter("publish_cpu_affinity", -1);
  this->declare_parameter("reconnect_cpu_affinity", -1);
}

void RadarBridgeNode::reload_runtime_parameters() {
  const auto old_record_enabled = record_raw_;
  const auto old_record_path = record_path_;
  radar_comm::TransportConfig::Type transport_type;
  const auto transport_type_value =
      this->get_parameter("transport_type").as_string();
  if (!radar_comm::transport_type_from_string(transport_type_value,
                                              transport_type)) {
    RCLCPP_WARN(this->get_logger(),
                "Unknown transport_type '%s', fallback to serial",
                transport_type_value.c_str());
    transport_type = radar_comm::TransportConfig::Type::Serial;
  }

  transport_config_.type = transport_type;
  transport_config_.serial_port = this->get_parameter("port").as_string();
  transport_config_.baud_rate = this->get_parameter("baud_rate").as_int();
  transport_config_.tcp_host = this->get_parameter("tcp_host").as_string();
  transport_config_.tcp_port =
      static_cast<uint16_t>(this->get_parameter("tcp_port").as_int());
  reconnect_interval_ms_ =
      this->get_parameter("reconnect_interval_ms").as_int();
  frame_timeout_ms_ = this->get_parameter("frame_timeout_ms").as_int();
  watchdog_timeout_ms_ = this->get_parameter("watchdog_timeout_ms").as_int();
  transport_poll_timeout_ms_ =
      this->get_parameter("transport_poll_timeout_ms").as_int();
  const auto legacy_poll_timeout =
      this->get_parameter("epoll_timeout_ms").as_int();
  if (transport_poll_timeout_ms_ == 100 && legacy_poll_timeout != 100) {
    transport_poll_timeout_ms_ = legacy_poll_timeout;
  }
  read_buffer_size_ = this->get_parameter("read_buffer_size").as_int();
  debug_enabled_ = this->get_parameter("debug_enabled").as_bool();
  record_raw_ = this->get_parameter("record_raw").as_bool();
  record_path_ = this->get_parameter("record_path").as_string();
  best_effort_qos_ = this->get_parameter("best_effort_qos").as_bool();
  publish_queue_warn_threshold_ =
      this->get_parameter("publish_queue_warn_threshold").as_int();
  rx_cpu_affinity_ = this->get_parameter("rx_cpu_affinity").as_int();
  publish_cpu_affinity_ = this->get_parameter("publish_cpu_affinity").as_int();
  reconnect_cpu_affinity_ =
      this->get_parameter("reconnect_cpu_affinity").as_int();

  parser_.set_frame_timeout(std::chrono::milliseconds(frame_timeout_ms_));
  if ((!record_raw_ && old_record_enabled) || record_path_ != old_record_path) {
    std::lock_guard<std::mutex> lock(record_mutex_);
    if (raw_record_stream_.is_open()) {
      raw_record_stream_.close();
    }
  }
}

rcl_interfaces::msg::SetParametersResult RadarBridgeNode::on_parameter_change(
    const std::vector<rclcpp::Parameter> &params) {
  rcl_interfaces::msg::SetParametersResult result;
  result.successful = true;

  bool need_reconnect = false;
  for (const auto &p : params) {
    const auto &name = p.get_name();
    if (name == "transport_type" || name == "port" || name == "baud_rate" ||
        name == "tcp_host" || name == "tcp_port" ||
        name == "transport_poll_timeout_ms" || name == "epoll_timeout_ms" ||
        name == "read_buffer_size" || name == "rx_cpu_affinity") {
      need_reconnect = true;
    }
  }

  reload_runtime_parameters();

  if (need_reconnect) {
    RCLCPP_INFO(this->get_logger(),
                "Runtime transport parameters changed, reconnecting");
    disconnect_transport();
  }
  return result;
}

rclcpp::QoS RadarBridgeNode::make_data_qos() const {
  const auto depth = this->get_parameter("data_qos_depth").as_int();
  auto qos = rclcpp::QoS(rclcpp::KeepLast(depth));
  qos.durability_volatile();
  if (best_effort_qos_) {
    qos.best_effort();
  } else {
    qos.reliable();
  }
  return qos;
}

rclcpp::QoS RadarBridgeNode::make_status_qos() const {
  const auto depth = this->get_parameter("status_qos_depth").as_int();
  auto qos = rclcpp::QoS(rclcpp::KeepLast(depth));
  qos.reliable();
  qos.durability_volatile();
  return qos;
}

builtin_interfaces::msg::Time RadarBridgeNode::now_msg() {
  const auto now = this->get_clock()->now();
  const auto total_ns = now.nanoseconds();
  builtin_interfaces::msg::Time stamp;
  stamp.sec = static_cast<int32_t>(total_ns / 1000000000LL);
  stamp.nanosec = static_cast<uint32_t>(total_ns % 1000000000LL);
  return stamp;
}

void RadarBridgeNode::bind_current_thread_if_needed(int cpu) {
  if (cpu < 0) {
    return;
  }
#ifdef __linux__
  cpu_set_t cpuset;
  CPU_ZERO(&cpuset);
  CPU_SET(static_cast<unsigned>(cpu), &cpuset);
  (void)pthread_setaffinity_np(pthread_self(), sizeof(cpu_set_t), &cpuset);
#else
  (void)cpu;
#endif
}

void RadarBridgeNode::disconnect_transport() {
  std::lock_guard<std::mutex> lock(transport_mutex_);
  if (transport_) {
    transport_->stop();
    transport_.reset();
  }
  connected_ = false;
}

void RadarBridgeNode::connect_transport() {
  std::lock_guard<std::mutex> lock(transport_mutex_);
  if (transport_ || !running_) {
    return;
  }

  runtime_stats_.reconnect_attempts.fetch_add(1, std::memory_order_relaxed);

  auto transport = radar_comm::make_asio_transport();
  transport->setBufferSize(static_cast<std::size_t>(read_buffer_size_));
  transport->setPollTimeoutMs(transport_poll_timeout_ms_);
  transport->setCpuAffinity(rx_cpu_affinity_);
  transport->setDebug(debug_enabled_);
  transport->setCallback([this](const uint8_t *data, std::size_t size) {
    handle_transport_chunk(data, size);
  });
  transport->setDisconnectCallback(
      [this]() { handle_transport_disconnect(); });

  if (!transport->open(transport_config_)) {
    RCLCPP_WARN(this->get_logger(), "Failed to open %s transport %s",
                radar_comm::to_string(transport_config_.type),
                radar_comm::describe_transport(transport_config_).c_str());
    return;
  }

  transport->start();
  transport_ = std::move(transport);
  connected_ = true;
  runtime_stats_.watchdog_triggered.store(false, std::memory_order_relaxed);
  RCLCPP_INFO(this->get_logger(), "Connected %s transport %s",
              radar_comm::to_string(transport_config_.type),
              radar_comm::describe_transport(transport_config_).c_str());
}

void RadarBridgeNode::handle_transport_disconnect() {
  connected_ = false;
  runtime_stats_.serial_disconnects.fetch_add(1, std::memory_order_relaxed);
}

void RadarBridgeNode::reconnect_loop() {
  bind_current_thread_if_needed(reconnect_cpu_affinity_);
  while (rclcpp::ok() && running_) {
    if (!connected_) {
      connect_transport();
    }
    std::this_thread::sleep_for(
        std::chrono::milliseconds(reconnect_interval_ms_));
  }
}

void RadarBridgeNode::maybe_record_raw(const uint8_t *data, std::size_t size) {
  if (!record_raw_ || data == nullptr || size == 0) {
    return;
  }

  std::lock_guard<std::mutex> lock(record_mutex_);
  if (!raw_record_stream_.is_open()) {
    raw_record_stream_.open(record_path_, std::ios::binary | std::ios::app);
  }
  if (raw_record_stream_.is_open()) {
    raw_record_stream_.write(reinterpret_cast<const char *>(data),
                             static_cast<std::streamsize>(size));
    raw_record_stream_.flush();
  }
}

void RadarBridgeNode::maybe_log_hex(const uint8_t *data, std::size_t size) {
  if (!debug_enabled_ || data == nullptr || size == 0) {
    return;
  }
  RCLCPP_DEBUG(this->get_logger(), "RX HEX [%zu]: %s", size,
               bytes_to_hex(data, size).c_str());
}

void RadarBridgeNode::handle_transport_chunk(const uint8_t *data,
                                             std::size_t size) {
  if (data == nullptr || size == 0) {
    return;
  }

  try {
    last_rx_steady_ns_.store(steady_now_ns(), std::memory_order_relaxed);
    maybe_record_raw(data, size);
    maybe_log_hex(data, size);

    const auto stamp = now_msg();
    parser_.process(
        data, size,
        [this, stamp](radar_comm::ProtocolParser::ParsedFrame &&frame) {
          ProtocolEnvelope envelope;
          envelope.stamp = stamp;
          envelope.cmd_id = frame.cmd_id;
          envelope.data = std::move(frame.data);
          if (!publish_queue_.push(std::move(envelope))) {
            runtime_stats_.queue_overflows.fetch_add(1,
                                                     std::memory_order_relaxed);
            return;
          }
          publish_cv_.notify_one();
        });

    if (static_cast<int>(publish_queue_.size()) >
        publish_queue_warn_threshold_) {
      RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                           "Publish queue depth high: %zu",
                           publish_queue_.size());
    }
  } catch (const std::exception &e) {
    runtime_stats_.parse_exceptions.fetch_add(1, std::memory_order_relaxed);
    RCLCPP_ERROR_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                          "Serial parse exception: %s", e.what());
  } catch (...) {
    runtime_stats_.parse_exceptions.fetch_add(1, std::memory_order_relaxed);
    RCLCPP_ERROR_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                          "Unknown serial parse exception");
  }
}

void RadarBridgeNode::publish_loop() {
  bind_current_thread_if_needed(publish_cpu_affinity_);

  while (running_) {
    auto envelope = publish_queue_.pop();
    if (!envelope.has_value()) {
      std::unique_lock<std::mutex> lock(publish_cv_mutex_);
      publish_cv_.wait_for(lock, 50ms, [this]() {
        return !running_ || publish_queue_.size() > 0;
      });
      continue;
    }

    try {
      on_protocol_data(*envelope);
    } catch (const std::exception &e) {
      runtime_stats_.publish_exceptions.fetch_add(1, std::memory_order_relaxed);
      RCLCPP_ERROR_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                            "Publish exception: %s", e.what());
    } catch (...) {
      runtime_stats_.publish_exceptions.fetch_add(1, std::memory_order_relaxed);
      RCLCPP_ERROR_THROTTLE(this->get_logger(), *this->get_clock(), 2000,
                            "Unknown publish exception");
    }
  }
}

void RadarBridgeNode::watchdog_check() {

  if (!connected_) {
    return;
  }

  const auto last_rx_ns =
      last_rx_steady_ns_.load(std::memory_order_relaxed);

  // 尚未收到任何数据
  if (last_rx_ns == 0) {
    return;
  }

  const auto now = std::chrono::steady_clock::now();

  const auto age =
      std::chrono::duration_cast<std::chrono::milliseconds>(
          now.time_since_epoch() -
          std::chrono::nanoseconds(last_rx_ns))
          .count();

  if (age > watchdog_timeout_ms_) {

    runtime_stats_.watchdog_triggered.store(
        true,
        std::memory_order_relaxed);

    RCLCPP_WARN_THROTTLE(
        this->get_logger(),
        *this->get_clock(),
        2000,
        "Watchdog timeout: no RX for %ld ms",
        age);

  } else {

    runtime_stats_.watchdog_triggered.store(
        false,
        std::memory_order_relaxed);
  }
}

void RadarBridgeNode::publish_status() {
  radar_interfaces::msg::RadarCommStatus msg;
  msg.stamp = now_msg();
  msg.connected = connected_.load(std::memory_order_relaxed);
  msg.debug_enabled = debug_enabled_;
  msg.raw_recording_enabled = record_raw_;
  msg.watchdog_triggered =
      runtime_stats_.watchdog_triggered.load(std::memory_order_relaxed);
  msg.port = radar_comm::describe_transport(transport_config_);
  msg.baud_rate =
      transport_config_.type == radar_comm::TransportConfig::Type::Serial
          ? static_cast<uint32_t>(transport_config_.baud_rate)
          : 0U;

  const auto parser_stats = parser_.statistics();
  msg.rx_bytes = parser_stats.rx_bytes;
  msg.rx_frames = parser_stats.rx_frames;
  msg.crc8_failures = parser_stats.crc8_failures;
  msg.crc16_failures = parser_stats.crc16_failures;
  msg.oversize_frames = parser_stats.oversize_frames;
  msg.timeout_drops = parser_stats.timeout_drops;
  msg.sync_recoveries = parser_stats.sync_recoveries;
  msg.decode_failures = parser_stats.decode_failures;
  msg.unknown_cmd_count = parser_stats.unknown_cmd_count;

  {
    std::lock_guard<std::mutex> lock(transport_mutex_);
    if (transport_) {
      const auto transport_stats = transport_->statistics();
      msg.rx_chunks = transport_stats.rx_chunks;
    }
  }

  msg.tx_frames = runtime_stats_.tx_frames.load(std::memory_order_relaxed);
  msg.tx_failures = runtime_stats_.tx_failures.load(std::memory_order_relaxed);
  msg.queue_overflows =
      runtime_stats_.queue_overflows.load(std::memory_order_relaxed);
  msg.reconnect_attempts =
      runtime_stats_.reconnect_attempts.load(std::memory_order_relaxed);
  msg.serial_disconnects =
      runtime_stats_.serial_disconnects.load(std::memory_order_relaxed);
  msg.parse_exceptions =
      runtime_stats_.parse_exceptions.load(std::memory_order_relaxed);
  msg.publish_exceptions =
      runtime_stats_.publish_exceptions.load(std::memory_order_relaxed);
  msg.last_rx_age_ms = static_cast<uint64_t>(
      std::chrono::duration_cast<std::chrono::milliseconds>(
          std::chrono::steady_clock::now().time_since_epoch() -
          std::chrono::nanoseconds(
              last_rx_steady_ns_.load(std::memory_order_relaxed)))
          .count());
  msg.publish_queue_depth = static_cast<uint32_t>(publish_queue_.size());

  status_pub_->publish(msg);
}

void RadarBridgeNode::on_protocol_data(const ProtocolEnvelope &envelope) {
  std::visit(
      [this, &envelope](auto &&arg) {
        using T = std::decay_t<decltype(arg)>;
        if constexpr (std::is_same_v<T, std::monostate>) {
          return;
        } else if constexpr (std::is_same_v<T,
                                            radar_comm::EnemyRobotPosition>) {
          publish_position(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T, radar_comm::EnemyRobotHP>) {
          publish_hp(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T,
                                            radar_comm::EnemyRemainingAmmo>) {
          publish_ammo(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T, radar_comm::RadarMarkProgress>) {
          publish_mark_progress(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T, radar_comm::RadarInfo>) {
          publish_radar_info(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T, radar_comm::RadarInfoForward>) {
          publish_radar_info_forward(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T, radar_comm::MapRobotData>) {
          publish_map_robot_data(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T,
                                            radar_comm::RadarDecisionCommand>) {
          publish_decision_command(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T,
                                            radar_comm::EnemyTeamMacroStatus>) {
          publish_macro_status(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T, radar_comm::EnemyRobotBuffs>) {
          publish_buffs(arg, envelope.stamp);
        } else if constexpr (std::is_same_v<T,
                                            radar_comm::EnemyInterferenceKey>) {
          publish_key(arg, envelope.stamp);
        }
      },
      envelope.data);
}

void RadarBridgeNode::publish_position(
    const radar_comm::EnemyRobotPosition &pos,
    const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::EnemyPosition msg;
  msg.stamp = stamp;
  msg.hero_x = pos.hero_x;
  msg.hero_y = pos.hero_y;
  msg.engineer_x = pos.engineer_x;
  msg.engineer_y = pos.engineer_y;
  msg.infantry_3_x = pos.infantry_3_x;
  msg.infantry_3_y = pos.infantry_3_y;
  msg.infantry_4_x = pos.infantry_4_x;
  msg.infantry_4_y = pos.infantry_4_y;
  msg.aerial_x = pos.aerial_x;
  msg.aerial_y = pos.aerial_y;
  msg.sentry_x = pos.sentry_x;
  msg.sentry_y = pos.sentry_y;
  position_pub_->publish(msg);
}

void RadarBridgeNode::publish_hp(const radar_comm::EnemyRobotHP &hp,
                                 const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::EnemyHP msg;
  msg.stamp = stamp;
  msg.hero_hp = hp.hero_hp;
  msg.engineer_hp = hp.engineer_hp;
  msg.infantry_3_hp = hp.infantry_3_hp;
  msg.infantry_4_hp = hp.infantry_4_hp;
  msg.reserved = hp.reserved;
  msg.sentry_hp = hp.sentry_hp;
  hp_pub_->publish(msg);
}

void RadarBridgeNode::publish_ammo(const radar_comm::EnemyRemainingAmmo &ammo,
                                   const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::EnemyAmmo msg;
  msg.stamp = stamp;
  msg.hero_ammo = ammo.hero_ammo;
  msg.infantry_3_ammo = ammo.infantry_3_ammo;
  msg.infantry_4_ammo = ammo.infantry_4_ammo;
  msg.aerial_ammo = ammo.aerial_ammo;
  msg.sentry_ammo = ammo.sentry_ammo;
  ammo_pub_->publish(msg);
}

void RadarBridgeNode::publish_macro_status(
    const radar_comm::EnemyTeamMacroStatus &status,
    const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::MacroStatus msg;
  msg.stamp = stamp;
  msg.remaining_gold = status.remaining_gold;
  msg.total_gold = status.total_gold;
  msg.enemy_supply_area_occupied = status.enemy_supply_area_occupied;
  msg.enemy_central_highland_status = status.enemy_central_highland_status;
  msg.enemy_trapezoid_highland_occupied =
      status.enemy_trapezoid_highland_occupied;
  msg.enemy_fort_buff_status = status.enemy_fort_buff_status;
  msg.enemy_outpost_buff_status = status.enemy_outpost_buff_status;
  msg.enemy_base_buff_occupied = status.enemy_base_buff_occupied;
  msg.enemy_tunnel_pre_jump_occupied = status.enemy_tunnel_pre_jump_occupied;
  msg.enemy_tunnel_post_jump_occupied = status.enemy_tunnel_post_jump_occupied;
  msg.ally_side_tunnel_pre_jump_occupied =
      status.ally_side_tunnel_pre_jump_occupied;
  msg.ally_side_tunnel_post_jump_occupied =
      status.ally_side_tunnel_post_jump_occupied;
  msg.enemy_highland_upper_occupied = status.enemy_highland_upper_occupied;
  msg.enemy_jump_upper_occupied = status.enemy_jump_upper_occupied;
  msg.enemy_road_upper_occupied = status.enemy_road_upper_occupied;
  macro_pub_->publish(msg);
}

void RadarBridgeNode::publish_buffs(
    const radar_comm::EnemyRobotBuffs &buffs,
    const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::Buffs msg;
  msg.stamp = stamp;
  msg.hero_health_regen = buffs.hero_health_regen;
  msg.hero_cooling_boost = buffs.hero_cooling_boost;
  msg.hero_defense_boost = buffs.hero_defense_boost;
  msg.hero_defense_debuff = buffs.hero_defense_debuff;
  msg.hero_attack_boost = buffs.hero_attack_boost;
  msg.engineer_health_regen = buffs.engineer_health_regen;
  msg.engineer_cooling_boost = buffs.engineer_cooling_boost;
  msg.engineer_defense_boost = buffs.engineer_defense_boost;
  msg.engineer_defense_debuff = buffs.engineer_defense_debuff;
  msg.engineer_attack_boost = buffs.engineer_attack_boost;
  msg.infantry_3_health_regen = buffs.infantry_3_health_regen;
  msg.infantry_3_cooling_boost = buffs.infantry_3_cooling_boost;
  msg.infantry_3_defense_boost = buffs.infantry_3_defense_boost;
  msg.infantry_3_defense_debuff = buffs.infantry_3_defense_debuff;
  msg.infantry_3_attack_boost = buffs.infantry_3_attack_boost;
  msg.infantry_4_health_regen = buffs.infantry_4_health_regen;
  msg.infantry_4_cooling_boost = buffs.infantry_4_cooling_boost;
  msg.infantry_4_defense_boost = buffs.infantry_4_defense_boost;
  msg.infantry_4_defense_debuff = buffs.infantry_4_defense_debuff;
  msg.infantry_4_attack_boost = buffs.infantry_4_attack_boost;
  msg.sentry_health_regen = buffs.sentry_health_regen;
  msg.sentry_cooling_boost = buffs.sentry_cooling_boost;
  msg.sentry_defense_boost = buffs.sentry_defense_boost;
  msg.sentry_defense_debuff = buffs.sentry_defense_debuff;
  msg.sentry_attack_boost = buffs.sentry_attack_boost;
  msg.sentry_posture = buffs.sentry_posture;
  buffs_pub_->publish(msg);
}

void RadarBridgeNode::publish_key(const radar_comm::EnemyInterferenceKey &key,
                                  const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::InterferenceKey msg;
  msg.stamp = stamp;
  msg.key = std::string(key.key.data(), key.key.size());
  key_pub_->publish(msg);
}

void RadarBridgeNode::publish_mark_progress(
    const radar_comm::RadarMarkProgress &progress,
    const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::RadarMarkProgress msg;
  msg.stamp = stamp;
  msg.enemy_hero_marked = progress.enemy_hero_marked;
  msg.enemy_engineer_marked = progress.enemy_engineer_marked;
  msg.enemy_infantry_3_marked = progress.enemy_infantry_3_marked;
  msg.enemy_infantry_4_marked = progress.enemy_infantry_4_marked;
  msg.enemy_aerial_marked = progress.enemy_aerial_marked;
  msg.enemy_sentry_marked = progress.enemy_sentry_marked;
  msg.ally_hero_marked = progress.ally_hero_marked;
  msg.ally_engineer_marked = progress.ally_engineer_marked;
  msg.ally_infantry_3_marked = progress.ally_infantry_3_marked;
  msg.ally_infantry_4_marked = progress.ally_infantry_4_marked;
  msg.ally_aerial_marked = progress.ally_aerial_marked;
  msg.ally_sentry_marked = progress.ally_sentry_marked;
  mark_pub_->publish(msg);
}

void RadarBridgeNode::publish_radar_info(
    const radar_comm::RadarInfo &info,
    const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::RadarInfo msg;
  msg.stamp = stamp;
  msg.double_vulnerability_chances = info.double_vulnerability_chances;
  msg.opponent_double_vulnerability_active =
      info.opponent_double_vulnerability_active;
  msg.encryption_level = info.encryption_level;
  msg.key_change_enabled = info.key_change_enabled;
  radar_info_pub_->publish(msg);
}

void RadarBridgeNode::publish_radar_info_forward(
    const radar_comm::RadarInfoForward &info,
    const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::RadarInfoForward msg;
  msg.stamp = stamp;
  msg.robot_id = info.robot_id;
  msg.encryption_level = info.encryption_level;
  radar_info_forward_pub_->publish(msg);
}

void RadarBridgeNode::publish_map_robot_data(
    const radar_comm::MapRobotData &data,
    const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::MapRobotData msg;
  msg.stamp = stamp;
  msg.opponent_hero_x = data.opponent_hero_x;
  msg.opponent_hero_y = data.opponent_hero_y;
  msg.opponent_engineer_x = data.opponent_engineer_x;
  msg.opponent_engineer_y = data.opponent_engineer_y;
  msg.opponent_infantry_3_x = data.opponent_infantry_3_x;
  msg.opponent_infantry_3_y = data.opponent_infantry_3_y;
  msg.opponent_infantry_4_x = data.opponent_infantry_4_x;
  msg.opponent_infantry_4_y = data.opponent_infantry_4_y;
  msg.opponent_aerial_x = data.opponent_aerial_x;
  msg.opponent_aerial_y = data.opponent_aerial_y;
  msg.opponent_sentry_x = data.opponent_sentry_x;
  msg.opponent_sentry_y = data.opponent_sentry_y;
  msg.ally_hero_x = data.ally_hero_x;
  msg.ally_hero_y = data.ally_hero_y;
  msg.ally_engineer_x = data.ally_engineer_x;
  msg.ally_engineer_y = data.ally_engineer_y;
  msg.ally_infantry_3_x = data.ally_infantry_3_x;
  msg.ally_infantry_3_y = data.ally_infantry_3_y;
  msg.ally_infantry_4_x = data.ally_infantry_4_x;
  msg.ally_infantry_4_y = data.ally_infantry_4_y;
  msg.ally_aerial_x = data.ally_aerial_x;
  msg.ally_aerial_y = data.ally_aerial_y;
  msg.ally_sentry_x = data.ally_sentry_x;
  msg.ally_sentry_y = data.ally_sentry_y;
  map_robot_data_pub_->publish(msg);
}

void RadarBridgeNode::publish_decision_command(
    const radar_comm::RadarDecisionCommand &cmd,
    const builtin_interfaces::msg::Time &stamp) {
  radar_interfaces::msg::RadarDecisionCommand msg;
  msg.stamp = stamp;
  msg.sender_id = cmd.sender_id;
  msg.receiver_id = cmd.receiver_id;
  msg.double_vulnerability_request = cmd.double_vulnerability_request;
  msg.password_command_type = cmd.password_command_type;
  msg.password = std::string(cmd.password.data(), cmd.password.size());
  decision_cmd_pub_->publish(msg);
}

void RadarBridgeNode::on_radar_info_forward_tx(
    const radar_interfaces::msg::RadarInfoForward &msg) {
  radar_comm::RadarInfoForward data{};
  data.robot_id = msg.robot_id;
  data.encryption_level = msg.encryption_level;
  send_protocol_data(data);
}

void RadarBridgeNode::on_map_robot_data_tx(
    const radar_interfaces::msg::MapRobotData &msg) {
  radar_comm::MapRobotData data{};
  data.opponent_hero_x = msg.opponent_hero_x;
  data.opponent_hero_y = msg.opponent_hero_y;
  data.opponent_engineer_x = msg.opponent_engineer_x;
  data.opponent_engineer_y = msg.opponent_engineer_y;
  data.opponent_infantry_3_x = msg.opponent_infantry_3_x;
  data.opponent_infantry_3_y = msg.opponent_infantry_3_y;
  data.opponent_infantry_4_x = msg.opponent_infantry_4_x;
  data.opponent_infantry_4_y = msg.opponent_infantry_4_y;
  data.opponent_aerial_x = msg.opponent_aerial_x;
  data.opponent_aerial_y = msg.opponent_aerial_y;
  data.opponent_sentry_x = msg.opponent_sentry_x;
  data.opponent_sentry_y = msg.opponent_sentry_y;
  data.ally_hero_x = msg.ally_hero_x;
  data.ally_hero_y = msg.ally_hero_y;
  data.ally_engineer_x = msg.ally_engineer_x;
  data.ally_engineer_y = msg.ally_engineer_y;
  data.ally_infantry_3_x = msg.ally_infantry_3_x;
  data.ally_infantry_3_y = msg.ally_infantry_3_y;
  data.ally_infantry_4_x = msg.ally_infantry_4_x;
  data.ally_infantry_4_y = msg.ally_infantry_4_y;
  data.ally_aerial_x = msg.ally_aerial_x;
  data.ally_aerial_y = msg.ally_aerial_y;
  data.ally_sentry_x = msg.ally_sentry_x;
  data.ally_sentry_y = msg.ally_sentry_y;
  send_protocol_data(data);
}

void RadarBridgeNode::on_decision_command_tx(
    const radar_interfaces::msg::RadarDecisionCommand &msg) {
  if (msg.password.size() != 6) {
    RCLCPP_ERROR(this->get_logger(),
                 "Radar decision password must be exactly 6 ASCII characters");
    return;
  }

  const bool ascii_ok =
      std::all_of(msg.password.begin(), msg.password.end(),
                  [](unsigned char c) { return std::isalnum(c) != 0; });
  if (!ascii_ok) {
    RCLCPP_ERROR(
        this->get_logger(),
        "Radar decision password must contain only ASCII letters or digits");
    return;
  }

  radar_comm::RadarDecisionCommand data{};
  data.sender_id = msg.sender_id;
  data.receiver_id = msg.receiver_id;
  data.double_vulnerability_request = msg.double_vulnerability_request;
  data.password_command_type = msg.password_command_type;
  std::copy_n(msg.password.begin(), data.password.size(),
              data.password.begin());
  send_protocol_data(data);
}

void RadarBridgeNode::send_protocol_data(const radar_comm::ProtocolData &data) {
  const auto frame = radar_comm::encode_frame(data, tx_seq_++);
  if (!frame.has_value()) {
    runtime_stats_.tx_failures.fetch_add(1, std::memory_order_relaxed);
    RCLCPP_ERROR(this->get_logger(), "Failed to encode protocol frame");
    return;
  }

  std::lock_guard<std::mutex> lock(transport_mutex_);
  if (!transport_ || !connected_) {
    runtime_stats_.tx_failures.fetch_add(1, std::memory_order_relaxed);
    RCLCPP_WARN(this->get_logger(), "Transport is not connected, drop tx frame");
    return;
  }

  if (!transport_->write(*frame)) {
    runtime_stats_.tx_failures.fetch_add(1, std::memory_order_relaxed);
    RCLCPP_ERROR(this->get_logger(),
                 "Failed to write protocol frame to transport");
    return;
  }

  runtime_stats_.tx_frames.fetch_add(1, std::memory_order_relaxed);
  if (debug_enabled_) {
    RCLCPP_DEBUG(this->get_logger(), "TX HEX [%zu]: %s", frame->size(),
                 bytes_to_hex(frame->data(), frame->size()).c_str());
  }
}
