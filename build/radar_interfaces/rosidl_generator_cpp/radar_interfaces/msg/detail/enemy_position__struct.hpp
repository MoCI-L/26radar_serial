// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/EnemyPosition.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__EnemyPosition __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__EnemyPosition __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnemyPosition_
{
  using Type = EnemyPosition_<ContainerAllocator>;

  explicit EnemyPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_x = 0;
      this->hero_y = 0;
      this->engineer_x = 0;
      this->engineer_y = 0;
      this->infantry_3_x = 0;
      this->infantry_3_y = 0;
      this->infantry_4_x = 0;
      this->infantry_4_y = 0;
      this->aerial_x = 0;
      this->aerial_y = 0;
      this->sentry_x = 0;
      this->sentry_y = 0;
    }
  }

  explicit EnemyPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hero_x = 0;
      this->hero_y = 0;
      this->engineer_x = 0;
      this->engineer_y = 0;
      this->infantry_3_x = 0;
      this->infantry_3_y = 0;
      this->infantry_4_x = 0;
      this->infantry_4_y = 0;
      this->aerial_x = 0;
      this->aerial_y = 0;
      this->sentry_x = 0;
      this->sentry_y = 0;
    }
  }

  // field types and members
  using _hero_x_type =
    uint16_t;
  _hero_x_type hero_x;
  using _hero_y_type =
    uint16_t;
  _hero_y_type hero_y;
  using _engineer_x_type =
    uint16_t;
  _engineer_x_type engineer_x;
  using _engineer_y_type =
    uint16_t;
  _engineer_y_type engineer_y;
  using _infantry_3_x_type =
    uint16_t;
  _infantry_3_x_type infantry_3_x;
  using _infantry_3_y_type =
    uint16_t;
  _infantry_3_y_type infantry_3_y;
  using _infantry_4_x_type =
    uint16_t;
  _infantry_4_x_type infantry_4_x;
  using _infantry_4_y_type =
    uint16_t;
  _infantry_4_y_type infantry_4_y;
  using _aerial_x_type =
    uint16_t;
  _aerial_x_type aerial_x;
  using _aerial_y_type =
    uint16_t;
  _aerial_y_type aerial_y;
  using _sentry_x_type =
    uint16_t;
  _sentry_x_type sentry_x;
  using _sentry_y_type =
    uint16_t;
  _sentry_y_type sentry_y;

  // setters for named parameter idiom
  Type & set__hero_x(
    const uint16_t & _arg)
  {
    this->hero_x = _arg;
    return *this;
  }
  Type & set__hero_y(
    const uint16_t & _arg)
  {
    this->hero_y = _arg;
    return *this;
  }
  Type & set__engineer_x(
    const uint16_t & _arg)
  {
    this->engineer_x = _arg;
    return *this;
  }
  Type & set__engineer_y(
    const uint16_t & _arg)
  {
    this->engineer_y = _arg;
    return *this;
  }
  Type & set__infantry_3_x(
    const uint16_t & _arg)
  {
    this->infantry_3_x = _arg;
    return *this;
  }
  Type & set__infantry_3_y(
    const uint16_t & _arg)
  {
    this->infantry_3_y = _arg;
    return *this;
  }
  Type & set__infantry_4_x(
    const uint16_t & _arg)
  {
    this->infantry_4_x = _arg;
    return *this;
  }
  Type & set__infantry_4_y(
    const uint16_t & _arg)
  {
    this->infantry_4_y = _arg;
    return *this;
  }
  Type & set__aerial_x(
    const uint16_t & _arg)
  {
    this->aerial_x = _arg;
    return *this;
  }
  Type & set__aerial_y(
    const uint16_t & _arg)
  {
    this->aerial_y = _arg;
    return *this;
  }
  Type & set__sentry_x(
    const uint16_t & _arg)
  {
    this->sentry_x = _arg;
    return *this;
  }
  Type & set__sentry_y(
    const uint16_t & _arg)
  {
    this->sentry_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::EnemyPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::EnemyPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::EnemyPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::EnemyPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::EnemyPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::EnemyPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::EnemyPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::EnemyPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::EnemyPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::EnemyPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__EnemyPosition
    std::shared_ptr<radar_interfaces::msg::EnemyPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__EnemyPosition
    std::shared_ptr<radar_interfaces::msg::EnemyPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnemyPosition_ & other) const
  {
    if (this->hero_x != other.hero_x) {
      return false;
    }
    if (this->hero_y != other.hero_y) {
      return false;
    }
    if (this->engineer_x != other.engineer_x) {
      return false;
    }
    if (this->engineer_y != other.engineer_y) {
      return false;
    }
    if (this->infantry_3_x != other.infantry_3_x) {
      return false;
    }
    if (this->infantry_3_y != other.infantry_3_y) {
      return false;
    }
    if (this->infantry_4_x != other.infantry_4_x) {
      return false;
    }
    if (this->infantry_4_y != other.infantry_4_y) {
      return false;
    }
    if (this->aerial_x != other.aerial_x) {
      return false;
    }
    if (this->aerial_y != other.aerial_y) {
      return false;
    }
    if (this->sentry_x != other.sentry_x) {
      return false;
    }
    if (this->sentry_y != other.sentry_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnemyPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnemyPosition_

// alias to use template instance with default allocator
using EnemyPosition =
  radar_interfaces::msg::EnemyPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__ENEMY_POSITION__STRUCT_HPP_
