// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from radar_interfaces:msg/InterferenceKey.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__STRUCT_H_
#define RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/InterferenceKey in the package radar_interfaces.
/**
  * 对方干扰波密钥，6字节ASCII
 */
typedef struct radar_interfaces__msg__InterferenceKey
{
  rosidl_runtime_c__String key;
} radar_interfaces__msg__InterferenceKey;

// Struct for a sequence of radar_interfaces__msg__InterferenceKey.
typedef struct radar_interfaces__msg__InterferenceKey__Sequence
{
  radar_interfaces__msg__InterferenceKey * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} radar_interfaces__msg__InterferenceKey__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__STRUCT_H_
