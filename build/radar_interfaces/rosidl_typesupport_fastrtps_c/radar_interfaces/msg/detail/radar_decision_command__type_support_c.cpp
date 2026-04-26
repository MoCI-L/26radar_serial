// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_interfaces:msg/RadarDecisionCommand.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/radar_decision_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_interfaces/msg/detail/radar_decision_command__struct.h"
#include "radar_interfaces/msg/detail/radar_decision_command__functions.h"
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

#include "rosidl_runtime_c/string.h"  // password
#include "rosidl_runtime_c/string_functions.h"  // password

// forward declare type support functions


using _RadarDecisionCommand__ros_msg_type = radar_interfaces__msg__RadarDecisionCommand;

static bool _RadarDecisionCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RadarDecisionCommand__ros_msg_type * ros_message = static_cast<const _RadarDecisionCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: sender_id
  {
    cdr << ros_message->sender_id;
  }

  // Field name: receiver_id
  {
    cdr << ros_message->receiver_id;
  }

  // Field name: double_vulnerability_request
  {
    cdr << ros_message->double_vulnerability_request;
  }

  // Field name: password_command_type
  {
    cdr << ros_message->password_command_type;
  }

  // Field name: password
  {
    const rosidl_runtime_c__String * str = &ros_message->password;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RadarDecisionCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RadarDecisionCommand__ros_msg_type * ros_message = static_cast<_RadarDecisionCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: sender_id
  {
    cdr >> ros_message->sender_id;
  }

  // Field name: receiver_id
  {
    cdr >> ros_message->receiver_id;
  }

  // Field name: double_vulnerability_request
  {
    cdr >> ros_message->double_vulnerability_request;
  }

  // Field name: password_command_type
  {
    cdr >> ros_message->password_command_type;
  }

  // Field name: password
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->password.data) {
      rosidl_runtime_c__String__init(&ros_message->password);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->password,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'password'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t get_serialized_size_radar_interfaces__msg__RadarDecisionCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RadarDecisionCommand__ros_msg_type * ros_message = static_cast<const _RadarDecisionCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sender_id
  {
    size_t item_size = sizeof(ros_message->sender_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name receiver_id
  {
    size_t item_size = sizeof(ros_message->receiver_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name double_vulnerability_request
  {
    size_t item_size = sizeof(ros_message->double_vulnerability_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name password_command_type
  {
    size_t item_size = sizeof(ros_message->password_command_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name password
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->password.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RadarDecisionCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_interfaces__msg__RadarDecisionCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t max_serialized_size_radar_interfaces__msg__RadarDecisionCommand(
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

  // member: sender_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: receiver_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: double_vulnerability_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: password_command_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: password
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = radar_interfaces__msg__RadarDecisionCommand;
    is_plain =
      (
      offsetof(DataType, password) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RadarDecisionCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_interfaces__msg__RadarDecisionCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RadarDecisionCommand = {
  "radar_interfaces::msg",
  "RadarDecisionCommand",
  _RadarDecisionCommand__cdr_serialize,
  _RadarDecisionCommand__cdr_deserialize,
  _RadarDecisionCommand__get_serialized_size,
  _RadarDecisionCommand__max_serialized_size
};

static rosidl_message_type_support_t _RadarDecisionCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RadarDecisionCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_interfaces, msg, RadarDecisionCommand)() {
  return &_RadarDecisionCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
