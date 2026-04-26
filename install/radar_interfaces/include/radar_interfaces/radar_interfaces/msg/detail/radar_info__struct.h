// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RadarInfo in the package radar_interfaces.
/**
  * 雷达自主决策状态
 */
typedef struct radar_interfaces__msg__RadarInfo
{
  uint8_t double_vulnerability_chances;
  bool opponent_double_vulnerability_active;
  uint8_t encryption_level;
  bool key_change_enabled;
} radar_interfaces__msg__RadarInfo;

// Struct for a sequence of radar_interfaces__msg__RadarInfo.
typedef struct radar_interfaces__msg__RadarInfo__Sequence
{
  radar_interfaces__msg__RadarInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__RadarInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__STRUCT_H_
