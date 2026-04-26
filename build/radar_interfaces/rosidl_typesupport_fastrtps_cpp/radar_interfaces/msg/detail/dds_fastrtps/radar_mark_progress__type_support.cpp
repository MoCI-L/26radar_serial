// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from radar_interfaces:msg/RadarMarkProgress.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/radar_mark_progress__rosidl_typesupport_fastrtps_cpp.hpp"
#include "radar_interfaces/msg/detail/radar_mark_progress__struct.hpp"

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
  const radar_interfaces::msg::RadarMarkProgress & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: enemy_hero_marked
  cdr << (ros_message.enemy_hero_marked ? true : false);
  // Member: enemy_engineer_marked
  cdr << (ros_message.enemy_engineer_marked ? true : false);
  // Member: enemy_infantry_3_marked
  cdr << (ros_message.enemy_infantry_3_marked ? true : false);
  // Member: enemy_infantry_4_marked
  cdr << (ros_message.enemy_infantry_4_marked ? true : false);
  // Member: enemy_aerial_marked
  cdr << (ros_message.enemy_aerial_marked ? true : false);
  // Member: enemy_sentry_marked
  cdr << (ros_message.enemy_sentry_marked ? true : false);
  // Member: ally_hero_marked
  cdr << (ros_message.ally_hero_marked ? true : false);
  // Member: ally_engineer_marked
  cdr << (ros_message.ally_engineer_marked ? true : false);
  // Member: ally_infantry_3_marked
  cdr << (ros_message.ally_infantry_3_marked ? true : false);
  // Member: ally_infantry_4_marked
  cdr << (ros_message.ally_infantry_4_marked ? true : false);
  // Member: ally_aerial_marked
  cdr << (ros_message.ally_aerial_marked ? true : false);
  // Member: ally_sentry_marked
  cdr << (ros_message.ally_sentry_marked ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  radar_interfaces::msg::RadarMarkProgress & ros_message)
{
  // Member: enemy_hero_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_hero_marked = tmp ? true : false;
  }

  // Member: enemy_engineer_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_engineer_marked = tmp ? true : false;
  }

  // Member: enemy_infantry_3_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_infantry_3_marked = tmp ? true : false;
  }

  // Member: enemy_infantry_4_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_infantry_4_marked = tmp ? true : false;
  }

  // Member: enemy_aerial_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_aerial_marked = tmp ? true : false;
  }

  // Member: enemy_sentry_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_sentry_marked = tmp ? true : false;
  }

  // Member: ally_hero_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ally_hero_marked = tmp ? true : false;
  }

  // Member: ally_engineer_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ally_engineer_marked = tmp ? true : false;
  }

  // Member: ally_infantry_3_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ally_infantry_3_marked = tmp ? true : false;
  }

  // Member: ally_infantry_4_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ally_infantry_4_marked = tmp ? true : false;
  }

  // Member: ally_aerial_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ally_aerial_marked = tmp ? true : false;
  }

  // Member: ally_sentry_marked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ally_sentry_marked = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
get_serialized_size(
  const radar_interfaces::msg::RadarMarkProgress & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: enemy_hero_marked
  {
    size_t item_size = sizeof(ros_message.enemy_hero_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_engineer_marked
  {
    size_t item_size = sizeof(ros_message.enemy_engineer_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_infantry_3_marked
  {
    size_t item_size = sizeof(ros_message.enemy_infantry_3_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_infantry_4_marked
  {
    size_t item_size = sizeof(ros_message.enemy_infantry_4_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_aerial_marked
  {
    size_t item_size = sizeof(ros_message.enemy_aerial_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_sentry_marked
  {
    size_t item_size = sizeof(ros_message.enemy_sentry_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_hero_marked
  {
    size_t item_size = sizeof(ros_message.ally_hero_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_engineer_marked
  {
    size_t item_size = sizeof(ros_message.ally_engineer_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_infantry_3_marked
  {
    size_t item_size = sizeof(ros_message.ally_infantry_3_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_infantry_4_marked
  {
    size_t item_size = sizeof(ros_message.ally_infantry_4_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_aerial_marked
  {
    size_t item_size = sizeof(ros_message.ally_aerial_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_sentry_marked
  {
    size_t item_size = sizeof(ros_message.ally_sentry_marked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
max_serialized_size_RadarMarkProgress(
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


  // Member: enemy_hero_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_engineer_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_infantry_3_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_infantry_4_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_aerial_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_sentry_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ally_hero_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ally_engineer_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ally_infantry_3_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ally_infantry_4_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ally_aerial_marked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ally_sentry_marked
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
    using DataType = radar_interfaces::msg::RadarMarkProgress;
    is_plain =
      (
      offsetof(DataType, ally_sentry_marked) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RadarMarkProgress__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::RadarMarkProgress *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RadarMarkProgress__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<radar_interfaces::msg::RadarMarkProgress *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RadarMarkProgress__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::RadarMarkProgress *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RadarMarkProgress__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RadarMarkProgress(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RadarMarkProgress__callbacks = {
  "radar_interfaces::msg",
  "RadarMarkProgress",
  _RadarMarkProgress__cdr_serialize,
  _RadarMarkProgress__cdr_deserialize,
  _RadarMarkProgress__get_serialized_size,
  _RadarMarkProgress__max_serialized_size
};

static rosidl_message_type_support_t _RadarMarkProgress__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RadarMarkProgress__callbacks,
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
get_message_type_support_handle<radar_interfaces::msg::RadarMarkProgress>()
{
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_RadarMarkProgress__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, radar_interfaces, msg, RadarMarkProgress)() {
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_RadarMarkProgress__handle;
}

#ifdef __cplusplus
}
#endif
