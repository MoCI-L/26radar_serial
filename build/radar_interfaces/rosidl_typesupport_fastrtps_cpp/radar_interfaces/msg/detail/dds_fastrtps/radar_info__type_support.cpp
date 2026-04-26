// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from radar_interfaces:msg/RadarInfo.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/radar_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "radar_interfaces/msg/detail/radar_info__struct.hpp"

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
  const radar_interfaces::msg::RadarInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: double_vulnerability_chances
  cdr << ros_message.double_vulnerability_chances;
  // Member: opponent_double_vulnerability_active
  cdr << (ros_message.opponent_double_vulnerability_active ? true : false);
  // Member: encryption_level
  cdr << ros_message.encryption_level;
  // Member: key_change_enabled
  cdr << (ros_message.key_change_enabled ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  radar_interfaces::msg::RadarInfo & ros_message)
{
  // Member: double_vulnerability_chances
  cdr >> ros_message.double_vulnerability_chances;

  // Member: opponent_double_vulnerability_active
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.opponent_double_vulnerability_active = tmp ? true : false;
  }

  // Member: encryption_level
  cdr >> ros_message.encryption_level;

  // Member: key_change_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.key_change_enabled = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
get_serialized_size(
  const radar_interfaces::msg::RadarInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: double_vulnerability_chances
  {
    size_t item_size = sizeof(ros_message.double_vulnerability_chances);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_double_vulnerability_active
  {
    size_t item_size = sizeof(ros_message.opponent_double_vulnerability_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encryption_level
  {
    size_t item_size = sizeof(ros_message.encryption_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_change_enabled
  {
    size_t item_size = sizeof(ros_message.key_change_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
max_serialized_size_RadarInfo(
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


  // Member: double_vulnerability_chances
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: opponent_double_vulnerability_active
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: encryption_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_change_enabled
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
    using DataType = radar_interfaces::msg::RadarInfo;
    is_plain =
      (
      offsetof(DataType, key_change_enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RadarInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::RadarInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RadarInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<radar_interfaces::msg::RadarInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RadarInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::RadarInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RadarInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RadarInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RadarInfo__callbacks = {
  "radar_interfaces::msg",
  "RadarInfo",
  _RadarInfo__cdr_serialize,
  _RadarInfo__cdr_deserialize,
  _RadarInfo__get_serialized_size,
  _RadarInfo__max_serialized_size
};

static rosidl_message_type_support_t _RadarInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RadarInfo__callbacks,
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
get_message_type_support_handle<radar_interfaces::msg::RadarInfo>()
{
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_RadarInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, radar_interfaces, msg, RadarInfo)() {
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_RadarInfo__handle;
}

#ifdef __cplusplus
}
#endif
