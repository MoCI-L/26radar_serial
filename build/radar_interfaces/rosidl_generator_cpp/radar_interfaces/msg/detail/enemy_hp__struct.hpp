// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/EnemyHP.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__EnemyHP __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__EnemyHP __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnemyHP_
{
  using Type = EnemyHP_<ContainerAllocator>;

  explicit EnemyHP_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_hp = 0;
      this->engineer_hp = 0;
      this->infantry_3_hp = 0;
      this->infantry_4_hp = 0;
      this->reserved = 0;
      this->sentry_hp = 0;
    }
  }

  explicit EnemyHP_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_hp = 0;
      this->engineer_hp = 0;
      this->infantry_3_hp = 0;
      this->infantry_4_hp = 0;
      this->reserved = 0;
      this->sentry_hp = 0;
    }
  }

  // field types and members
  using _hero_hp_type =
    uint16_t;
  _hero_hp_type hero_hp;
  using _engineer_hp_type =
    uint16_t;
  _engineer_hp_type engineer_hp;
  using _infantry_3_hp_type =
    uint16_t;
  _infantry_3_hp_type infantry_3_hp;
  using _infantry_4_hp_type =
    uint16_t;
  _infantry_4_hp_type infantry_4_hp;
  using _reserved_type =
    uint16_t;
  _reserved_type reserved;
  using _sentry_hp_type =
    uint16_t;
  _sentry_hp_type sentry_hp;

  // setters for named parameter idiom
  Type & set__hero_hp(
    const uint16_t & _arg)
  {
    this->hero_hp = _arg;
    return *this;
  }
  Type & set__engineer_hp(
    const uint16_t & _arg)
  {
    this->engineer_hp = _arg;
    return *this;
  }
  Type & set__infantry_3_hp(
    const uint16_t & _arg)
  {
    this->infantry_3_hp = _arg;
    return *this;
  }
  Type & set__infantry_4_hp(
    const uint16_t & _arg)
  {
    this->infantry_4_hp = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint16_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__sentry_hp(
    const uint16_t & _arg)
  {
    this->sentry_hp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::EnemyHP_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::EnemyHP_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::EnemyHP_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::EnemyHP_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::EnemyHP_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::EnemyHP_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::EnemyHP_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::EnemyHP_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::EnemyHP_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::EnemyHP_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__EnemyHP
    std::shared_ptr<radar_interfaces::msg::EnemyHP_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__EnemyHP
    std::shared_ptr<radar_interfaces::msg::EnemyHP_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnemyHP_ & other) const
  {
    if (this->hero_hp != other.hero_hp) {
      return false;
    }
    if (this->engineer_hp != other.engineer_hp) {
      return false;
    }
    if (this->infantry_3_hp != other.infantry_3_hp) {
      return false;
    }
    if (this->infantry_4_hp != other.infantry_4_hp) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->sentry_hp != other.sentry_hp) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnemyHP_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnemyHP_

// alias to use template instance with default allocator
using EnemyHP =
  radar_interfaces::msg::EnemyHP_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_HP__STRUCT_HPP_
