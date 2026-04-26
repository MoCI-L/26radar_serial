// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/RadarMarkProgress.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarMarkProgress in the package radar_interfaces.
/**
  * 雷达标记进度状态，敌方机器人阈值为100，己方机器人阈值为50
 */
typedef struct radar_interfaces__msg__RadarMarkProgress
{
  bool enemy_hero_marked;
  bool enemy_engineer_marked;
  bool enemy_infantry_3_marked;
  bool enemy_infantry_4_marked;
  bool enemy_aerial_marked;
  bool enemy_sentry_marked;
  bool ally_hero_marked;
  bool ally_engineer_marked;
  bool ally_infantry_3_marked;
  bool ally_infantry_4_marked;
  bool ally_aerial_marked;
  bool ally_sentry_marked;
} radar_interfaces__msg__RadarMarkProgress;

// Struct for a sequence of radar_interfaces__msg__RadarMarkProgress.
typedef struct radar_interfaces__msg__RadarMarkProgress__Sequence
{
  radar_interfaces__msg__RadarMarkProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__RadarMarkProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__STRUCT_H_
