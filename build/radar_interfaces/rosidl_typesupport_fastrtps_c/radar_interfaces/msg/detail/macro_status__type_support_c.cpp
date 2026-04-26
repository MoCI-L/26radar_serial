// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from radar_interfaces:msg/MacroStatus.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/macro_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "radar_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "radar_interfaces/msg/detail/macro_status__struct.h"
#include "radar_interfaces/msg/detail/macro_status__functions.h"
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


using _MacroStatus__ros_msg_type = radar_interfaces__msg__MacroStatus;

static bool _MacroStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MacroStatus__ros_msg_type * ros_message = static_cast<const _MacroStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: remaining_gold
  {
    cdr << ros_message->remaining_gold;
  }

  // Field name: total_gold
  {
    cdr << ros_message->total_gold;
  }

  // Field name: enemy_supply_area_occupied
  {
    cdr << (ros_message->enemy_supply_area_occupied ? true : false);
  }

  // Field name: enemy_central_highland_status
  {
    cdr << ros_message->enemy_central_highland_status;
  }

  // Field name: enemy_trapezoid_highland_occupied
  {
    cdr << (ros_message->enemy_trapezoid_highland_occupied ? true : false);
  }

  // Field name: enemy_fort_buff_status
  {
    cdr << ros_message->enemy_fort_buff_status;
  }

  // Field name: enemy_outpost_buff_status
  {
    cdr << ros_message->enemy_outpost_buff_status;
  }

  // Field name: enemy_base_buff_occupied
  {
    cdr << (ros_message->enemy_base_buff_occupied ? true : false);
  }

  // Field name: enemy_tunnel_pre_jump_occupied
  {
    cdr << (ros_message->enemy_tunnel_pre_jump_occupied ? true : false);
  }

  // Field name: enemy_tunnel_post_jump_occupied
  {
    cdr << (ros_message->enemy_tunnel_post_jump_occupied ? true : false);
  }

  // Field name: ally_side_tunnel_pre_jump_occupied
  {
    cdr << (ros_message->ally_side_tunnel_pre_jump_occupied ? true : false);
  }

  // Field name: ally_side_tunnel_post_jump_occupied
  {
    cdr << (ros_message->ally_side_tunnel_post_jump_occupied ? true : false);
  }

  // Field name: enemy_highland_upper_occupied
  {
    cdr << (ros_message->enemy_highland_upper_occupied ? true : false);
  }

  // Field name: enemy_jump_upper_occupied
  {
    cdr << (ros_message->enemy_jump_upper_occupied ? true : false);
  }

  // Field name: enemy_road_upper_occupied
  {
    cdr << (ros_message->enemy_road_upper_occupied ? true : false);
  }

  return true;
}

static bool _MacroStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MacroStatus__ros_msg_type * ros_message = static_cast<_MacroStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: remaining_gold
  {
    cdr >> ros_message->remaining_gold;
  }

  // Field name: total_gold
  {
    cdr >> ros_message->total_gold;
  }

  // Field name: enemy_supply_area_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_supply_area_occupied = tmp ? true : false;
  }

  // Field name: enemy_central_highland_status
  {
    cdr >> ros_message->enemy_central_highland_status;
  }

  // Field name: enemy_trapezoid_highland_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_trapezoid_highland_occupied = tmp ? true : false;
  }

  // Field name: enemy_fort_buff_status
  {
    cdr >> ros_message->enemy_fort_buff_status;
  }

  // Field name: enemy_outpost_buff_status
  {
    cdr >> ros_message->enemy_outpost_buff_status;
  }

  // Field name: enemy_base_buff_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_base_buff_occupied = tmp ? true : false;
  }

  // Field name: enemy_tunnel_pre_jump_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_tunnel_pre_jump_occupied = tmp ? true : false;
  }

  // Field name: enemy_tunnel_post_jump_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_tunnel_post_jump_occupied = tmp ? true : false;
  }

  // Field name: ally_side_tunnel_pre_jump_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ally_side_tunnel_pre_jump_occupied = tmp ? true : false;
  }

  // Field name: ally_side_tunnel_post_jump_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ally_side_tunnel_post_jump_occupied = tmp ? true : false;
  }

  // Field name: enemy_highland_upper_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_highland_upper_occupied = tmp ? true : false;
  }

  // Field name: enemy_jump_upper_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_jump_upper_occupied = tmp ? true : false;
  }

  // Field name: enemy_road_upper_occupied
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enemy_road_upper_occupied = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t get_serialized_size_radar_interfaces__msg__MacroStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MacroStatus__ros_msg_type * ros_message = static_cast<const _MacroStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name remaining_gold
  {
    size_t item_size = sizeof(ros_message->remaining_gold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_gold
  {
    size_t item_size = sizeof(ros_message->total_gold);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_supply_area_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_supply_area_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_central_highland_status
  {
    size_t item_size = sizeof(ros_message->enemy_central_highland_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_trapezoid_highland_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_trapezoid_highland_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_fort_buff_status
  {
    size_t item_size = sizeof(ros_message->enemy_fort_buff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_outpost_buff_status
  {
    size_t item_size = sizeof(ros_message->enemy_outpost_buff_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_base_buff_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_base_buff_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_tunnel_pre_jump_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_tunnel_pre_jump_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_tunnel_post_jump_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_tunnel_post_jump_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_side_tunnel_pre_jump_occupied
  {
    size_t item_size = sizeof(ros_message->ally_side_tunnel_pre_jump_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ally_side_tunnel_post_jump_occupied
  {
    size_t item_size = sizeof(ros_message->ally_side_tunnel_post_jump_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_highland_upper_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_highland_upper_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_jump_upper_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_jump_upper_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enemy_road_upper_occupied
  {
    size_t item_size = sizeof(ros_message->enemy_road_upper_occupied);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MacroStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_radar_interfaces__msg__MacroStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_radar_interfaces
size_t max_serialized_size_radar_interfaces__msg__MacroStatus(
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

  // member: remaining_gold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: total_gold
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: enemy_supply_area_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_central_highland_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_trapezoid_highland_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_fort_buff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_outpost_buff_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_base_buff_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_tunnel_pre_jump_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_tunnel_post_jump_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ally_side_tunnel_pre_jump_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ally_side_tunnel_post_jump_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_highland_upper_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_jump_upper_occupied
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enemy_road_upper_occupied
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
    using DataType = radar_interfaces__msg__MacroStatus;
    is_plain =
      (
      offsetof(DataType, enemy_road_upper_occupied) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MacroStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_radar_interfaces__msg__MacroStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MacroStatus = {
  "radar_interfaces::msg",
  "MacroStatus",
  _MacroStatus__cdr_serialize,
  _MacroStatus__cdr_deserialize,
  _MacroStatus__get_serialized_size,
  _MacroStatus__max_serialized_size
};

static rosidl_message_type_support_t _MacroStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MacroStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, radar_interfaces, msg, MacroStatus)() {
  return &_MacroStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
