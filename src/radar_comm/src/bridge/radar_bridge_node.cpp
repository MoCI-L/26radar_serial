#include "radar_comm/bridge/radar_bridge_node.hpp"

#include <algorithm>
#include <cctype>
#include <chrono>
#include <functional>
#include <string>

using namespace std::chrono_literals;

// ---------- 构造函数 ----------
RadarBridgeNode::RadarBridgeNode()
    : Node("radar_bridge_node") {
    declare_parameters();
    reconnect_interval_ms_ = this->get_parameter("reconnect_interval_ms").as_int();

    // 创建发布者
    position_pub_ = this->create_publisher<radar_interfaces::msg::EnemyPosition>("/radar/position", 10);
    hp_pub_       = this->create_publisher<radar_interfaces::msg::EnemyHP>("/radar/enemy_hp", 10);
    ammo_pub_     = this->create_publisher<radar_interfaces::msg::EnemyAmmo>("/radar/ammo", 10);
    macro_pub_    = this->create_publisher<radar_interfaces::msg::MacroStatus>("/radar/macro_status", 10);
    buffs_pub_    = this->create_publisher<radar_interfaces::msg::Buffs>("/radar/buff", 10);
    key_pub_      = this->create_publisher<radar_interfaces::msg::InterferenceKey>("/radar/key", 10);
    mark_pub_     = this->create_publisher<radar_interfaces::msg::RadarMarkProgress>("/radar/mark_progress", 10);
    radar_info_pub_ = this->create_publisher<radar_interfaces::msg::RadarInfo>("/radar/info", 10);
    map_robot_data_pub_ = this->create_publisher<radar_interfaces::msg::MapRobotData>("/radar/map_robot_data", 10);
    decision_cmd_pub_ = this->create_publisher<radar_interfaces::msg::RadarDecisionCommand>("/radar/decision_command", 10);

    map_robot_data_tx_sub_ = this->create_subscription<radar_interfaces::msg::MapRobotData>(
        "/radar/tx/map_robot_data", 10,
        [this](const radar_interfaces::msg::MapRobotData& msg) { on_map_robot_data_tx(msg); });
    decision_cmd_tx_sub_ = this->create_subscription<radar_interfaces::msg::RadarDecisionCommand>(
        "/radar/tx/decision_command", 10,
        [this](const radar_interfaces::msg::RadarDecisionCommand& msg) { on_decision_command_tx(msg); });

    // 参数变化回调
    parameter_callback_handle_ = this->add_on_set_parameters_callback(
        std::bind(&RadarBridgeNode::on_parameter_change, this, std::placeholders::_1));

    // 启动重连线程
    reconnect_thread_ = std::thread(&RadarBridgeNode::reconnect_loop, this);
}

// ---------- 析构函数 ----------
RadarBridgeNode::~RadarBridgeNode() {
    running_ = false;
    if (reconnect_thread_.joinable()) {
        reconnect_thread_.join();
    }
    disconnect_serial();
}

// ---------- 参数声明 ----------
void RadarBridgeNode::declare_parameters() {
    this->declare_parameter("port", "/dev/ttyACM0");
    this->declare_parameter("baud_rate", 115200);
    this->declare_parameter("reconnect_interval_ms", 1000);
}

// ---------- 参数变化回调 ----------
rcl_interfaces::msg::SetParametersResult RadarBridgeNode::on_parameter_change(
    const std::vector<rclcpp::Parameter>& params) {
    rcl_interfaces::msg::SetParametersResult result;
    result.successful = true;
    for (const auto& p : params) {
        if (p.get_name() == "port" || p.get_name() == "baud_rate") {
            RCLCPP_INFO(this->get_logger(), "Parameter changed, reconnecting...");
            disconnect_serial();  // 重连线程会自动用新参数重连
        } else if (p.get_name() == "reconnect_interval_ms") {
            reconnect_interval_ms_ = p.as_int();
        }
    }
    return result;
}

// ---------- 断开串口 ----------
void RadarBridgeNode::disconnect_serial() {
    std::lock_guard<std::mutex> lock(serial_mutex_);
    if (serial_) {
        serial_->stop();
        serial_->close();
        serial_.reset();
    }
    connected_ = false;
}

