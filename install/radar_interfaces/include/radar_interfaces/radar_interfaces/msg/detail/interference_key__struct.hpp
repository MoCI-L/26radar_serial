// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from radar_interfaces:msg/InterferenceKey.idl
// generated code does not contain a copyright notice

#ifndef RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__STRUCT_HPP_
#define RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__radar_interfaces__msg__InterferenceKey __attribute__((deprecated))
#else
# define DEPRECATED__radar_interfaces__msg__InterferenceKey __declspec(deprecated)
#endif

namespace radar_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InterferenceKey_
{
  using Type = InterferenceKey_<ContainerAllocator>;

  explicit InterferenceKey_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
    }
  }

  explicit InterferenceKey_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->key = "";
    }
  }

  // field types and members
  using _key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _key_type key;

  // setters for named parameter idiom
  Type & set__key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->key = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    radar_interfaces::msg::InterferenceKey_<ContainerAllocator> *;
  using ConstRawPtr =
    const radar_interfaces::msg::InterferenceKey_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<radar_interfaces::msg::InterferenceKey_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<radar_interfaces::msg::InterferenceKey_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::InterferenceKey_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::InterferenceKey_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      radar_interfaces::msg::InterferenceKey_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<radar_interfaces::msg::InterferenceKey_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<radar_interfaces::msg::InterferenceKey_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<radar_interfaces::msg::InterferenceKey_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__radar_interfaces__msg__InterferenceKey
    std::shared_ptr<radar_interfaces::msg::InterferenceKey_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__radar_interfaces__msg__InterferenceKey
    std::shared_ptr<radar_interfaces::msg::InterferenceKey_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterferenceKey_ & other) const
  {
    if (this->key != other.key) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterferenceKey_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterferenceKey_

// alias to use template instance with default allocator
using InterferenceKey =
  radar_interfaces::msg::InterferenceKey_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace radar_interfaces

#endif  // RADAR_INTERFACES__MSG__DETAIL__INTERFERENCE_KEY__STRUCT_HPP_
