// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_interfaces:msg/RadarInfo.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/radar_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_interfaces/msg/detail/radar_info__struct.h"
#include "radar_interfaces/msg/detail/radar_info__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RadarInfo__ros_msg_type = radar_interfaces__msg__RadarInfo;

static bool _RadarInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarInfo__ros_msg_type * ros_message = static_cast<const _RadarInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: double_vulnerability_chances
  {
    cdr << ros_message->double_vulnerability_chances;
  }

  // Field name: opponent_double_vulnerability_active
  {
    cdr << (ros_message->opponent_double_vulnerability_active ? true : false);
  }

  // Field name: encryption_level
  {
    cdr << ros_message->encryption_level;
  }

  // Field name: key_change_enabled
  {
    cdr << (ros_message->key_change_enabled ? true : false);
  }

  return true;
}

static bool _RadarInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarInfo__ros_msg_type * ros_message = static_cast<_RadarInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: double_vulnerability_chances
  {
    cdr >> ros_message->double_vulnerability_chances;
  }

  // Field name: opponent_double_vulnerability_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->opponent_double_vulnerability_active = tmp ? true : false;
  }

  // Field name: encryption_level
  {
    cdr >> ros_message->encryption_level;
  }

  // Field name: key_change_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->key_change_enabled = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t get_serialized_size_radar_interfaces__msg__RadarInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarInfo__ros_msg_type * ros_message = static_cast<const _RadarInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name double_vulnerability_chances
  {
    size_t item_size = sizeof(ros_message->double_vulnerability_chances);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_double_vulnerability_active
  {
    size_t item_size = sizeof(ros_message->opponent_double_vulnerability_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encryption_level
  {
    size_t item_size = sizeof(ros_message->encryption_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_change_enabled
  {
    size_t item_size = sizeof(ros_message->key_change_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_interfaces__msg__RadarInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t max_serialized_size_radar_interfaces__msg__RadarInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: double_vulnerability_chances
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: opponent_double_vulnerability_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: encryption_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_change_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = radar_interfaces__msg__RadarInfo;
    is_plain =
      (
      offsetof(DataType, key_change_enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_interfaces__msg__RadarInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarInfo = {
  "radar_interfaces::msg",
  "RadarInfo",
  _RadarInfo__cdr_serialize,
  _RadarInfo__cdr_deserialize,
  _RadarInfo__get_serialized_size,
  _RadarInfo__max_serialized_size
};

static rosidl_message_type_support_t _RadarInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_interfaces, msg, RadarInfo)() {
  return &_RadarInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
