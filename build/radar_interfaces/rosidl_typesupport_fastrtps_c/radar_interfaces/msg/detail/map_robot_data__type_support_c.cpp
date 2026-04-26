// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_interfaces:msg/MapRobotData.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/map_robot_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_interfaces/msg/detail/map_robot_data__struct.h"
#include "radar_interfaces/msg/detail/map_robot_data__functions.h"
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


using _MapRobotData__ros_msg_type = radar_interfaces__msg__MapRobotData;

static bool _MapRobotData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MapRobotData__ros_msg_type * ros_message = static_cast<const _MapRobotData__ros_msg_type *>(untyped_ros_message);
  // Field name: opponent_hero_x
  {
    cdr << ros_message->opponent_hero_x;
  }

  // Field name: opponent_hero_y
  {
    cdr << ros_message->opponent_hero_y;
  }

  // Field name: opponent_engineer_x
  {
    cdr << ros_message->opponent_engineer_x;
  }

  // Field name: opponent_engineer_y
  {
    cdr << ros_message->opponent_engineer_y;
  }

  // Field name: opponent_infantry_3_x
  {
    cdr << ros_message->opponent_infantry_3_x;
  }

  // Field name: opponent_infantry_3_y
  {
    cdr << ros_message->opponent_infantry_3_y;
  }

  // Field name: opponent_infantry_4_x
  {
    cdr << ros_message->opponent_infantry_4_x;
  }

  // Field name: opponent_infantry_4_y
  {
    cdr << ros_message->opponent_infantry_4_y;
  }

  // Field name: opponent_aerial_x
  {
    cdr << ros_message->opponent_aerial_x;
  }

  // Field name: opponent_aerial_y
  {
    cdr << ros_message->opponent_aerial_y;
  }

  // Field name: opponent_sentry_x
  {
    cdr << ros_message->opponent_sentry_x;
  }

  // Field name: opponent_sentry_y
  {
    cdr << ros_message->opponent_sentry_y;
  }

  // Field name: ally_hero_x
  {
    cdr << ros_message->ally_hero_x;
  }

  // Field name: ally_hero_y
  {
    cdr << ros_message->ally_hero_y;
  }

  // Field name: ally_engineer_x
  {
    cdr << ros_message->ally_engineer_x;
  }

  // Field name: ally_engineer_y
  {
    cdr << ros_message->ally_engineer_y;
  }

  // Field name: ally_infantry_3_x
  {
    cdr << ros_message->ally_infantry_3_x;
  }

  // Field name: ally_infantry_3_y
  {
    cdr << ros_message->ally_infantry_3_y;
  }

  // Field name: ally_infantry_4_x
  {
    cdr << ros_message->ally_infantry_4_x;
  }

  // Field name: ally_infantry_4_y
  {
    cdr << ros_message->ally_infantry_4_y;
  }

  // Field name: ally_aerial_x
  {
    cdr << ros_message->ally_aerial_x;
  }

  // Field name: ally_aerial_y
  {
    cdr << ros_message->ally_aerial_y;
  }

  // Field name: ally_sentry_x
  {
    cdr << ros_message->ally_sentry_x;
  }

  // Field name: ally_sentry_y
  {
    cdr << ros_message->ally_sentry_y;
  }

  return true;
}

