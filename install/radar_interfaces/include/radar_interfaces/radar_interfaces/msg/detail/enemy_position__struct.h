// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/EnemyPosition.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EnemyPosition in the package radar_interfaces.
/**
  * 敌方所有机器人位置坐标，单位：cm (协议原始单位)
 */
typedef struct radar_interfaces__msg__EnemyPosition
{
  uint16_t hero_x;
  uint16_t hero_y;
  uint16_t engineer_x;
  uint16_t engineer_y;
  uint16_t infantry_3_x;
  uint16_t infantry_3_y;
  uint16_t infantry_4_x;
  uint16_t infantry_4_y;
  uint16_t aerial_x;
  uint16_t aerial_y;
  uint16_t sentry_x;
  uint16_t sentry_y;
} radar_interfaces__msg__EnemyPosition;

// Struct for a sequence of radar_interfaces__msg__EnemyPosition.
typedef struct radar_interfaces__msg__EnemyPosition__Sequence
{
  radar_interfaces__msg__EnemyPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__EnemyPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__STRUCT_H_
