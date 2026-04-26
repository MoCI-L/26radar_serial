// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/EnemyAmmo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EnemyAmmo in the package radar_interfaces.
/**
  * 敌方剩余允许发弹量
 */
typedef struct radar_interfaces__msg__EnemyAmmo
{
  uint16_t hero_ammo;
  uint16_t infantry_3_ammo;
  uint16_t infantry_4_ammo;
  uint16_t aerial_ammo;
  uint16_t sentry_ammo;
} radar_interfaces__msg__EnemyAmmo;

// Struct for a sequence of radar_interfaces__msg__EnemyAmmo.
typedef struct radar_interfaces__msg__EnemyAmmo__Sequence
{
  radar_interfaces__msg__EnemyAmmo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__EnemyAmmo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__STRUCT_H_
