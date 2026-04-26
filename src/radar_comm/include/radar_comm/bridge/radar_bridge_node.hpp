#pragma once

#include <atomic>
#include <memory>
#include <mutex>
#include <optional>
#include <thread>

#include <rclcpp/rclcpp.hpp>
#include <rcl_interfaces/msg/set_parameters_result.hpp>

#include "radar_interfaces/msg/enemy_position.hpp"
#include "radar_interfaces/msg/enemy_hp.hpp"
#include "radar_interfaces/msg/enemy_ammo.hpp"
#include "radar_interfaces/msg/macro_status.hpp"
#include "radar_interfaces/msg/buffs.hpp"
#include "radar_interfaces/msg/interference_key.hpp"
#include "radar_interfaces/msg/radar_mark_progress.hpp"
#include "radar_interfaces/msg/radar_info.hpp"
#include "radar_interfaces/msg/map_robot_data.hpp"
#include "radar_interfaces/msg/radar_decision_command.hpp"

#include "radar_comm/transport/serial_port.hpp"
#include "radar_comm/protocol/encoder.hpp"
#include "radar_comm/protocol/parser.hpp"
#include "radar_comm/protocol/types.hpp"

class RadarBridgeNode : public rclcpp::Node {
public:
    RadarBridgeNode();
    ~RadarBridgeNode();

private:
    // 参数
    void declare_parameters();
    rcl_interfaces::msg::SetParametersResult on_parameter_change(
        const std::vector<rclcpp::Parameter>& params);

    // 串口连接管理
    void connect_serial();
    void disconnect_serial();
    void reconnect_loop();

    // 协议数据处理
    void on_protocol_data(const radar_comm::ProtocolData& data);
    void publish_position(const radar_comm::EnemyRobotPosition& pos);
    void publish_hp(const radar_comm::EnemyRobotHP& hp);
    void publish_ammo(const radar_comm::EnemyRemainingAmmo& ammo);
    void publish_macro_status(const radar_comm::EnemyTeamMacroStatus& status);
    void publish_buffs(const radar_comm::EnemyRobotBuffs& buffs);
    void publish_key(const radar_comm::EnemyInterferenceKey& key);
    void publish_mark_progress(const radar_comm::RadarMarkProgress& progress);
    void publish_radar_info(const radar_comm::RadarInfo& info);
    void publish_map_robot_data(const radar_comm::MapRobotData& data);
    void publish_decision_command(const radar_comm::RadarDecisionCommand& cmd);
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
    rclcpp::Publisher<radar_interfaces::msg::MapRobotData>::SharedPtr map_robot_data_pub_;
    rclcpp::Publisher<radar_interfaces::msg::RadarDecisionCommand>::SharedPtr decision_cmd_pub_;

    // 发送订阅者
    rclcpp::Subscription<radar_interfaces::msg::MapRobotData>::SharedPtr map_robot_data_tx_sub_;
    rclcpp::Subscription<radar_interfaces::msg::RadarDecisionCommand>::SharedPtr decision_cmd_tx_sub_;

    // 底层组件
    std::unique_ptr<radar_comm::SerialPort> serial_;
    radar_comm::ProtocolParser parser_;

    // 状态
    std::mutex serial_mutex_;
    std::atomic<bool> connected_{false};
    std::atomic<bool> running_{true};
    std::thread reconnect_thread_;
    int reconnect_interval_ms_{1000};
    uint8_t tx_seq_{0};
    rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr
        parameter_callback_handle_;
};
