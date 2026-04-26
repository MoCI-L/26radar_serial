// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/RadarInfo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__RadarInfo __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__RadarInfo __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarInfo_
{
  using Type = RadarInfo_<ContainerAllocator>;

  explicit RadarInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->double_vulnerability_chances = 0;
      this->opponent_double_vulnerability_active = false;
      this->encryption_level = 0;
      this->key_change_enabled = false;
    }
  }

  explicit RadarInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->double_vulnerability_chances = 0;
      this->opponent_double_vulnerability_active = false;
      this->encryption_level = 0;
      this->key_change_enabled = false;
    }
  }

  // field types and members
  using _double_vulnerability_chances_type =
    uint8_t;
  _double_vulnerability_chances_type double_vulnerability_chances;
  using _opponent_double_vulnerability_active_type =
    bool;
  _opponent_double_vulnerability_active_type opponent_double_vulnerability_active;
  using _encryption_level_type =
    uint8_t;
  _encryption_level_type encryption_level;
  using _key_change_enabled_type =
    bool;
  _key_change_enabled_type key_change_enabled;

  // setters for named parameter idiom
  Type & set__double_vulnerability_chances(
    const uint8_t & _arg)
  {
    this->double_vulnerability_chances = _arg;
    return *this;
  }
  Type & set__opponent_double_vulnerability_active(
    const bool & _arg)
  {
    this->opponent_double_vulnerability_active = _arg;
    return *this;
  }
  Type & set__encryption_level(
    const uint8_t & _arg)
  {
    this->encryption_level = _arg;
    return *this;
  }
  Type & set__key_change_enabled(
    const bool & _arg)
  {
    this->key_change_enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::RadarInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::RadarInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::RadarInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::RadarInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::RadarInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::RadarInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::RadarInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::RadarInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::RadarInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::RadarInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__RadarInfo
    std::shared_ptr<radar_interfaces::msg::RadarInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__RadarInfo
    std::shared_ptr<radar_interfaces::msg::RadarInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarInfo_ & other) const
  {
    if (this->double_vulnerability_chances != other.double_vulnerability_chances) {
      return false;
    }
    if (this->opponent_double_vulnerability_active != other.opponent_double_vulnerability_active) {
      return false;
    }
    if (this->encryption_level != other.encryption_level) {
      return false;
    }
    if (this->key_change_enabled != other.key_change_enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarInfo_

// alias to use template instance with default allocator
using RadarInfo =
  radar_interfaces::msg::RadarInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_INFO__STRUCT_HPP_
