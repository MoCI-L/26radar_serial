// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/EnemyAmmo.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__EnemyAmmo __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__EnemyAmmo __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnemyAmmo_
{
  using Type = EnemyAmmo_<ContainerAllocator>;

  explicit EnemyAmmo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_ammo = 0;
      this->infantry_3_ammo = 0;
      this->infantry_4_ammo = 0;
      this->aerial_ammo = 0;
      this->sentry_ammo = 0;
    }
  }

  explicit EnemyAmmo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_ammo = 0;
      this->infantry_3_ammo = 0;
      this->infantry_4_ammo = 0;
      this->aerial_ammo = 0;
      this->sentry_ammo = 0;
    }
  }

  // field types and members
  using _hero_ammo_type =
    uint16_t;
  _hero_ammo_type hero_ammo;
  using _infantry_3_ammo_type =
    uint16_t;
  _infantry_3_ammo_type infantry_3_ammo;
  using _infantry_4_ammo_type =
    uint16_t;
  _infantry_4_ammo_type infantry_4_ammo;
  using _aerial_ammo_type =
    uint16_t;
  _aerial_ammo_type aerial_ammo;
  using _sentry_ammo_type =
    uint16_t;
  _sentry_ammo_type sentry_ammo;

  // setters for named parameter idiom
  Type & set__hero_ammo(
    const uint16_t & _arg)
  {
    this->hero_ammo = _arg;
    return *this;
  }
  Type & set__infantry_3_ammo(
    const uint16_t & _arg)
  {
    this->infantry_3_ammo = _arg;
    return *this;
  }
  Type & set__infantry_4_ammo(
    const uint16_t & _arg)
  {
    this->infantry_4_ammo = _arg;
    return *this;
  }
  Type & set__aerial_ammo(
    const uint16_t & _arg)
  {
    this->aerial_ammo = _arg;
    return *this;
  }
  Type & set__sentry_ammo(
    const uint16_t & _arg)
  {
    this->sentry_ammo = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::EnemyAmmo_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::EnemyAmmo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::EnemyAmmo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::EnemyAmmo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::EnemyAmmo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::EnemyAmmo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::EnemyAmmo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::EnemyAmmo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::EnemyAmmo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::EnemyAmmo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__EnemyAmmo
    std::shared_ptr<radar_interfaces::msg::EnemyAmmo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__EnemyAmmo
    std::shared_ptr<radar_interfaces::msg::EnemyAmmo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnemyAmmo_ & other) const
  {
    if (this->hero_ammo != other.hero_ammo) {
      return false;
    }
    if (this->infantry_3_ammo != other.infantry_3_ammo) {
      return false;
    }
    if (this->infantry_4_ammo != other.infantry_4_ammo) {
      return false;
    }
    if (this->aerial_ammo != other.aerial_ammo) {
      return false;
    }
    if (this->sentry_ammo != other.sentry_ammo) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnemyAmmo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnemyAmmo_

// alias to use template instance with default allocator
using EnemyAmmo =
  radar_interfaces::msg::EnemyAmmo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_AMMO__STRUCT_HPP_
