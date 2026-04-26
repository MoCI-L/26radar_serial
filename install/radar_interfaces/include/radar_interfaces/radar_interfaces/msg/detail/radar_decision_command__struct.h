// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/RadarDecisionCommand.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'password'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RadarDecisionCommand in the package radar_interfaces.
/**
  * 雷达通过0x0301/0x0121上报的自主决策指令
 */
typedef struct radar_interfaces__msg__RadarDecisionCommand
{
  uint16_t sender_id;
  uint16_t receiver_id;
  uint8_t double_vulnerability_request;
  uint8_t password_command_type;
  rosidl_runtime_c__String password;
} radar_interfaces__msg__RadarDecisionCommand;

// Struct for a sequence of radar_interfaces__msg__RadarDecisionCommand.
typedef struct radar_interfaces__msg__RadarDecisionCommand__Sequence
{
  radar_interfaces__msg__RadarDecisionCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__RadarDecisionCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_DECISION_COMMAND__STRUCT_H_
