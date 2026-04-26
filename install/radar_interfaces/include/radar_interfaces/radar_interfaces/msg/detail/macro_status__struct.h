// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/MacroStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MacroStatus in the package radar_interfaces.
/**
  * 对方队伍宏观状态
 */
typedef struct radar_interfaces__msg__MacroStatus
{
  uint16_t remaining_gold;
  uint16_t total_gold;
  /// 以下为位域展开的状态字段
  bool enemy_supply_area_occupied;
  /// 0=未占领，1=对方占领，2=我方占领
  uint8_t enemy_central_highland_status;
  bool enemy_trapezoid_highland_occupied;
  /// 0=未占领，1=对方，2=我方，3=双方
  uint8_t enemy_fort_buff_status;
  /// 0=未占领，1=对方，2=我方
  uint8_t enemy_outpost_buff_status;
  bool enemy_base_buff_occupied;
  bool enemy_tunnel_pre_jump_occupied;
  bool enemy_tunnel_post_jump_occupied;
  bool ally_side_tunnel_pre_jump_occupied;
  bool ally_side_tunnel_post_jump_occupied;
  bool enemy_highland_upper_occupied;
  bool enemy_jump_upper_occupied;
  bool enemy_road_upper_occupied;
} radar_interfaces__msg__MacroStatus;

// Struct for a sequence of radar_interfaces__msg__MacroStatus.
typedef struct radar_interfaces__msg__MacroStatus__Sequence
{
  radar_interfaces__msg__MacroStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__MacroStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__STRUCT_H_
