cmake_minimum_required(VERSION 3.8)
project(radar_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# 生成消息
set(msg_files
  "msg/EnemyPosition.msg"
  "msg/EnemyHP.msg"
  "msg/EnemyAmmo.msg"
  "msg/MacroStatus.msg"
  "msg/Buffs.msg"
  "msg/InterferenceKey.msg"
  "msg/RadarMarkProgress.msg"
  "msg/RadarInfo.msg"
  "msg/MapRobotData.msg"
  "msg/RadarDecisionCommand.msg"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  DEPENDENCIES
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()
