// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_interfaces:msg/RadarMarkProgress.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/radar_mark_progress__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_interfaces/msg/detail/radar_mark_progress__struct.h"
#include "radar_interfaces/msg/detail/radar_mark_progress__functions.h"
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


using _RadarMarkProgress__ros_msg_type = radar_interfaces__msg__RadarMarkProgress;

static bool _RadarMarkProgress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarMarkProgress__ros_msg_type * ros_message = static_cast<const _RadarMarkProgress__ros_msg_type *>(untyped_ros_message);
  // Field name: enemy_hero_marked
  {
    cdr << (ros_message->enemy_hero_marked ? true : false);
  }

  // Field name: enemy_engineer_marked
  {
    cdr << (ros_message->enemy_engineer_marked ? true : false);
  }

  // Field name: enemy_infantry_3_marked
  {
    cdr << (ros_message->enemy_infantry_3_marked ? true : false);
  }

  // Field name: enemy_infantry_4_marked
  {
    cdr << (ros_message->enemy_infantry_4_marked ? true : false);
  }

  // Field name: enemy_aerial_marked
  {
    cdr << (ros_message->enemy_aerial_marked ? true : false);
  }

  // Field name: enemy_sentry_marked
  {
    cdr << (ros_message->enemy_sentry_marked ? true : false);
  }

  // Field name: ally_hero_marked
  {
    cdr << (ros_message->ally_hero_marked ? true : false);
  }

  // Field name: ally_engineer_marked
  {
    cdr << (ros_message->ally_engineer_marked ? true : false);
  }

  // Field name: ally_infantry_3_marked
  {
    cdr << (ros_message->ally_infantry_3_marked ? true : false);
  }

  // Field name: ally_infantry_4_marked
  {
    cdr << (ros_message->ally_infantry_4_marked ? true : false);
  }

  // Field name: ally_aerial_marked
  {
    cdr << (ros_message->ally_aerial_marked ? true : false);
  }

  // Field name: ally_sentry_marked
  {
    cdr << (ros_message->ally_sentry_marked ? true : false);
  }

  return true;
}

static bool _RadarMarkProgress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarMarkProgress__ros_msg_type * ros_message = static_cast<_RadarMarkProgress__ros_msg_type *>(untyped_ros_message);
  // Field name: enemy_hero_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_hero_marked = tmp ? true : false;
  }

  // Field name: enemy_engineer_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_engineer_marked = tmp ? true : false;
  }

  // Field name: enemy_infantry_3_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_infantry_3_marked = tmp ? true : false;
  }

  // Field name: enemy_infantry_4_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_infantry_4_marked = tmp ? true : false;
  }

  // Field name: enemy_aerial_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_aerial_marked = tmp ? true : false;
  }

  // Field name: enemy_sentry_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_sentry_marked = tmp ? true : false;
  }

  // Field name: ally_hero_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ally_hero_marked = tmp ? true : false;
  }

  // Field name: ally_engineer_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ally_engineer_marked = tmp ? true : false;
  }

  // Field name: ally_infantry_3_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ally_infantry_3_marked = tmp ? true : false;
  }

  // Field name: ally_infantry_4_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ally_infantry_4_marked = tmp ? true : false;
  }

  // Field name: ally_aerial_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ally_aerial_marked = tmp ? true : false;
  }

  // Field name: ally_sentry_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ally_sentry_marked = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t get_serialized_size_radar_interfaces__msg__RadarMarkProgress(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarMarkProgress__ros_msg_type * ros_message = static_cast<const _RadarMarkProgress__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name enemy_hero_marked
  {
    size_t item_size = sizeof(ros_message->enemy_hero_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_engineer_marked
  {
    size_t item_size = sizeof(ros_message->enemy_engineer_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_infantry_3_marked
  {
    size_t item_size = sizeof(ros_message->enemy_infantry_3_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_infantry_4_marked
  {
    size_t item_size = sizeof(ros_message->enemy_infantry_4_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_aerial_marked
  {
    size_t item_size = sizeof(ros_message->enemy_aerial_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_sentry_marked
  {
    size_t item_size = sizeof(ros_message->enemy_sentry_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_hero_marked
  {
    size_t item_size = sizeof(ros_message->ally_hero_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_engineer_marked
  {
    size_t item_size = sizeof(ros_message->ally_engineer_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_infantry_3_marked
  {
    size_t item_size = sizeof(ros_message->ally_infantry_3_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_infantry_4_marked
  {
    size_t item_size = sizeof(ros_message->ally_infantry_4_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_aerial_marked
  {
    size_t item_size = sizeof(ros_message->ally_aerial_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_sentry_marked
  {
    size_t item_size = sizeof(ros_message->ally_sentry_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RadarMarkProgress__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_interfaces__msg__RadarMarkProgress(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t max_serialized_size_radar_interfaces__msg__RadarMarkProgress(
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

  // member: enemy_hero_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_engineer_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_infantry_3_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_infantry_4_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_aerial_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_sentry_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ally_hero_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ally_engineer_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ally_infantry_3_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ally_infantry_4_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ally_aerial_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ally_sentry_marked
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
    using DataType = radar_interfaces__msg__RadarMarkProgress;
    is_plain =
      (
      offsetof(DataType, ally_sentry_marked) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarMarkProgress__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_interfaces__msg__RadarMarkProgress(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarMarkProgress = {
  "radar_interfaces::msg",
  "RadarMarkProgress",
  _RadarMarkProgress__cdr_serialize,
  _RadarMarkProgress__cdr_deserialize,
  _RadarMarkProgress__get_serialized_size,
  _RadarMarkProgress__max_serialized_size
};

static rosidl_message_type_support_t _RadarMarkProgress__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarMarkProgress,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_interfaces, msg, RadarMarkProgress)() {
  return &_RadarMarkProgress__type_support;
}

#if defined(__cplusplus)
}
#endif