// ---------- 连接串口 ----------
void RadarBridgeNode::connect_serial() {
    std::lock_guard<std::mutex> lock(serial_mutex_);
    if (serial_) {
        return;
    }

    std::string port = this->get_parameter("port").as_string();
    int baud = this->get_parameter("baud_rate").as_int();

    serial_ = std::make_unique<radar_comm::SerialPort>();
    if (serial_->open(port, baud)) {
        // 设置字节回调：每个字节送入 ProtocolParser
        serial_->setCallback([this](uint8_t byte) {
            auto result = parser_.input(byte);
            if (result.has_value()) {
                on_protocol_data(result.value());
            }
        });
        serial_->start();
        connected_ = true;
        RCLCPP_INFO(this->get_logger(), "Connected to %s", port.c_str());
    } else {
        serial_.reset();
        connected_ = false;
        RCLCPP_WARN(this->get_logger(), "Failed to open %s", port.c_str());
    }
}

// ---------- 重连循环（独立线程） ----------
void RadarBridgeNode::reconnect_loop() {
    while (rclcpp::ok() && running_) {
        if (!connected_) {
            connect_serial();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(reconnect_interval_ms_));
    }
}

// ---------- 协议数据分发（使用 std::visit） ----------
void RadarBridgeNode::on_protocol_data(const radar_comm::ProtocolData& data) {
    std::visit([this](auto&& arg) {
        using T = std::decay_t<decltype(arg)>;
        if constexpr (std::is_same_v<T, std::monostate>) {
            // 无效数据，忽略
        } else if constexpr (std::is_same_v<T, radar_comm::EnemyRobotPosition>) {
            publish_position(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::EnemyRobotHP>) {
            publish_hp(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::EnemyRemainingAmmo>) {
            publish_ammo(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::RadarMarkProgress>) {
            publish_mark_progress(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::RadarInfo>) {
            publish_radar_info(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::MapRobotData>) {
            publish_map_robot_data(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::RadarDecisionCommand>) {
            publish_decision_command(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::EnemyTeamMacroStatus>) {
            publish_macro_status(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::EnemyRobotBuffs>) {
            publish_buffs(arg);
        } else if constexpr (std::is_same_v<T, radar_comm::EnemyInterferenceKey>) {
            publish_key(arg);
        }
    }, data);
}

// ---------- 各类型发布函数 ----------
void RadarBridgeNode::publish_position(const radar_comm::EnemyRobotPosition& pos) {
    auto msg = radar_interfaces::msg::EnemyPosition();
    msg.hero_x        = pos.hero_x;
    msg.hero_y        = pos.hero_y;
    msg.engineer_x    = pos.engineer_x;
    msg.engineer_y    = pos.engineer_y;
    msg.infantry_3_x  = pos.infantry_3_x;
    msg.infantry_3_y  = pos.infantry_3_y;
    msg.infantry_4_x  = pos.infantry_4_x;
    msg.infantry_4_y  = pos.infantry_4_y;
    msg.aerial_x      = pos.aerial_x;
    msg.aerial_y      = pos.aerial_y;
    msg.sentry_x      = pos.sentry_x;
    msg.sentry_y      = pos.sentry_y;
    position_pub_->publish(msg);
}

void RadarBridgeNode::publish_hp(const radar_comm::EnemyRobotHP& hp) {
    auto msg = radar_interfaces::msg::EnemyHP();
    msg.hero_hp       = hp.hero_hp;
    msg.engineer_hp   = hp.engineer_hp;
    msg.infantry_3_hp = hp.infantry_3_hp;
    msg.infantry_4_hp = hp.infantry_4_hp;
    msg.reserved      = hp.reserved;
    msg.sentry_hp     = hp.sentry_hp;
    hp_pub_->publish(msg);
}

void RadarBridgeNode::publish_ammo(const radar_comm::EnemyRemainingAmmo& ammo) {
    auto msg = radar_interfaces::msg::EnemyAmmo();
    msg.hero_ammo         = ammo.hero_ammo;
    msg.infantry_3_ammo   = ammo.infantry_3_ammo;
    msg.infantry_4_ammo   = ammo.infantry_4_ammo;
    msg.aerial_ammo       = ammo.aerial_ammo;
    msg.sentry_ammo       = ammo.sentry_ammo;
    ammo_pub_->publish(msg);
}

void RadarBridgeNode::publish_mark_progress(const radar_comm::RadarMarkProgress& progress) {
    auto msg = radar_interfaces::msg::RadarMarkProgress();
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

void RadarBridgeNode::publish_radar_info(const radar_comm::RadarInfo& info) {
    auto msg = radar_interfaces::msg::RadarInfo();
    msg.double_vulnerability_chances = info.double_vulnerability_chances;
    msg.opponent_double_vulnerability_active = info.opponent_double_vulnerability_active;
    msg.encryption_level = info.encryption_level;
    msg.key_change_enabled = info.key_change_enabled;
    radar_info_pub_->publish(msg);
}

void RadarBridgeNode::publish_macro_status(const radar_comm::EnemyTeamMacroStatus& status) {
    auto msg = radar_interfaces::msg::MacroStatus();
    msg.remaining_gold = status.remaining_gold;
    msg.total_gold     = status.total_gold;

    msg.enemy_supply_area_occupied = status.enemy_supply_area_occupied;
    msg.enemy_central_highland_status = status.enemy_central_highland_status;
    msg.enemy_trapezoid_highland_occupied = status.enemy_trapezoid_highland_occupied;
    msg.enemy_fort_buff_status = status.enemy_fort_buff_status;
    msg.enemy_outpost_buff_status = status.enemy_outpost_buff_status;
    msg.enemy_base_buff_occupied = status.enemy_base_buff_occupied;
    msg.enemy_tunnel_pre_jump_occupied = status.enemy_tunnel_pre_jump_occupied;
    msg.enemy_tunnel_post_jump_occupied = status.enemy_tunnel_post_jump_occupied;
    msg.ally_side_tunnel_pre_jump_occupied = status.ally_side_tunnel_pre_jump_occupied;
    msg.ally_side_tunnel_post_jump_occupied = status.ally_side_tunnel_post_jump_occupied;
    msg.enemy_highland_upper_occupied = status.enemy_highland_upper_occupied;
    msg.enemy_jump_upper_occupied = status.enemy_jump_upper_occupied;
    msg.enemy_road_upper_occupied = status.enemy_road_upper_occupied;
    macro_pub_->publish(msg);
}

void RadarBridgeNode::publish_buffs(const radar_comm::EnemyRobotBuffs& buffs) {
    auto msg = radar_interfaces::msg::Buffs();
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

void RadarBridgeNode::publish_key(const radar_comm::EnemyInterferenceKey& key) {
    auto msg = radar_interfaces::msg::InterferenceKey();
    msg.key = std::string(key.key.data(), 6);
    key_pub_->publish(msg);
}

void RadarBridgeNode::publish_map_robot_data(const radar_comm::MapRobotData& data) {
    auto msg = radar_interfaces::msg::MapRobotData();
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

void RadarBridgeNode::publish_decision_command(const radar_comm::RadarDecisionCommand& cmd) {
    auto msg = radar_interfaces::msg::RadarDecisionCommand();
    msg.sender_id = cmd.sender_id;
    msg.receiver_id = cmd.receiver_id;
    msg.double_vulnerability_request = cmd.double_vulnerability_request;
    msg.password_command_type = cmd.password_command_type;
    msg.password = std::string(cmd.password.data(), cmd.password.size());
    decision_cmd_pub_->publish(msg);
}

void RadarBridgeNode::on_map_robot_data_tx(const radar_interfaces::msg::MapRobotData& msg) {
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

void RadarBridgeNode::on_decision_command_tx(const radar_interfaces::msg::RadarDecisionCommand& msg) {
    if (msg.password.size() != 6) {
        RCLCPP_ERROR(this->get_logger(), "Radar decision password must be exactly 6 ASCII characters");
        return;
    }

    const bool ascii_ok = std::all_of(
        msg.password.begin(), msg.password.end(),
        [](unsigned char c) { return std::isalnum(c) != 0; });
    if (!ascii_ok) {
        RCLCPP_ERROR(this->get_logger(), "Radar decision password must contain only ASCII letters or digits");
        return;
    }

    radar_comm::RadarDecisionCommand data{};
    data.sender_id = msg.sender_id;
    data.receiver_id = msg.receiver_id;
    data.double_vulnerability_request = msg.double_vulnerability_request;
    data.password_command_type = msg.password_command_type;
    std::copy_n(msg.password.begin(), data.password.size(), data.password.begin());
    send_protocol_data(data);
}

void RadarBridgeNode::send_protocol_data(const radar_comm::ProtocolData& data) {
    const auto frame = radar_comm::encode_frame(data, tx_seq_++);
    if (!frame.has_value()) {
        RCLCPP_ERROR(this->get_logger(), "Failed to encode protocol frame");
        return;
    }

    std::lock_guard<std::mutex> lock(serial_mutex_);
    if (!serial_ || !connected_) {
        RCLCPP_WARN(this->get_logger(), "Serial port is not connected, drop tx frame");
        return;
    }

    if (!serial_->write(*frame)) {
        RCLCPP_ERROR(this->get_logger(), "Failed to write protocol frame to serial");
    }
}