static bool _MapRobotData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MapRobotData__ros_msg_type * ros_message = static_cast<_MapRobotData__ros_msg_type *>(untyped_ros_message);
  // Field name: opponent_hero_x
  {
    cdr >> ros_message->opponent_hero_x;
  }

  // Field name: opponent_hero_y
  {
    cdr >> ros_message->opponent_hero_y;
  }

  // Field name: opponent_engineer_x
  {
    cdr >> ros_message->opponent_engineer_x;
  }

  // Field name: opponent_engineer_y
  {
    cdr >> ros_message->opponent_engineer_y;
  }

  // Field name: opponent_infantry_3_x
  {
    cdr >> ros_message->opponent_infantry_3_x;
  }

  // Field name: opponent_infantry_3_y
  {
    cdr >> ros_message->opponent_infantry_3_y;
  }

  // Field name: opponent_infantry_4_x
  {
    cdr >> ros_message->opponent_infantry_4_x;
  }

  // Field name: opponent_infantry_4_y
  {
    cdr >> ros_message->opponent_infantry_4_y;
  }

  // Field name: opponent_aerial_x
  {
    cdr >> ros_message->opponent_aerial_x;
  }

  // Field name: opponent_aerial_y
  {
    cdr >> ros_message->opponent_aerial_y;
  }

  // Field name: opponent_sentry_x
  {
    cdr >> ros_message->opponent_sentry_x;
  }

  // Field name: opponent_sentry_y
  {
    cdr >> ros_message->opponent_sentry_y;
  }

  // Field name: ally_hero_x
  {
    cdr >> ros_message->ally_hero_x;
  }

  // Field name: ally_hero_y
  {
    cdr >> ros_message->ally_hero_y;
  }

  // Field name: ally_engineer_x
  {
    cdr >> ros_message->ally_engineer_x;
  }

  // Field name: ally_engineer_y
  {
    cdr >> ros_message->ally_engineer_y;
  }

  // Field name: ally_infantry_3_x
  {
    cdr >> ros_message->ally_infantry_3_x;
  }

  // Field name: ally_infantry_3_y
  {
    cdr >> ros_message->ally_infantry_3_y;
  }

  // Field name: ally_infantry_4_x
  {
    cdr >> ros_message->ally_infantry_4_x;
  }

  // Field name: ally_infantry_4_y
  {
    cdr >> ros_message->ally_infantry_4_y;
  }

  // Field name: ally_aerial_x
  {
    cdr >> ros_message->ally_aerial_x;
  }

  // Field name: ally_aerial_y
  {
    cdr >> ros_message->ally_aerial_y;
  }

  // Field name: ally_sentry_x
  {
    cdr >> ros_message->ally_sentry_x;
  }

  // Field name: ally_sentry_y
  {
    cdr >> ros_message->ally_sentry_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t get_serialized_size_radar_interfaces__msg__MapRobotData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MapRobotData__ros_msg_type * ros_message = static_cast<const _MapRobotData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name opponent_hero_x
  {
    size_t item_size = sizeof(ros_message->opponent_hero_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_hero_y
  {
    size_t item_size = sizeof(ros_message->opponent_hero_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_engineer_x
  {
    size_t item_size = sizeof(ros_message->opponent_engineer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_engineer_y
  {
    size_t item_size = sizeof(ros_message->opponent_engineer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_infantry_3_x
  {
    size_t item_size = sizeof(ros_message->opponent_infantry_3_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_infantry_3_y
  {
    size_t item_size = sizeof(ros_message->opponent_infantry_3_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_infantry_4_x
  {
    size_t item_size = sizeof(ros_message->opponent_infantry_4_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_infantry_4_y
  {
    size_t item_size = sizeof(ros_message->opponent_infantry_4_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_aerial_x
  {
    size_t item_size = sizeof(ros_message->opponent_aerial_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_aerial_y
  {
    size_t item_size = sizeof(ros_message->opponent_aerial_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_sentry_x
  {
    size_t item_size = sizeof(ros_message->opponent_sentry_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name opponent_sentry_y
  {
    size_t item_size = sizeof(ros_message->opponent_sentry_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_hero_x
  {
    size_t item_size = sizeof(ros_message->ally_hero_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_hero_y
  {
    size_t item_size = sizeof(ros_message->ally_hero_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_engineer_x
  {
    size_t item_size = sizeof(ros_message->ally_engineer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_engineer_y
  {
    size_t item_size = sizeof(ros_message->ally_engineer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_infantry_3_x
  {
    size_t item_size = sizeof(ros_message->ally_infantry_3_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_infantry_3_y
  {
    size_t item_size = sizeof(ros_message->ally_infantry_3_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_infantry_4_x
  {
    size_t item_size = sizeof(ros_message->ally_infantry_4_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_infantry_4_y
  {
    size_t item_size = sizeof(ros_message->ally_infantry_4_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_aerial_x
  {
    size_t item_size = sizeof(ros_message->ally_aerial_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_aerial_y
  {
    size_t item_size = sizeof(ros_message->ally_aerial_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_sentry_x
  {
    size_t item_size = sizeof(ros_message->ally_sentry_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_sentry_y
  {
    size_t item_size = sizeof(ros_message->ally_sentry_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MapRobotData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_interfaces__msg__MapRobotData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t max_serialized_size_radar_interfaces__msg__MapRobotData(
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

  // member: opponent_hero_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_hero_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_engineer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_engineer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_infantry_3_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_infantry_3_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_infantry_4_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_infantry_4_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_aerial_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_aerial_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_sentry_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: opponent_sentry_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_hero_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_hero_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_engineer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_engineer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_infantry_3_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_infantry_3_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_infantry_4_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_infantry_4_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_aerial_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_aerial_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_sentry_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: ally_sentry_y
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
    using DataType = radar_interfaces__msg__MapRobotData;
    is_plain =
      (
      offsetof(DataType, ally_sentry_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MapRobotData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_interfaces__msg__MapRobotData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MapRobotData = {
  "radar_interfaces::msg",
  "MapRobotData",
  _MapRobotData__cdr_serialize,
  _MapRobotData__cdr_deserialize,
  _MapRobotData__get_serialized_size,
  _MapRobotData__max_serialized_size
};

static rosidl_message_type_support_t _MapRobotData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MapRobotData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_interfaces, msg, MapRobotData)() {
  return &_MapRobotData__type_support;
}

#if defined(__cplusplus)
}
#endif
