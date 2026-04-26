// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/MacroStatus.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__MacroStatus __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__MacroStatus __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MacroStatus_
{
  using Type = MacroStatus_<ContainerAllocator>;

  explicit MacroStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_gold = 0;
      this->total_gold = 0;
      this->enemy_supply_area_occupied = false;
      this->enemy_central_highland_status = 0;
      this->enemy_trapezoid_highland_occupied = false;
      this->enemy_fort_buff_status = 0;
      this->enemy_outpost_buff_status = 0;
      this->enemy_base_buff_occupied = false;
      this->enemy_tunnel_pre_jump_occupied = false;
      this->enemy_tunnel_post_jump_occupied = false;
      this->ally_side_tunnel_pre_jump_occupied = false;
      this->ally_side_tunnel_post_jump_occupied = false;
      this->enemy_highland_upper_occupied = false;
      this->enemy_jump_upper_occupied = false;
      this->enemy_road_upper_occupied = false;
    }
  }

  explicit MacroStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_gold = 0;
      this->total_gold = 0;
      this->enemy_supply_area_occupied = false;
      this->enemy_central_highland_status = 0;
      this->enemy_trapezoid_highland_occupied = false;
      this->enemy_fort_buff_status = 0;
      this->enemy_outpost_buff_status = 0;
      this->enemy_base_buff_occupied = false;
      this->enemy_tunnel_pre_jump_occupied = false;
      this->enemy_tunnel_post_jump_occupied = false;
      this->ally_side_tunnel_pre_jump_occupied = false;
      this->ally_side_tunnel_post_jump_occupied = false;
      this->enemy_highland_upper_occupied = false;
      this->enemy_jump_upper_occupied = false;
      this->enemy_road_upper_occupied = false;
    }
  }

  // field types and members
  using _remaining_gold_type =
    uint16_t;
  _remaining_gold_type remaining_gold;
  using _total_gold_type =
    uint16_t;
  _total_gold_type total_gold;
  using _enemy_supply_area_occupied_type =
    bool;
  _enemy_supply_area_occupied_type enemy_supply_area_occupied;
  using _enemy_central_highland_status_type =
    uint8_t;
  _enemy_central_highland_status_type enemy_central_highland_status;
  using _enemy_trapezoid_highland_occupied_type =
    bool;
  _enemy_trapezoid_highland_occupied_type enemy_trapezoid_highland_occupied;
  using _enemy_fort_buff_status_type =
    uint8_t;
  _enemy_fort_buff_status_type enemy_fort_buff_status;
  using _enemy_outpost_buff_status_type =
    uint8_t;
  _enemy_outpost_buff_status_type enemy_outpost_buff_status;
  using _enemy_base_buff_occupied_type =
    bool;
  _enemy_base_buff_occupied_type enemy_base_buff_occupied;
  using _enemy_tunnel_pre_jump_occupied_type =
    bool;
  _enemy_tunnel_pre_jump_occupied_type enemy_tunnel_pre_jump_occupied;
  using _enemy_tunnel_post_jump_occupied_type =
    bool;
  _enemy_tunnel_post_jump_occupied_type enemy_tunnel_post_jump_occupied;
  using _ally_side_tunnel_pre_jump_occupied_type =
    bool;
  _ally_side_tunnel_pre_jump_occupied_type ally_side_tunnel_pre_jump_occupied;
  using _ally_side_tunnel_post_jump_occupied_type =
    bool;
  _ally_side_tunnel_post_jump_occupied_type ally_side_tunnel_post_jump_occupied;
  using _enemy_highland_upper_occupied_type =
    bool;
  _enemy_highland_upper_occupied_type enemy_highland_upper_occupied;
  using _enemy_jump_upper_occupied_type =
    bool;
  _enemy_jump_upper_occupied_type enemy_jump_upper_occupied;
  using _enemy_road_upper_occupied_type =
    bool;
  _enemy_road_upper_occupied_type enemy_road_upper_occupied;

  // setters for named parameter idiom
  Type & set__remaining_gold(
    const uint16_t & _arg)
  {
    this->remaining_gold = _arg;
    return *this;
  }
  Type & set__total_gold(
    const uint16_t & _arg)
  {
    this->total_gold = _arg;
    return *this;
  }
  Type & set__enemy_supply_area_occupied(
    const bool & _arg)
  {
    this->enemy_supply_area_occupied = _arg;
    return *this;
  }
  Type & set__enemy_central_highland_status(
    const uint8_t & _arg)
  {
    this->enemy_central_highland_status = _arg;
    return *this;
  }
  Type & set__enemy_trapezoid_highland_occupied(
    const bool & _arg)
  {
    this->enemy_trapezoid_highland_occupied = _arg;
    return *this;
  }
  Type & set__enemy_fort_buff_status(
    const uint8_t & _arg)
  {
    this->enemy_fort_buff_status = _arg;
    return *this;
  }
  Type & set__enemy_outpost_buff_status(
    const uint8_t & _arg)
  {
    this->enemy_outpost_buff_status = _arg;
    return *this;
  }
  Type & set__enemy_base_buff_occupied(
    const bool & _arg)
  {
    this->enemy_base_buff_occupied = _arg;
    return *this;
  }
  Type & set__enemy_tunnel_pre_jump_occupied(
    const bool & _arg)
  {
    this->enemy_tunnel_pre_jump_occupied = _arg;
    return *this;
  }
  Type & set__enemy_tunnel_post_jump_occupied(
    const bool & _arg)
  {
    this->enemy_tunnel_post_jump_occupied = _arg;
    return *this;
  }
  Type & set__ally_side_tunnel_pre_jump_occupied(
    const bool & _arg)
  {
    this->ally_side_tunnel_pre_jump_occupied = _arg;
    return *this;
  }
  Type & set__ally_side_tunnel_post_jump_occupied(
    const bool & _arg)
  {
    this->ally_side_tunnel_post_jump_occupied = _arg;
    return *this;
  }
  Type & set__enemy_highland_upper_occupied(
    const bool & _arg)
  {
    this->enemy_highland_upper_occupied = _arg;
    return *this;
  }
  Type & set__enemy_jump_upper_occupied(
    const bool & _arg)
  {
    this->enemy_jump_upper_occupied = _arg;
    return *this;
  }
  Type & set__enemy_road_upper_occupied(
    const bool & _arg)
  {
    this->enemy_road_upper_occupied = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::MacroStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::MacroStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::MacroStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::MacroStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::MacroStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::MacroStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::MacroStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::MacroStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::MacroStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::MacroStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__MacroStatus
    std::shared_ptr<radar_interfaces::msg::MacroStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__MacroStatus
    std::shared_ptr<radar_interfaces::msg::MacroStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MacroStatus_ & other) const
  {
    if (this->remaining_gold != other.remaining_gold) {
      return false;
    }
    if (this->total_gold != other.total_gold) {
      return false;
    }
    if (this->enemy_supply_area_occupied != other.enemy_supply_area_occupied) {
      return false;
    }
    if (this->enemy_central_highland_status != other.enemy_central_highland_status) {
      return false;
    }
    if (this->enemy_trapezoid_highland_occupied != other.enemy_trapezoid_highland_occupied) {
      return false;
    }
    if (this->enemy_fort_buff_status != other.enemy_fort_buff_status) {
      return false;
    }
    if (this->enemy_outpost_buff_status != other.enemy_outpost_buff_status) {
      return false;
    }
    if (this->enemy_base_buff_occupied != other.enemy_base_buff_occupied) {
      return false;
    }
    if (this->enemy_tunnel_pre_jump_occupied != other.enemy_tunnel_pre_jump_occupied) {
      return false;
    }
    if (this->enemy_tunnel_post_jump_occupied != other.enemy_tunnel_post_jump_occupied) {
      return false;
    }
    if (this->ally_side_tunnel_pre_jump_occupied != other.ally_side_tunnel_pre_jump_occupied) {
      return false;
    }
    if (this->ally_side_tunnel_post_jump_occupied != other.ally_side_tunnel_post_jump_occupied) {
      return false;
    }
    if (this->enemy_highland_upper_occupied != other.enemy_highland_upper_occupied) {
      return false;
    }
    if (this->enemy_jump_upper_occupied != other.enemy_jump_upper_occupied) {
      return false;
    }
    if (this->enemy_road_upper_occupied != other.enemy_road_upper_occupied) {
      return false;
    }
    return true;
  }
  bool operator!=(const MacroStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MacroStatus_

// alias to use template instance with default allocator
using MacroStatus =
  radar_interfaces::msg::MacroStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__MACRO_STATUS__STRUCT_HPP_
