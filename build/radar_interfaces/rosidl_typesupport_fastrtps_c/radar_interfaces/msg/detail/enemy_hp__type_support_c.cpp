// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_interfaces:msg/EnemyHP.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/enemy_hp__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_interfaces/msg/detail/enemy_hp__struct.h"
#include "radar_interfaces/msg/detail/enemy_hp__functions.h"
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


using _EnemyHP__ros_msg_type = radar_interfaces__msg__EnemyHP;

static bool _EnemyHP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnemyHP__ros_msg_type * ros_message = static_cast<const _EnemyHP__ros_msg_type *>(untyped_ros_message);
  // Field name: hero_hp
  {
    cdr << ros_message->hero_hp;
  }

  // Field name: engineer_hp
  {
    cdr << ros_message->engineer_hp;
  }

  // Field name: infantry_3_hp
  {
    cdr << ros_message->infantry_3_hp;
  }

  // Field name: infantry_4_hp
  {
    cdr << ros_message->infantry_4_hp;
  }

  // Field name: reserved
  {
    cdr << ros_message->reserved;
  }

  // Field name: sentry_hp
  {
    cdr << ros_message->sentry_hp;
  }

  return true;
}

static bool _EnemyHP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnemyHP__ros_msg_type * ros_message = static_cast<_EnemyHP__ros_msg_type *>(untyped_ros_message);
  // Field name: hero_hp
  {
    cdr >> ros_message->hero_hp;
  }

  // Field name: engineer_hp
  {
    cdr >> ros_message->engineer_hp;
  }

  // Field name: infantry_3_hp
  {
    cdr >> ros_message->infantry_3_hp;
  }

  // Field name: infantry_4_hp
  {
    cdr >> ros_message->infantry_4_hp;
  }

  // Field name: reserved
  {
    cdr >> ros_message->reserved;
  }

  // Field name: sentry_hp
  {
    cdr >> ros_message->sentry_hp;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t get_serialized_size_radar_interfaces__msg__EnemyHP(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnemyHP__ros_msg_type * ros_message = static_cast<const _EnemyHP__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hero_hp
  {
    size_t item_size = sizeof(ros_message->hero_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engineer_hp
  {
    size_t item_size = sizeof(ros_message->engineer_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_3_hp
  {
    size_t item_size = sizeof(ros_message->infantry_3_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_4_hp
  {
    size_t item_size = sizeof(ros_message->infantry_4_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved
  {
    size_t item_size = sizeof(ros_message->reserved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_hp
  {
    size_t item_size = sizeof(ros_message->sentry_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnemyHP__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_interfaces__msg__EnemyHP(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t max_serialized_size_radar_interfaces__msg__EnemyHP(
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

  // member: hero_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: engineer_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_3_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_4_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reserved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sentry_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = radar_interfaces__msg__EnemyHP;
    is_plain =
      (
      offsetof(DataType, sentry_hp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EnemyHP__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_interfaces__msg__EnemyHP(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EnemyHP = {
  "radar_interfaces::msg",
  "EnemyHP",
  _EnemyHP__cdr_serialize,
  _EnemyHP__cdr_deserialize,
  _EnemyHP__get_serialized_size,
  _EnemyHP__max_serialized_size
};

static rosidl_message_type_support_t _EnemyHP__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnemyHP,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_interfaces, msg, EnemyHP)() {
  return &_EnemyHP__type_support;
}

#if defined(__cplusplus)
}
#endif
