// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/EnemyHP.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EnemyHP in the package radar_interfaces.
/**
  * 敌方各机器人血量
 */
typedef struct radar_interfaces__msg__EnemyHP
{
  uint16_t hero_hp;
  uint16_t engineer_hp;
  uint16_t infantry_3_hp;
  uint16_t infantry_4_hp;
  /// 保留位
  uint16_t reserved;
  uint16_t sentry_hp;
} radar_interfaces__msg__EnemyHP;

// Struct for a sequence of radar_interfaces__msg__EnemyHP.
typedef struct radar_interfaces__msg__EnemyHP__Sequence
{
  radar_interfaces__msg__EnemyHP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__EnemyHP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__STRUCT_H_
