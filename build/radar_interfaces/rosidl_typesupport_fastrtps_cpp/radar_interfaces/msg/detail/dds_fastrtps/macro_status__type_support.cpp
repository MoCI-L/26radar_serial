// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from radar_interfaces:msg/MacroStatus.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/macro_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "radar_interfaces/msg/detail/macro_status__struct.hpp"

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
  const radar_interfaces::msg::MacroStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: remaining_gold
  cdr << ros_message.remaining_gold;
  // Member: total_gold
  cdr << ros_message.total_gold;
  // Member: enemy_supply_area_occupied
  cdr << (ros_message.enemy_supply_area_occupied ? true : false);
  // Member: enemy_central_highland_status
  cdr << ros_message.enemy_central_highland_status;
  // Member: enemy_trapezoid_highland_occupied
  cdr << (ros_message.enemy_trapezoid_highland_occupied ? true : false);
  // Member: enemy_fort_buff_status
  cdr << ros_message.enemy_fort_buff_status;
  // Member: enemy_outpost_buff_status
  cdr << ros_message.enemy_outpost_buff_status;
  // Member: enemy_base_buff_occupied
  cdr << (ros_message.enemy_base_buff_occupied ? true : false);
  // Member: enemy_tunnel_pre_jump_occupied
  cdr << (ros_message.enemy_tunnel_pre_jump_occupied ? true : false);
  // Member: enemy_tunnel_post_jump_occupied
  cdr << (ros_message.enemy_tunnel_post_jump_occupied ? true : false);
  // Member: ally_side_tunnel_pre_jump_occupied
  cdr << (ros_message.ally_side_tunnel_pre_jump_occupied ? true : false);
  // Member: ally_side_tunnel_post_jump_occupied
  cdr << (ros_message.ally_side_tunnel_post_jump_occupied ? true : false);
  // Member: enemy_highland_upper_occupied
  cdr << (ros_message.enemy_highland_upper_occupied ? true : false);
  // Member: enemy_jump_upper_occupied
  cdr << (ros_message.enemy_jump_upper_occupied ? true : false);
  // Member: enemy_road_upper_occupied
  cdr << (ros_message.enemy_road_upper_occupied ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  radar_interfaces::msg::MacroStatus & ros_message)
{
  // Member: remaining_gold
  cdr >> ros_message.remaining_gold;

  // Member: total_gold
  cdr >> ros_message.total_gold;

  // Member: enemy_supply_area_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_supply_area_occupied = tmp ? true : false;
  }

  // Member: enemy_central_highland_status
  cdr >> ros_message.enemy_central_highland_status;

  // Member: enemy_trapezoid_highland_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_trapezoid_highland_occupied = tmp ? true : false;
  }

  // Member: enemy_fort_buff_status
  cdr >> ros_message.enemy_fort_buff_status;

  // Member: enemy_outpost_buff_status
  cdr >> ros_message.enemy_outpost_buff_status;

  // Member: enemy_base_buff_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_base_buff_occupied = tmp ? true : false;
  }

  // Member: enemy_tunnel_pre_jump_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_tunnel_pre_jump_occupied = tmp ? true : false;
  }

  // Member: enemy_tunnel_post_jump_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_tunnel_post_jump_occupied = tmp ? true : false;
  }

  // Member: ally_side_tunnel_pre_jump_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ally_side_tunnel_pre_jump_occupied = tmp ? true : false;
  }

  // Member: ally_side_tunnel_post_jump_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ally_side_tunnel_post_jump_occupied = tmp ? true : false;
  }

  // Member: enemy_highland_upper_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_highland_upper_occupied = tmp ? true : false;
  }

  // Member: enemy_jump_upper_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_jump_upper_occupied = tmp ? true : false;
  }

  // Member: enemy_road_upper_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enemy_road_upper_occupied = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
get_serialized_size(
  const radar_interfaces::msg::MacroStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: remaining_gold
  {
    size_t item_size = sizeof(ros_message.remaining_gold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_gold
  {
    size_t item_size = sizeof(ros_message.total_gold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_supply_area_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_supply_area_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_central_highland_status
  {
    size_t item_size = sizeof(ros_message.enemy_central_highland_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_trapezoid_highland_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_trapezoid_highland_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_fort_buff_status
  {
    size_t item_size = sizeof(ros_message.enemy_fort_buff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_outpost_buff_status
  {
    size_t item_size = sizeof(ros_message.enemy_outpost_buff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_base_buff_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_base_buff_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_tunnel_pre_jump_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_tunnel_pre_jump_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_tunnel_post_jump_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_tunnel_post_jump_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_side_tunnel_pre_jump_occupied
  {
    size_t item_size = sizeof(ros_message.ally_side_tunnel_pre_jump_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ally_side_tunnel_post_jump_occupied
  {
    size_t item_size = sizeof(ros_message.ally_side_tunnel_post_jump_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_highland_upper_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_highland_upper_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_jump_upper_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_jump_upper_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: enemy_road_upper_occupied
  {
    size_t item_size = sizeof(ros_message.enemy_road_upper_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_radar_interfaces
max_serialized_size_MacroStatus(
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


  // Member: remaining_gold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: total_gold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: enemy_supply_area_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_central_highland_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_trapezoid_highland_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_fort_buff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_outpost_buff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_base_buff_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_tunnel_pre_jump_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_tunnel_post_jump_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ally_side_tunnel_pre_jump_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ally_side_tunnel_post_jump_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_highland_upper_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_jump_upper_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: enemy_road_upper_occupied
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
    using DataType = radar_interfaces::msg::MacroStatus;
    is_plain =
      (
      offsetof(DataType, enemy_road_upper_occupied) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _MacroStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::MacroStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MacroStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<radar_interfaces::msg::MacroStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MacroStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const radar_interfaces::msg::MacroStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MacroStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_MacroStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _MacroStatus__callbacks = {
  "radar_interfaces::msg",
  "MacroStatus",
  _MacroStatus__cdr_serialize,
  _MacroStatus__cdr_deserialize,
  _MacroStatus__get_serialized_size,
  _MacroStatus__max_serialized_size
};

static rosidl_message_type_support_t _MacroStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MacroStatus__callbacks,
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
get_message_type_support_handle<radar_interfaces::msg::MacroStatus>()
{
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_MacroStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, radar_interfaces, msg, MacroStatus)() {
  return &radar_interfaces::msg::typesupport_fastrtps_cpp::_MacroStatus__handle;
}

#ifdef __cplusplus
}
#endif
