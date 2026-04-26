// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_interfaces:msg/Buffs.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/buffs__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_interfaces/msg/detail/buffs__struct.h"
#include "radar_interfaces/msg/detail/buffs__functions.h"
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


using _Buffs__ros_msg_type = radar_interfaces__msg__Buffs;

static bool _Buffs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Buffs__ros_msg_type * ros_message = static_cast<const _Buffs__ros_msg_type *>(untyped_ros_message);
  // Field name: hero_health_regen
  {
    cdr << ros_message->hero_health_regen;
  }

  // Field name: hero_cooling_boost
  {
    cdr << ros_message->hero_cooling_boost;
  }

  // Field name: hero_defense_boost
  {
    cdr << ros_message->hero_defense_boost;
  }

  // Field name: hero_defense_debuff
  {
    cdr << ros_message->hero_defense_debuff;
  }

  // Field name: hero_attack_boost
  {
    cdr << ros_message->hero_attack_boost;
  }

  // Field name: engineer_health_regen
  {
    cdr << ros_message->engineer_health_regen;
  }

  // Field name: engineer_cooling_boost
  {
    cdr << ros_message->engineer_cooling_boost;
  }

  // Field name: engineer_defense_boost
  {
    cdr << ros_message->engineer_defense_boost;
  }

  // Field name: engineer_defense_debuff
  {
    cdr << ros_message->engineer_defense_debuff;
  }

  // Field name: engineer_attack_boost
  {
    cdr << ros_message->engineer_attack_boost;
  }

  // Field name: infantry_3_health_regen
  {
    cdr << ros_message->infantry_3_health_regen;
  }

  // Field name: infantry_3_cooling_boost
  {
    cdr << ros_message->infantry_3_cooling_boost;
  }

  // Field name: infantry_3_defense_boost
  {
    cdr << ros_message->infantry_3_defense_boost;
  }

  // Field name: infantry_3_defense_debuff
  {
    cdr << ros_message->infantry_3_defense_debuff;
  }

  // Field name: infantry_3_attack_boost
  {
    cdr << ros_message->infantry_3_attack_boost;
  }

  // Field name: infantry_4_health_regen
  {
    cdr << ros_message->infantry_4_health_regen;
  }

  // Field name: infantry_4_cooling_boost
  {
    cdr << ros_message->infantry_4_cooling_boost;
  }

  // Field name: infantry_4_defense_boost
  {
    cdr << ros_message->infantry_4_defense_boost;
  }

  // Field name: infantry_4_defense_debuff
  {
    cdr << ros_message->infantry_4_defense_debuff;
  }

  // Field name: infantry_4_attack_boost
  {
    cdr << ros_message->infantry_4_attack_boost;
  }

  // Field name: sentry_health_regen
  {
    cdr << ros_message->sentry_health_regen;
  }

  // Field name: sentry_cooling_boost
  {
    cdr << ros_message->sentry_cooling_boost;
  }

  // Field name: sentry_defense_boost
  {
    cdr << ros_message->sentry_defense_boost;
  }

  // Field name: sentry_defense_debuff
  {
    cdr << ros_message->sentry_defense_debuff;
  }

  // Field name: sentry_attack_boost
  {
    cdr << ros_message->sentry_attack_boost;
  }

  // Field name: sentry_posture
  {
    cdr << ros_message->sentry_posture;
  }

  return true;
}

