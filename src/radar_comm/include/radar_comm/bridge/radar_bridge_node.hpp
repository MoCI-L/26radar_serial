#pragma once

#include <atomic>
#include <condition_variable>
#include <cstdint>
#include <fstream>
#include <memory>
#include <mutex>
#include <thread>

#include <builtin_interfaces/msg/time.hpp>
#include <rclcpp/rclcpp.hpp>
#include <rcl_interfaces/msg/set_parameters_result.hpp>

#include "radar_comm/common/spsc_queue.hpp"
#include "radar_interfaces/msg/enemy_position.hpp"
#include "radar_interfaces/msg/enemy_hp.hpp"
#include "radar_interfaces/msg/enemy_ammo.hpp"
#include "radar_interfaces/msg/macro_status.hpp"
#include "radar_interfaces/msg/buffs.hpp"
#include "radar_interfaces/msg/interference_key.hpp"
#include "radar_interfaces/msg/radar_mark_progress.hpp"
#include "radar_interfaces/msg/radar_info.hpp"
#include "radar_interfaces/msg/radar_info_forward.hpp"
#include "radar_interfaces/msg/map_robot_data.hpp"
#include "radar_interfaces/msg/radar_decision_command.hpp"
#include "radar_interfaces/msg/radar_comm_status.hpp"

#include "radar_comm/transport/transport.hpp"
#include "radar_comm/protocol/encoder.hpp"
#include "radar_comm/protocol/parser.hpp"
#include "radar_comm/protocol/types.hpp"

class RadarBridgeNode : public rclcpp::Node {
public:
    RadarBridgeNode();
    ~RadarBridgeNode();

private:
    struct ProtocolEnvelope {
        builtin_interfaces::msg::Time stamp;
        uint16_t cmd_id{0};
        radar_comm::ProtocolData data{};
    };

    struct RuntimeStats {
        std::atomic<uint64_t> tx_frames{0};
        std::atomic<uint64_t> tx_failures{0};
        std::atomic<uint64_t> queue_overflows{0};
        std::atomic<uint64_t> reconnect_attempts{0};
        std::atomic<uint64_t> serial_disconnects{0};
        std::atomic<uint64_t> parse_exceptions{0};
        std::atomic<uint64_t> publish_exceptions{0};
        std::atomic<bool> watchdog_triggered{false};
    };

    // 参数
    void declare_parameters();
    rcl_interfaces::msg::SetParametersResult on_parameter_change(
        const std::vector<rclcpp::Parameter>& params);
    void reload_runtime_parameters();
    rclcpp::QoS make_data_qos() const;
    rclcpp::QoS make_status_qos() const;
    builtin_interfaces::msg::Time now_msg();

    // 传输层连接管理
    void connect_transport();
    void disconnect_transport();
    void reconnect_loop();
    void handle_transport_chunk(const uint8_t *data, std::size_t size);
    void handle_transport_disconnect();
    void publish_loop();
    void publish_status();
    void watchdog_check();
    void maybe_record_raw(const uint8_t *data, std::size_t size);
    void maybe_log_hex(const uint8_t *data, std::size_t size);
    void bind_current_thread_if_needed(int cpu);

    // 协议数据处理
    void on_protocol_data(const ProtocolEnvelope& envelope);
    void publish_position(const radar_comm::EnemyRobotPosition& pos, const builtin_interfaces::msg::Time &stamp);
    void publish_hp(const radar_comm::EnemyRobotHP& hp, const builtin_interfaces::msg::Time &stamp);
    void publish_ammo(const radar_comm::EnemyRemainingAmmo& ammo, const builtin_interfaces::msg::Time &stamp);
    void publish_macro_status(const radar_comm::EnemyTeamMacroStatus& status, const builtin_interfaces::msg::Time &stamp);
    void publish_buffs(const radar_comm::EnemyRobotBuffs& buffs, const builtin_interfaces::msg::Time &stamp);
    void publish_key(const radar_comm::EnemyInterferenceKey& key, const builtin_interfaces::msg::Time &stamp);
    void publish_mark_progress(const radar_comm::RadarMarkProgress& progress, const builtin_interfaces::msg::Time &stamp);
    void publish_radar_info(const radar_comm::RadarInfo& info, const builtin_interfaces::msg::Time &stamp);
    void publish_radar_info_forward(const radar_comm::RadarInfoForward& info, const builtin_interfaces::msg::Time &stamp);
    void publish_map_robot_data(const radar_comm::MapRobotData& data, const builtin_interfaces::msg::Time &stamp);
    void publish_decision_command(const radar_comm::RadarDecisionCommand& cmd, const builtin_interfaces::msg::Time &stamp);
    void on_radar_info_forward_tx(const radar_interfaces::msg::RadarInfoForward& msg);
    void on_map_robot_data_tx(const radar_interfaces::msg::MapRobotData& msg);
    void on_decision_command_tx(const radar_interfaces::msg::RadarDecisionCommand& msg);
    void send_protocol_data(const radar_comm::ProtocolData& data);

