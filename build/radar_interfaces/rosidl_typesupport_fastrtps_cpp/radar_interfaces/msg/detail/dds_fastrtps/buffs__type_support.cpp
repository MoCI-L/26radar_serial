// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from radar_interfaces:msg/Buffs.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/buffs__rosidl_typesupport_fastrtps_cpp.hpp"
#include "radar_interfaces/msg/detail/buffs__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace radar_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
cdr_serialize(
  const radar_interfaces::msg::Buffs & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: hero_health_regen
  cdr << ros_message.hero_health_regen;
  // Member: hero_cooling_boost
  cdr << ros_message.hero_cooling_boost;
  // Member: hero_defense_boost
  cdr << ros_message.hero_defense_boost;
  // Member: hero_defense_debuff
  cdr << ros_message.hero_defense_debuff;
  // Member: hero_attack_boost
  cdr << ros_message.hero_attack_boost;
  // Member: engineer_health_regen
  cdr << ros_message.engineer_health_regen;
  // Member: engineer_cooling_boost
  cdr << ros_message.engineer_cooling_boost;
  // Member: engineer_defense_boost
  cdr << ros_message.engineer_defense_boost;
  // Member: engineer_defense_debuff
  cdr << ros_message.engineer_defense_debuff;
  // Member: engineer_attack_boost
  cdr << ros_message.engineer_attack_boost;
  // Member: infantry_3_health_regen
  cdr << ros_message.infantry_3_health_regen;
  // Member: infantry_3_cooling_boost
  cdr << ros_message.infantry_3_cooling_boost;
  // Member: infantry_3_defense_boost
  cdr << ros_message.infantry_3_defense_boost;
  // Member: infantry_3_defense_debuff
  cdr << ros_message.infantry_3_defense_debuff;
  // Member: infantry_3_attack_boost
  cdr << ros_message.infantry_3_attack_boost;
  // Member: infantry_4_health_regen
  cdr << ros_message.infantry_4_health_regen;
  // Member: infantry_4_cooling_boost
  cdr << ros_message.infantry_4_cooling_boost;
  // Member: infantry_4_defense_boost
  cdr << ros_message.infantry_4_defense_boost;
  // Member: infantry_4_defense_debuff
  cdr << ros_message.infantry_4_defense_debuff;
  // Member: infantry_4_attack_boost
  cdr << ros_message.infantry_4_attack_boost;
  // Member: sentry_health_regen
  cdr << ros_message.sentry_health_regen;
  // Member: sentry_cooling_boost
  cdr << ros_message.sentry_cooling_boost;
  // Member: sentry_defense_boost
  cdr << ros_message.sentry_defense_boost;
  // Member: sentry_defense_debuff
  cdr << ros_message.sentry_defense_debuff;
  // Member: sentry_attack_boost
  cdr << ros_message.sentry_attack_boost;
  // Member: sentry_posture
  cdr << ros_message.sentry_posture;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  radar_interfaces::msg::Buffs & ros_message)
{
  // Member: hero_health_regen
  cdr >> ros_message.hero_health_regen;

  // Member: hero_cooling_boost
  cdr >> ros_message.hero_cooling_boost;

  // Member: hero_defense_boost
  cdr >> ros_message.hero_defense_boost;

  // Member: hero_defense_debuff
  cdr >> ros_message.hero_defense_debuff;

  // Member: hero_attack_boost
  cdr >> ros_message.hero_attack_boost;

  // Member: engineer_health_regen
  cdr >> ros_message.engineer_health_regen;

  // Member: engineer_cooling_boost
  cdr >> ros_message.engineer_cooling_boost;

  // Member: engineer_defense_boost
  cdr >> ros_message.engineer_defense_boost;

  // Member: engineer_defense_debuff
  cdr >> ros_message.engineer_defense_debuff;

  // Member: engineer_attack_boost
  cdr >> ros_message.engineer_attack_boost;

  // Member: infantry_3_health_regen
  cdr >> ros_message.infantry_3_health_regen;

  // Member: infantry_3_cooling_boost
  cdr >> ros_message.infantry_3_cooling_boost;

  // Member: infantry_3_defense_boost
  cdr >> ros_message.infantry_3_defense_boost;

  // Member: infantry_3_defense_debuff
  cdr >> ros_message.infantry_3_defense_debuff;

  // Member: infantry_3_attack_boost
  cdr >> ros_message.infantry_3_attack_boost;

  // Member: infantry_4_health_regen
  cdr >> ros_message.infantry_4_health_regen;

  // Member: infantry_4_cooling_boost
  cdr >> ros_message.infantry_4_cooling_boost;

  // Member: infantry_4_defense_boost
  cdr >> ros_message.infantry_4_defense_boost;

  // Member: infantry_4_defense_debuff
  cdr >> ros_message.infantry_4_defense_debuff;

  // Member: infantry_4_attack_boost
  cdr >> ros_message.infantry_4_attack_boost;

  // Member: sentry_health_regen
  cdr >> ros_message.sentry_health_regen;

  // Member: sentry_cooling_boost
  cdr >> ros_message.sentry_cooling_boost;

  // Member: sentry_defense_boost
  cdr >> ros_message.sentry_defense_boost;

  // Member: sentry_defense_debuff
  cdr >> ros_message.sentry_defense_debuff;

  // Member: sentry_attack_boost
  cdr >> ros_message.sentry_attack_boost;

  // Member: sentry_posture
  cdr >> ros_message.sentry_posture;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
get_serialized_size(
  const radar_interfaces::msg::Buffs & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: hero_health_regen
  {
    size_t item_size = sizeof(ros_message.hero_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hero_cooling_boost
  {
    size_t item_size = sizeof(ros_message.hero_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hero_defense_boost
  {
    size_t item_size = sizeof(ros_message.hero_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hero_defense_debuff
  {
    size_t item_size = sizeof(ros_message.hero_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hero_attack_boost
  {
    size_t item_size = sizeof(ros_message.hero_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engineer_health_regen
  {
    size_t item_size = sizeof(ros_message.engineer_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engineer_cooling_boost
  {
    size_t item_size = sizeof(ros_message.engineer_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engineer_defense_boost
  {
    size_t item_size = sizeof(ros_message.engineer_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engineer_defense_debuff
  {
    size_t item_size = sizeof(ros_message.engineer_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engineer_attack_boost
  {
    size_t item_size = sizeof(ros_message.engineer_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_3_health_regen
  {
    size_t item_size = sizeof(ros_message.infantry_3_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_3_cooling_boost
  {
    size_t item_size = sizeof(ros_message.infantry_3_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_3_defense_boost
  {
    size_t item_size = sizeof(ros_message.infantry_3_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_3_defense_debuff
  {
    size_t item_size = sizeof(ros_message.infantry_3_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_3_attack_boost
  {
    size_t item_size = sizeof(ros_message.infantry_3_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_4_health_regen
  {
    size_t item_size = sizeof(ros_message.infantry_4_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_4_cooling_boost
  {
    size_t item_size = sizeof(ros_message.infantry_4_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_4_defense_boost
  {
    size_t item_size = sizeof(ros_message.infantry_4_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_4_defense_debuff
  {
    size_t item_size = sizeof(ros_message.infantry_4_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: infantry_4_attack_boost
  {
    size_t item_size = sizeof(ros_message.infantry_4_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sentry_health_regen
  {
    size_t item_size = sizeof(ros_message.sentry_health_regen);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sentry_cooling_boost
  {
    size_t item_size = sizeof(ros_message.sentry_cooling_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sentry_defense_boost
  {
    size_t item_size = sizeof(ros_message.sentry_defense_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sentry_defense_debuff
  {
    size_t item_size = sizeof(ros_message.sentry_defense_debuff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sentry_attack_boost
  {
    size_t item_size = sizeof(ros_message.sentry_attack_boost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sentry_posture
  {
    size_t item_size = sizeof(ros_message.sentry_posture);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
max_serialized_size_Buffs(
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


  // Member: hero_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hero_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hero_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hero_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hero_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: engineer_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engineer_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: engineer_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engineer_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engineer_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: infantry_3_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: infantry_3_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: infantry_3_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: infantry_3_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: infantry_3_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: infantry_4_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: infantry_4_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: infantry_4_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: infantry_4_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: infantry_4_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sentry_health_regen
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sentry_cooling_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sentry_defense_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sentry_defense_debuff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sentry_attack_boost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sentry_posture
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
    using DataType = radar_interfaces::msg::Buffs;
    is_plain =
      (
      offsetof(DataType, sentry_posture) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Buffs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::Buffs *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Buffs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<radar_interfaces::msg::Buffs *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Buffs__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::Buffs *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Buffs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Buffs(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Buffs__callbacks = {
  "radar_interfaces::msg",
  "Buffs",
  _Buffs__cdr_serialize,
  _Buffs__cdr_deserialize,
  _Buffs__get_serialized_size,
  _Buffs__max_serialized_size
};

static rosidl_message_type_support_t _Buffs__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Buffs__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace radar_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_radar_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<radar_interfaces::msg::Buffs>()
{
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_Buffs__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, radar_interfaces, msg, Buffs)() {
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_Buffs__handle;
}

#ifdef __cplusplus
}
#endif
