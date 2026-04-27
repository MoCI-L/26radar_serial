#include "radar_comm/protocol/parser.hpp"
#include "radar_comm/protocol/encoder.hpp"
#include "radar_comm/protocol/types.hpp"

#include <rclcpp/rclcpp.hpp>
#include <vector>
#include <cstring>
#include <chrono>

using namespace std::chrono_literals;

class SerialSimulatorNode : public rclcpp::Node {
public:
    SerialSimulatorNode()
        : Node("serial_simulator_node")
    {
        parser_ = std::make_unique<radar_comm::ProtocolParser>();

        // 定时模拟接收数据（每2秒）
        recv_timer_ = this->create_wall_timer(2s, [this]() { simulate_receive_data(); });
        // 定时演示编码上行帧（每5秒）
        send_timer_ = this->create_wall_timer(5s, [this]() { demo_encode_upload(); });

        RCLCPP_INFO(this->get_logger(), "SerialSimulatorNode started.");
    }

private:
    void simulate_receive_data() {
        // 构造 0x0A01 位置帧
        radar_comm::EnemyRobotPosition pos;
        pos.hero_x = 1000; pos.hero_y = 2000;
        pos.engineer_x = 1100; pos.engineer_y = 2100;
        // ... 其他字段也可赋值

        // 构造 0x020E 雷达信息帧
        radar_comm::RadarInfo info;
        info.double_vulnerability_chances = 1;
        info.encryption_level = 2;

        // 编码为帧
        auto frame1 = radar_comm::encode_frame(pos, 0x01);
        auto frame2 = radar_comm::encode_frame(info, 0x02);
        if (!frame1 || !frame2) return;

        // 合并字节流
        std::vector<uint8_t> stream;
        stream.insert(stream.end(), frame1->begin(), frame1->end());
        stream.insert(stream.end(), frame2->begin(), frame2->end());

        // 逐个字节喂给解析器
        for (uint8_t byte : stream) {
            auto result = parser_->input(byte);
            if (result.has_value()) {
                std::visit([this](auto&& arg) {
                    using T = std::decay_t<decltype(arg)>;
                    if constexpr (std::is_same_v<T, radar_comm::EnemyRobotPosition>) {
                        RCLCPP_INFO(this->get_logger(),
                            "[Recv] Position: hero(%d,%d)", arg.hero_x, arg.hero_y);
                    } else if constexpr (std::is_same_v<T, radar_comm::RadarInfo>) {
                        RCLCPP_INFO(this->get_logger(),
                            "[Recv] RadarInfo: enc_level=%d", arg.encryption_level);
                    }
                }, result.value());
            }
        }
    }

    void demo_encode_upload() {
        static uint8_t seq = 0;

        // 示例1: 0x0305 己方位置
        radar_comm::MapRobotData map_data;
        map_data.ally_hero_x = 500; map_data.ally_hero_y = 600;
        auto frame1 = radar_comm::encode_frame(map_data, seq++);
        if (frame1) {
            RCLCPP_INFO(this->get_logger(), "[Encode] 0x0305 frame size=%zu", frame1->size());
        }

        // 示例2: 0x0301/0x0121 决策指令
        radar_comm::RadarDecisionCommand cmd;
        cmd.sender_id = 109;
        cmd.receiver_id = 0x8080;
        cmd.double_vulnerability_request = 1;
        cmd.password_command_type = 2;
        cmd.password = {'A','1','B','2','C','3'};
        auto frame2 = radar_comm::encode_frame(cmd, seq++);
        if (frame2) {
            RCLCPP_INFO(this->get_logger(), "[Encode] 0x0121 frame size=%zu", frame2->size());
        }
    }

    std::unique_ptr<radar_comm::ProtocolParser> parser_;
    rclcpp::TimerBase::SharedPtr recv_timer_, send_timer_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SerialSimulatorNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}