static bool _Buffs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Buffs__ros_msg_type * ros_message = static_cast<_Buffs__ros_msg_type *>(untyped_ros_message);
  // Field name: hero_health_regen
  {
    cdr >> ros_message->hero_health_regen;
  }

  // Field name: hero_cooling_boost
  {
    cdr >> ros_message->hero_cooling_boost;
  }

  // Field name: hero_defense_boost
  {
    cdr >> ros_message->hero_defense_boost;
  }

  // Field name: hero_defense_debuff
  {
    cdr >> ros_message->hero_defense_debuff;
  }

  // Field name: hero_attack_boost
  {
    cdr >> ros_message->hero_attack_boost;
  }

  // Field name: engineer_health_regen
  {
    cdr >> ros_message->engineer_health_regen;
  }

  // Field name: engineer_cooling_boost
  {
    cdr >> ros_message->engineer_cooling_boost;
  }

  // Field name: engineer_defense_boost
  {
    cdr >> ros_message->engineer_defense_boost;
  }

  // Field name: engineer_defense_debuff
  {
    cdr >> ros_message->engineer_defense_debuff;
  }

  // Field name: engineer_attack_boost
  {
    cdr >> ros_message->engineer_attack_boost;
  }

  // Field name: infantry_3_health_regen
  {
    cdr >> ros_message->infantry_3_health_regen;
  }

  // Field name: infantry_3_cooling_boost
  {
    cdr >> ros_message->infantry_3_cooling_boost;
  }

  // Field name: infantry_3_defense_boost
  {
    cdr >> ros_message->infantry_3_defense_boost;
  }

  // Field name: infantry_3_defense_debuff
  {
    cdr >> ros_message->infantry_3_defense_debuff;
  }

  // Field name: infantry_3_attack_boost
  {
    cdr >> ros_message->infantry_3_attack_boost;
  }

  // Field name: infantry_4_health_regen
  {
    cdr >> ros_message->infantry_4_health_regen;
  }

  // Field name: infantry_4_cooling_boost
  {
    cdr >> ros_message->infantry_4_cooling_boost;
  }

  // Field name: infantry_4_defense_boost
  {
    cdr >> ros_message->infantry_4_defense_boost;
  }

  // Field name: infantry_4_defense_debuff
  {
    cdr >> ros_message->infantry_4_defense_debuff;
  }

  // Field name: infantry_4_attack_boost
  {
    cdr >> ros_message->infantry_4_attack_boost;
  }

  // Field name: sentry_health_regen
  {
    cdr >> ros_message->sentry_health_regen;
  }

  // Field name: sentry_cooling_boost
  {
    cdr >> ros_message->sentry_cooling_boost;
  }

  // Field name: sentry_defense_boost
  {
    cdr >> ros_message->sentry_defense_boost;
  }

  // Field name: sentry_defense_debuff
  {
    cdr >> ros_message->sentry_defense_debuff;
  }

  // Field name: sentry_attack_boost
  {
    cdr >> ros_message->sentry_attack_boost;
  }

  // Field name: sentry_posture
  {
    cdr >> ros_message->sentry_posture;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t get_serialized_size_radar_interfaces__msg__Buffs(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Buffs__ros_msg_type * ros_message = static_cast<const _Buffs__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name hero_health_regen
  {
    size_t item_size = sizeof(ros_message->hero_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hero_cooling_boost
  {
    size_t item_size = sizeof(ros_message->hero_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hero_defense_boost
  {
    size_t item_size = sizeof(ros_message->hero_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hero_defense_debuff
  {
    size_t item_size = sizeof(ros_message->hero_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hero_attack_boost
  {
    size_t item_size = sizeof(ros_message->hero_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engineer_health_regen
  {
    size_t item_size = sizeof(ros_message->engineer_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engineer_cooling_boost
  {
    size_t item_size = sizeof(ros_message->engineer_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engineer_defense_boost
  {
    size_t item_size = sizeof(ros_message->engineer_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engineer_defense_debuff
  {
    size_t item_size = sizeof(ros_message->engineer_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engineer_attack_boost
  {
    size_t item_size = sizeof(ros_message->engineer_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_3_health_regen
  {
    size_t item_size = sizeof(ros_message->infantry_3_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_3_cooling_boost
  {
    size_t item_size = sizeof(ros_message->infantry_3_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_3_defense_boost
  {
    size_t item_size = sizeof(ros_message->infantry_3_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_3_defense_debuff
  {
    size_t item_size = sizeof(ros_message->infantry_3_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_3_attack_boost
  {
    size_t item_size = sizeof(ros_message->infantry_3_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_4_health_regen
  {
    size_t item_size = sizeof(ros_message->infantry_4_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_4_cooling_boost
  {
    size_t item_size = sizeof(ros_message->infantry_4_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_4_defense_boost
  {
    size_t item_size = sizeof(ros_message->infantry_4_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_4_defense_debuff
  {
    size_t item_size = sizeof(ros_message->infantry_4_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name infantry_4_attack_boost
  {
    size_t item_size = sizeof(ros_message->infantry_4_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_health_regen
  {
    size_t item_size = sizeof(ros_message->sentry_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_cooling_boost
  {
    size_t item_size = sizeof(ros_message->sentry_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_defense_boost
  {
    size_t item_size = sizeof(ros_message->sentry_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_defense_debuff
  {
    size_t item_size = sizeof(ros_message->sentry_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_attack_boost
  {
    size_t item_size = sizeof(ros_message->sentry_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sentry_posture
  {
    size_t item_size = sizeof(ros_message->sentry_posture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Buffs__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_interfaces__msg__Buffs(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t max_serialized_size_radar_interfaces__msg__Buffs(
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

  // member: hero_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hero_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hero_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hero_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hero_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: engineer_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engineer_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: engineer_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engineer_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engineer_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_3_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: infantry_3_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_3_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: infantry_3_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: infantry_3_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_4_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: infantry_4_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: infantry_4_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: infantry_4_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: infantry_4_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sentry_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sentry_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sentry_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sentry_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sentry_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: sentry_posture
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
    using DataType = radar_interfaces__msg__Buffs;
    is_plain =
      (
      offsetof(DataType, sentry_posture) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Buffs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_interfaces__msg__Buffs(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Buffs = {
  "radar_interfaces::msg",
  "Buffs",
  _Buffs__cdr_serialize,
  _Buffs__cdr_deserialize,
  _Buffs__get_serialized_size,
  _Buffs__max_serialized_size
};

static rosidl_message_type_support_t _Buffs__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Buffs,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_interfaces, msg, Buffs)() {
  return &_Buffs__type_support;
}

#if defined(__cplusplus)
}
#endif
