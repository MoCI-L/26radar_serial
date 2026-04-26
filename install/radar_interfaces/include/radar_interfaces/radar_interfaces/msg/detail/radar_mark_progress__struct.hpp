// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/RadarMarkProgress.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__RadarMarkProgress __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__RadarMarkProgress __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarMarkProgress_
{
  using Type = RadarMarkProgress_<ContainerAllocator>;

  explicit RadarMarkProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enemy_hero_marked = false;
      this->enemy_engineer_marked = false;
      this->enemy_infantry_3_marked = false;
      this->enemy_infantry_4_marked = false;
      this->enemy_aerial_marked = false;
      this->enemy_sentry_marked = false;
      this->ally_hero_marked = false;
      this->ally_engineer_marked = false;
      this->ally_infantry_3_marked = false;
      this->ally_infantry_4_marked = false;
      this->ally_aerial_marked = false;
      this->ally_sentry_marked = false;
    }
  }

  explicit RadarMarkProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enemy_hero_marked = false;
      this->enemy_engineer_marked = false;
      this->enemy_infantry_3_marked = false;
      this->enemy_infantry_4_marked = false;
      this->enemy_aerial_marked = false;
      this->enemy_sentry_marked = false;
      this->ally_hero_marked = false;
      this->ally_engineer_marked = false;
      this->ally_infantry_3_marked = false;
      this->ally_infantry_4_marked = false;
      this->ally_aerial_marked = false;
      this->ally_sentry_marked = false;
    }
  }

  // field types and members
  using _enemy_hero_marked_type =
    bool;
  _enemy_hero_marked_type enemy_hero_marked;
  using _enemy_engineer_marked_type =
    bool;
  _enemy_engineer_marked_type enemy_engineer_marked;
  using _enemy_infantry_3_marked_type =
    bool;
  _enemy_infantry_3_marked_type enemy_infantry_3_marked;
  using _enemy_infantry_4_marked_type =
    bool;
  _enemy_infantry_4_marked_type enemy_infantry_4_marked;
  using _enemy_aerial_marked_type =
    bool;
  _enemy_aerial_marked_type enemy_aerial_marked;
  using _enemy_sentry_marked_type =
    bool;
  _enemy_sentry_marked_type enemy_sentry_marked;
  using _ally_hero_marked_type =
    bool;
  _ally_hero_marked_type ally_hero_marked;
  using _ally_engineer_marked_type =
    bool;
  _ally_engineer_marked_type ally_engineer_marked;
  using _ally_infantry_3_marked_type =
    bool;
  _ally_infantry_3_marked_type ally_infantry_3_marked;
  using _ally_infantry_4_marked_type =
    bool;
  _ally_infantry_4_marked_type ally_infantry_4_marked;
  using _ally_aerial_marked_type =
    bool;
  _ally_aerial_marked_type ally_aerial_marked;
  using _ally_sentry_marked_type =
    bool;
  _ally_sentry_marked_type ally_sentry_marked;

  // setters for named parameter idiom
  Type & set__enemy_hero_marked(
    const bool & _arg)
  {
    this->enemy_hero_marked = _arg;
    return *this;
  }
  Type & set__enemy_engineer_marked(
    const bool & _arg)
  {
    this->enemy_engineer_marked = _arg;
    return *this;
  }
  Type & set__enemy_infantry_3_marked(
    const bool & _arg)
  {
    this->enemy_infantry_3_marked = _arg;
    return *this;
  }
  Type & set__enemy_infantry_4_marked(
    const bool & _arg)
  {
    this->enemy_infantry_4_marked = _arg;
    return *this;
  }
  Type & set__enemy_aerial_marked(
    const bool & _arg)
  {
    this->enemy_aerial_marked = _arg;
    return *this;
  }
  Type & set__enemy_sentry_marked(
    const bool & _arg)
  {
    this->enemy_sentry_marked = _arg;
    return *this;
  }
  Type & set__ally_hero_marked(
    const bool & _arg)
  {
    this->ally_hero_marked = _arg;
    return *this;
  }
  Type & set__ally_engineer_marked(
    const bool & _arg)
  {
    this->ally_engineer_marked = _arg;
    return *this;
  }
  Type & set__ally_infantry_3_marked(
    const bool & _arg)
  {
    this->ally_infantry_3_marked = _arg;
    return *this;
  }
  Type & set__ally_infantry_4_marked(
    const bool & _arg)
  {
    this->ally_infantry_4_marked = _arg;
    return *this;
  }
  Type & set__ally_aerial_marked(
    const bool & _arg)
  {
    this->ally_aerial_marked = _arg;
    return *this;
  }
  Type & set__ally_sentry_marked(
    const bool & _arg)
  {
    this->ally_sentry_marked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__RadarMarkProgress
    std::shared_ptr<radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__RadarMarkProgress
    std::shared_ptr<radar_interfaces::msg::RadarMarkProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarMarkProgress_ & other) const
  {
    if (this->enemy_hero_marked != other.enemy_hero_marked) {
      return false;
    }
    if (this->enemy_engineer_marked != other.enemy_engineer_marked) {
      return false;
    }
    if (this->enemy_infantry_3_marked != other.enemy_infantry_3_marked) {
      return false;
    }
    if (this->enemy_infantry_4_marked != other.enemy_infantry_4_marked) {
      return false;
    }
    if (this->enemy_aerial_marked != other.enemy_aerial_marked) {
      return false;
    }
    if (this->enemy_sentry_marked != other.enemy_sentry_marked) {
      return false;
    }
    if (this->ally_hero_marked != other.ally_hero_marked) {
      return false;
    }
    if (this->ally_engineer_marked != other.ally_engineer_marked) {
      return false;
    }
    if (this->ally_infantry_3_marked != other.ally_infantry_3_marked) {
      return false;
    }
    if (this->ally_infantry_4_marked != other.ally_infantry_4_marked) {
      return false;
    }
    if (this->ally_aerial_marked != other.ally_aerial_marked) {
      return false;
    }
    if (this->ally_sentry_marked != other.ally_sentry_marked) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarMarkProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarMarkProgress_

// alias to use template instance with default allocator
using RadarMarkProgress =
  radar_interfaces::msg::RadarMarkProgress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__RADAR_MARK_PROGRESS__STRUCT_HPP_
