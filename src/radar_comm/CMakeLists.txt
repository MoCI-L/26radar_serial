cmake_minimum_required(VERSION 3.8)
project(radar_comm)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 依赖
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# ===== 可执行文件 =====
add_executable(test_parser
  test/test_parser.cpp
  src/protocol/parser.cpp
  src/protocol/crc.cpp
  src/protocol/decoder.cpp
)

target_include_directories(test_parser PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(test_parser PUBLIC cxx_std_17)

ament_target_dependencies(test_parser
  rclcpp
  std_msgs
)

# ===== 安装 =====
install(TARGETS
  test_parser
  DESTINATION lib/${PROJECT_NAME}
)

# ===== lint（可选）=====
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
