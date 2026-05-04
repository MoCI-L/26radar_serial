cmake_minimum_required(VERSION 3.8)
project(radar_comm)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(Boost REQUIRED COMPONENTS system)
find_package(builtin_interfaces REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rcl_interfaces REQUIRED)
find_package(radar_interfaces REQUIRED)

set(PROTOCOL_SRC
  src/protocol/parser.cpp
  src/protocol/crc.cpp
  src/protocol/decoder.cpp
  src/protocol/encoder.cpp
)

set(TRANSPORT_SRC
  src/transport/asio_transport.cpp
  src/transport/serial_port.cpp
)

set(BRIDGE_SRC
  src/bridge/radar_bridge_node.cpp
)

add_executable(test_parser test/test_parser.cpp ${PROTOCOL_SRC})
add_executable(test_serial test/test_serial.cpp ${PROTOCOL_SRC} ${TRANSPORT_SRC})
add_executable(serial_node src/ros/serial_node.cpp ${PROTOCOL_SRC} ${TRANSPORT_SRC} ${BRIDGE_SRC})
add_executable(fake_sender ../../tools/fake_sender.cpp ${PROTOCOL_SRC})
add_executable(serial_fake_node src/ros/serial_fake_node.cpp ${PROTOCOL_SRC})

target_include_directories(test_parser PUBLIC include)
target_include_directories(test_serial PUBLIC include)
target_include_directories(serial_node PUBLIC include)
target_include_directories(fake_sender PUBLIC include)
target_include_directories(serial_fake_node PUBLIC include)

target_link_libraries(test_serial Boost::system)
target_link_libraries(serial_node Boost::system)

ament_target_dependencies(serial_node builtin_interfaces rclcpp rcl_interfaces radar_interfaces)
ament_target_dependencies(fake_sender rclcpp rcl_interfaces radar_interfaces)
ament_target_dependencies(serial_fake_node builtin_interfaces rclcpp rcl_interfaces radar_interfaces)

install(TARGETS
  test_parser
  test_serial
  serial_node
  serial_fake_node
  fake_sender
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY config docs scripts
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
