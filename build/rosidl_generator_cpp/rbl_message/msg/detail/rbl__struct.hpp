// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice

#ifndef RBL_MESSAGE__MSG__DETAIL__RBL__STRUCT_HPP_
#define RBL_MESSAGE__MSG__DETAIL__RBL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rbl_message__msg__Rbl __attribute__((deprecated))
#else
# define DEPRECATED__rbl_message__msg__Rbl __declspec(deprecated)
#endif

namespace rbl_message
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rbl_
{
  using Type = Rbl_<ContainerAllocator>;

  explicit Rbl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_value = false;
      this->integer_value = 0;
      this->float_value = 0.0f;
    }
  }

  explicit Rbl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bool_value = false;
      this->integer_value = 0;
      this->float_value = 0.0f;
    }
  }

  // field types and members
  using _bool_value_type =
    bool;
  _bool_value_type bool_value;
  using _integer_value_type =
    int8_t;
  _integer_value_type integer_value;
  using _float_value_type =
    float;
  _float_value_type float_value;

  // setters for named parameter idiom
  Type & set__bool_value(
    const bool & _arg)
  {
    this->bool_value = _arg;
    return *this;
  }
  Type & set__integer_value(
    const int8_t & _arg)
  {
    this->integer_value = _arg;
    return *this;
  }
  Type & set__float_value(
    const float & _arg)
  {
    this->float_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rbl_message::msg::Rbl_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbl_message::msg::Rbl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbl_message::msg::Rbl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbl_message::msg::Rbl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbl_message::msg::Rbl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbl_message::msg::Rbl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbl_message::msg::Rbl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbl_message::msg::Rbl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbl_message::msg::Rbl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbl_message::msg::Rbl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbl_message__msg__Rbl
    std::shared_ptr<rbl_message::msg::Rbl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbl_message__msg__Rbl
    std::shared_ptr<rbl_message::msg::Rbl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rbl_ & other) const
  {
    if (this->bool_value != other.bool_value) {
      return false;
    }
    if (this->integer_value != other.integer_value) {
      return false;
    }
    if (this->float_value != other.float_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rbl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rbl_

// alias to use template instance with default allocator
using Rbl =
  rbl_message::msg::Rbl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rbl_message

#endif  // RBL_MESSAGE__MSG__DETAIL__RBL__STRUCT_HPP_