    // 发布者
    rclcpp::Publisher<radar_interfaces::msg::EnemyPosition>::SharedPtr position_pub_;
    rclcpp::Publisher<radar_interfaces::msg::EnemyHP>::SharedPtr hp_pub_;
    rclcpp::Publisher<radar_interfaces::msg::EnemyAmmo>::SharedPtr ammo_pub_;
    rclcpp::Publisher<radar_interfaces::msg::MacroStatus>::SharedPtr macro_pub_;
    rclcpp::Publisher<radar_interfaces::msg::Buffs>::SharedPtr buffs_pub_;
    rclcpp::Publisher<radar_interfaces::msg::InterferenceKey>::SharedPtr key_pub_;
    rclcpp::Publisher<radar_interfaces::msg::RadarMarkProgress>::SharedPtr mark_pub_;
    rclcpp::Publisher<radar_interfaces::msg::RadarInfo>::SharedPtr radar_info_pub_;
    rclcpp::Publisher<radar_interfaces::msg::RadarInfoForward>::SharedPtr radar_info_forward_pub_;
    rclcpp::Publisher<radar_interfaces::msg::MapRobotData>::SharedPtr map_robot_data_pub_;
    rclcpp::Publisher<radar_interfaces::msg::RadarDecisionCommand>::SharedPtr decision_cmd_pub_;
    rclcpp::Publisher<radar_interfaces::msg::RadarCommStatus>::SharedPtr status_pub_;

    // 发送订阅者
    rclcpp::Subscription<radar_interfaces::msg::RadarInfoForward>::SharedPtr radar_info_forward_tx_sub_;
    rclcpp::Subscription<radar_interfaces::msg::MapRobotData>::SharedPtr map_robot_data_tx_sub_;
    rclcpp::Subscription<radar_interfaces::msg::RadarDecisionCommand>::SharedPtr decision_cmd_tx_sub_;

    // 底层组件
    std::unique_ptr<radar_comm::Transport> transport_;
    radar_comm::ProtocolParser parser_;
    radar_comm::SpscQueue<ProtocolEnvelope, 2048> publish_queue_;

    // 状态
    std::mutex transport_mutex_;
    std::mutex publish_cv_mutex_;
    std::mutex record_mutex_;
    std::atomic<bool> connected_{false};
    std::atomic<bool> running_{true};
    std::thread reconnect_thread_;
    std::thread publish_thread_;
    int reconnect_interval_ms_{1000};
    uint8_t tx_seq_{0};
    bool debug_enabled_{false};
    bool record_raw_{false};
    bool best_effort_qos_{true};
    int rx_cpu_affinity_{-1};
    int publish_cpu_affinity_{-1};
    int reconnect_cpu_affinity_{-1};
    int publish_queue_warn_threshold_{1536};
    int frame_timeout_ms_{100};
    int watchdog_timeout_ms_{2000};
    int transport_poll_timeout_ms_{100};
    int read_buffer_size_{4096};
    radar_comm::TransportConfig transport_config_{};
    std::string record_path_;
    std::ofstream raw_record_stream_;
    std::condition_variable publish_cv_;
    rclcpp::TimerBase::SharedPtr status_timer_;
    rclcpp::TimerBase::SharedPtr watchdog_timer_;
    std::atomic<int64_t> last_rx_steady_ns_{0};
    RuntimeStats runtime_stats_;
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr
        parameter_callback_handle_;
};
