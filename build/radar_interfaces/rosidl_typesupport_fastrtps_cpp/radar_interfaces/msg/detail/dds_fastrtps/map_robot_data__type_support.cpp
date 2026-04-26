// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from radar_interfaces:msg/MapRobotData.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/map_robot_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "radar_interfaces/msg/detail/map_robot_data__struct.hpp"

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
  const radar_interfaces::msg::MapRobotData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: opponent_hero_x
  cdr << ros_message.opponent_hero_x;
  // Member: opponent_hero_y
  cdr << ros_message.opponent_hero_y;
  // Member: opponent_engineer_x
  cdr << ros_message.opponent_engineer_x;
  // Member: opponent_engineer_y
  cdr << ros_message.opponent_engineer_y;
  // Member: opponent_infantry_3_x
  cdr << ros_message.opponent_infantry_3_x;
  // Member: opponent_infantry_3_y
  cdr << ros_message.opponent_infantry_3_y;
  // Member: opponent_infantry_4_x
  cdr << ros_message.opponent_infantry_4_x;
  // Member: opponent_infantry_4_y
  cdr << ros_message.opponent_infantry_4_y;
  // Member: opponent_aerial_x
  cdr << ros_message.opponent_aerial_x;
  // Member: opponent_aerial_y
  cdr << ros_message.opponent_aerial_y;
  // Member: opponent_sentry_x
  cdr << ros_message.opponent_sentry_x;
  // Member: opponent_sentry_y
  cdr << ros_message.opponent_sentry_y;
  // Member: ally_hero_x
  cdr << ros_message.ally_hero_x;
  // Member: ally_hero_y
  cdr << ros_message.ally_hero_y;
  // Member: ally_engineer_x
  cdr << ros_message.ally_engineer_x;
  // Member: ally_engineer_y
  cdr << ros_message.ally_engineer_y;
  // Member: ally_infantry_3_x
  cdr << ros_message.ally_infantry_3_x;
  // Member: ally_infantry_3_y
  cdr << ros_message.ally_infantry_3_y;
  // Member: ally_infantry_4_x
  cdr << ros_message.ally_infantry_4_x;
  // Member: ally_infantry_4_y
  cdr << ros_message.ally_infantry_4_y;
  // Member: ally_aerial_x
  cdr << ros_message.ally_aerial_x;
  // Member: ally_aerial_y
  cdr << ros_message.ally_aerial_y;
  // Member: ally_sentry_x
  cdr << ros_message.ally_sentry_x;
  // Member: ally_sentry_y
  cdr << ros_message.ally_sentry_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  radar_interfaces::msg::MapRobotData & ros_message)
{
  // Member: opponent_hero_x
  cdr >> ros_message.opponent_hero_x;

  // Member: opponent_hero_y
  cdr >> ros_message.opponent_hero_y;

  // Member: opponent_engineer_x
  cdr >> ros_message.opponent_engineer_x;

  // Member: opponent_engineer_y
  cdr >> ros_message.opponent_engineer_y;

  // Member: opponent_infantry_3_x
  cdr >> ros_message.opponent_infantry_3_x;

  // Member: opponent_infantry_3_y
  cdr >> ros_message.opponent_infantry_3_y;

  // Member: opponent_infantry_4_x
  cdr >> ros_message.opponent_infantry_4_x;

  // Member: opponent_infantry_4_y
  cdr >> ros_message.opponent_infantry_4_y;

  // Member: opponent_aerial_x
  cdr >> ros_message.opponent_aerial_x;

  // Member: opponent_aerial_y
  cdr >> ros_message.opponent_aerial_y;

  // Member: opponent_sentry_x
  cdr >> ros_message.opponent_sentry_x;

  // Member: opponent_sentry_y
  cdr >> ros_message.opponent_sentry_y;

  // Member: ally_hero_x
  cdr >> ros_message.ally_hero_x;

  // Member: ally_hero_y
  cdr >> ros_message.ally_hero_y;

  // Member: ally_engineer_x
  cdr >> ros_message.ally_engineer_x;

  // Member: ally_engineer_y
  cdr >> ros_message.ally_engineer_y;

  // Member: ally_infantry_3_x
  cdr >> ros_message.ally_infantry_3_x;

  // Member: ally_infantry_3_y
  cdr >> ros_message.ally_infantry_3_y;

  // Member: ally_infantry_4_x
  cdr >> ros_message.ally_infantry_4_x;

  // Member: ally_infantry_4_y
  cdr >> ros_message.ally_infantry_4_y;

  // Member: ally_aerial_x
  cdr >> ros_message.ally_aerial_x;

  // Member: ally_aerial_y
  cdr >> ros_message.ally_aerial_y;

  // Member: ally_sentry_x
  cdr >> ros_message.ally_sentry_x;

  // Member: ally_sentry_y
  cdr >> ros_message.ally_sentry_y;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
get_serialized_size(
  const radar_interfaces::msg::MapRobotData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: opponent_hero_x
  {
    size_t item_size = sizeof(ros_message.opponent_hero_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_hero_y
  {
    size_t item_size = sizeof(ros_message.opponent_hero_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_engineer_x
  {
    size_t item_size = sizeof(ros_message.opponent_engineer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_engineer_y
  {
    size_t item_size = sizeof(ros_message.opponent_engineer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_infantry_3_x
  {
    size_t item_size = sizeof(ros_message.opponent_infantry_3_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_infantry_3_y
  {
    size_t item_size = sizeof(ros_message.opponent_infantry_3_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_infantry_4_x
  {
    size_t item_size = sizeof(ros_message.opponent_infantry_4_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_infantry_4_y
  {
    size_t item_size = sizeof(ros_message.opponent_infantry_4_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_aerial_x
  {
    size_t item_size = sizeof(ros_message.opponent_aerial_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_aerial_y
  {
    size_t item_size = sizeof(ros_message.opponent_aerial_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_sentry_x
  {
    size_t item_size = sizeof(ros_message.opponent_sentry_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: opponent_sentry_y
  {
    size_t item_size = sizeof(ros_message.opponent_sentry_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_hero_x
  {
    size_t item_size = sizeof(ros_message.ally_hero_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_hero_y
  {
    size_t item_size = sizeof(ros_message.ally_hero_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_engineer_x
  {
    size_t item_size = sizeof(ros_message.ally_engineer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_engineer_y
  {
    size_t item_size = sizeof(ros_message.ally_engineer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_infantry_3_x
  {
    size_t item_size = sizeof(ros_message.ally_infantry_3_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_infantry_3_y
  {
    size_t item_size = sizeof(ros_message.ally_infantry_3_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_infantry_4_x
  {
    size_t item_size = sizeof(ros_message.ally_infantry_4_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_infantry_4_y
  {
    size_t item_size = sizeof(ros_message.ally_infantry_4_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_aerial_x
  {
    size_t item_size = sizeof(ros_message.ally_aerial_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_aerial_y
  {
    size_t item_size = sizeof(ros_message.ally_aerial_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_sentry_x
  {
    size_t item_size = sizeof(ros_message.ally_sentry_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_sentry_y
  {
    size_t item_size = sizeof(ros_message.ally_sentry_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
max_serialized_size_MapRobotData(
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


  // Member: opponent_hero_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_hero_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_engineer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_engineer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_infantry_3_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_infantry_3_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_infantry_4_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_infantry_4_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_aerial_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_aerial_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_sentry_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: opponent_sentry_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_hero_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_hero_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_engineer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_engineer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_infantry_3_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_infantry_3_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_infantry_4_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_infantry_4_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_aerial_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_aerial_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_sentry_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ally_sentry_y
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
    using DataType = radar_interfaces::msg::MapRobotData;
    is_plain =
      (
      offsetof(DataType, ally_sentry_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MapRobotData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::MapRobotData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MapRobotData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<radar_interfaces::msg::MapRobotData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MapRobotData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::MapRobotData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MapRobotData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MapRobotData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MapRobotData__callbacks = {
  "radar_interfaces::msg",
  "MapRobotData",
  _MapRobotData__cdr_serialize,
  _MapRobotData__cdr_deserialize,
  _MapRobotData__get_serialized_size,
  _MapRobotData__max_serialized_size
};

static rosidl_message_type_support_t _MapRobotData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MapRobotData__callbacks,
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
get_message_type_support_handle<radar_interfaces::msg::MapRobotData>()
{
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_MapRobotData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, radar_interfaces, msg, MapRobotData)() {
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_MapRobotData__handle;
}

#ifdef __cplusplus
}
#endif
