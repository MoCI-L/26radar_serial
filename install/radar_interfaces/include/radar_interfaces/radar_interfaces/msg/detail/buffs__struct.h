// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/Buffs.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__BUFFS__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__BUFFS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Buffs in the package radar_interfaces.
/**
  * 英雄机器人增益
 */
typedef struct radar_interfaces__msg__Buffs
{
  uint8_t hero_health_regen;
  uint16_t hero_cooling_boost;
  uint8_t hero_defense_boost;
  uint8_t hero_defense_debuff;
  uint16_t hero_attack_boost;
  /// 工程机器人增益
  uint8_t engineer_health_regen;
  uint16_t engineer_cooling_boost;
  uint8_t engineer_defense_boost;
  uint8_t engineer_defense_debuff;
  uint16_t engineer_attack_boost;
  /// 3号步兵机器人增益
  uint8_t infantry_3_health_regen;
  uint16_t infantry_3_cooling_boost;
  uint8_t infantry_3_defense_boost;
  uint8_t infantry_3_defense_debuff;
  uint16_t infantry_3_attack_boost;
  /// 4号步兵机器人增益
  uint8_t infantry_4_health_regen;
  uint16_t infantry_4_cooling_boost;
  uint8_t infantry_4_defense_boost;
  uint8_t infantry_4_defense_debuff;
  uint16_t infantry_4_attack_boost;
  /// 哨兵机器人增益
  uint8_t sentry_health_regen;
  uint16_t sentry_cooling_boost;
  uint8_t sentry_defense_boost;
  uint8_t sentry_defense_debuff;
  uint16_t sentry_attack_boost;
  uint8_t sentry_posture;
} radar_interfaces__msg__Buffs;

// Struct for a sequence of radar_interfaces__msg__Buffs.
typedef struct radar_interfaces__msg__Buffs__Sequence
{
  radar_interfaces__msg__Buffs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__Buffs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__BUFFS__STRUCT_H_
