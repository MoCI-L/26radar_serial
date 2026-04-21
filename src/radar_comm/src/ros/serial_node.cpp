#include "rclcpp/rclcpp.hpp"
#include "radar_comm/protocol/parser.hpp"
#include "radar_comm/transport/serial.hpp"

class SerialNode : public rclcpp::Node {
public:
    SerialNode() : Node("serial_node"), serial_("/dev/ttyUSB0", 115200) {

        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(10),
            std::bind(&SerialNode::readLoop, this));
    }

private:
    void readLoop() {
        uint8_t buf[256];
        size_t n = serial_.read(buf, sizeof(buf));

        for (size_t i = 0; i < n; ++i) {
            auto msg = parser_.input(buf[i]);

            if (msg) {
                RCLCPP_INFO(this->get_logger(), "Received one frame");
            }
        }
    }

    SerialPort serial_;
    ProtocolParser parser_;
    rclcpp::TimerBase::SharedPtr timer_;
};
