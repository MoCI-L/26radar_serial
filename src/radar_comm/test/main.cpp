#include <rclcpp/rclcpp.hpp>
#include "radar_comm/bridge/radar_bridge_node.hpp"

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<RadarBridgeNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}