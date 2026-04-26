// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_interfaces:msg/EnemyPosition.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/enemy_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_interfaces/msg/detail/enemy_position__struct.h"
#include "radar_interfaces/msg/detail/enemy_position__functions.h"
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


using _EnemyPosition__ros_msg_type = radar_interfaces__msg__EnemyPosition;

static bool _EnemyPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EnemyPosition__ros_msg_type * ros_message = static_cast<const _EnemyPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: hero_x
  {
    cdr << ros_message->hero_x;
  }

  // Field name: hero_y
  {
    cdr << ros_message->hero_y;
  }

  // Field name: engineer_x
  {
    cdr << ros_message->engineer_x;
  }

  // Field name: engineer_y
  {
    cdr << ros_message->engineer_y;
  }

  // Field name: infantry_3_x
  {
    cdr << ros_message->infantry_3_x;
  }

  // Field name: infantry_3_y
  {
    cdr << ros_message->infantry_3_y;
  }

  // Field name: infantry_4_x
  {
    cdr << ros_message->infantry_4_x;
  }

  // Field name: infantry_4_y
  {
    cdr << ros_message->infantry_4_y;
  }

  // Field name: aerial_x
  {
    cdr << ros_message->aerial_x;
  }

  // Field name: aerial_y
  {
    cdr << ros_message->aerial_y;
  }

  // Field name: sentry_x
  {
    cdr << ros_message->sentry_x;
  }

  // Field name: sentry_y
  {
    cdr << ros_message->sentry_y;
  }

  return true;
}

static bool _EnemyPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EnemyPosition__ros_msg_type * ros_message = static_cast<_EnemyPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: hero_x
  {
    cdr >> ros_message->hero_x;
  }

  // Field name: hero_y
  {
    cdr >> ros_message->hero_y;
  }

  // Field name: engineer_x
  {
    cdr >> ros_message->engineer_x;
  }

  // Field name: engineer_y
  {
    cdr >> ros_message->engineer_y;
  }

  // Field name: infantry_3_x
  {
    cdr >> ros_message->infantry_3_x;
  }

  // Field name: infantry_3_y
  {
    cdr >> ros_message->infantry_3_y;
  }

  // Field name: infantry_4_x
  {
    cdr >> ros_message->infantry_4_x;
  }

  // Field name: infantry_4_y
  {
    cdr >> ros_message->infantry_4_y;
  }

  // Field name: aerial_x
  {
    cdr >> ros_message->aerial_x;
  }

  // Field name: aerial_y
  {
    cdr >> ros_message->aerial_y;
  }

  // Field name: sentry_x
  {
    cdr >> ros_message->sentry_x;
  }

  // Field name: sentry_y
  {
    cdr >> ros_message->sentry_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t get_serialized_size_radar_interfaces__msg__EnemyPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EnemyPosition__ros_msg_type * ros_message = static_cast<const _EnemyPosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hero_x
  {
    size_t item_size = sizeof(ros_message->hero_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hero_y
  {
    size_t item_size = sizeof(ros_message->hero_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engineer_x
  {
    size_t item_size = sizeof(ros_message->engineer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engineer_y
  {
    size_t item_size = sizeof(ros_message->engineer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_3_x
  {
    size_t item_size = sizeof(ros_message->infantry_3_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_3_y
  {
    size_t item_size = sizeof(ros_message->infantry_3_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_4_x
  {
    size_t item_size = sizeof(ros_message->infantry_4_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_4_y
  {
    size_t item_size = sizeof(ros_message->infantry_4_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aerial_x
  {
    size_t item_size = sizeof(ros_message->aerial_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aerial_y
  {
    size_t item_size = sizeof(ros_message->aerial_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_x
  {
    size_t item_size = sizeof(ros_message->sentry_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_y
  {
    size_t item_size = sizeof(ros_message->sentry_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EnemyPosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_interfaces__msg__EnemyPosition(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t max_serialized_size_radar_interfaces__msg__EnemyPosition(
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

  // member: hero_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hero_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: engineer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: engineer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_3_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_3_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_4_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_4_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: aerial_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: aerial_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sentry_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sentry_y
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
    using DataType = radar_interfaces__msg__EnemyPosition;
    is_plain =
      (
      offsetof(DataType, sentry_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EnemyPosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_interfaces__msg__EnemyPosition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EnemyPosition = {
  "radar_interfaces::msg",
  "EnemyPosition",
  _EnemyPosition__cdr_serialize,
  _EnemyPosition__cdr_deserialize,
  _EnemyPosition__get_serialized_size,
  _EnemyPosition__max_serialized_size
};

static rosidl_message_type_support_t _EnemyPosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EnemyPosition,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_interfaces, msg, EnemyPosition)() {
  return &_EnemyPosition__type_support;
}

#if defined(__cplusplus)
}
#endif
