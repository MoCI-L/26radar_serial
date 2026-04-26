// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/MapRobotData.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MapRobotData in the package radar_interfaces.
/**
  * 雷达发送给己方选手端小地图的双边机器人坐标，单位：cm
 */
typedef struct radar_interfaces__msg__MapRobotData
{
  uint16_t opponent_hero_x;
  uint16_t opponent_hero_y;
  uint16_t opponent_engineer_x;
  uint16_t opponent_engineer_y;
  uint16_t opponent_infantry_3_x;
  uint16_t opponent_infantry_3_y;
  uint16_t opponent_infantry_4_x;
  uint16_t opponent_infantry_4_y;
  uint16_t opponent_aerial_x;
  uint16_t opponent_aerial_y;
  uint16_t opponent_sentry_x;
  uint16_t opponent_sentry_y;
  uint16_t ally_hero_x;
  uint16_t ally_hero_y;
  uint16_t ally_engineer_x;
  uint16_t ally_engineer_y;
  uint16_t ally_infantry_3_x;
  uint16_t ally_infantry_3_y;
  uint16_t ally_infantry_4_x;
  uint16_t ally_infantry_4_y;
  uint16_t ally_aerial_x;
  uint16_t ally_aerial_y;
  uint16_t ally_sentry_x;
  uint16_t ally_sentry_y;
} radar_interfaces__msg__MapRobotData;

// Struct for a sequence of radar_interfaces__msg__MapRobotData.
typedef struct radar_interfaces__msg__MapRobotData__Sequence
{
  radar_interfaces__msg__MapRobotData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__MapRobotData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__MAP_ROBOT_DATA__STRUCT_H_
