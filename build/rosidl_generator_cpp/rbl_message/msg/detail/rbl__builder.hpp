// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice

#ifndef RBL_MESSAGE__MSG__DETAIL__RBL__BUILDER_HPP_
#define RBL_MESSAGE__MSG__DETAIL__RBL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rbl_message/msg/detail/rbl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rbl_message
{

namespace msg
{

namespace builder
{

class Init_Rbl_float_value
{
public:
  explicit Init_Rbl_float_value(::rbl_message::msg::Rbl & msg)
  : msg_(msg)
  {}
  ::rbl_message::msg::Rbl float_value(::rbl_message::msg::Rbl::_float_value_type arg)
  {
    msg_.float_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rbl_message::msg::Rbl msg_;
};

class Init_Rbl_integer_value
{
public:
  explicit Init_Rbl_integer_value(::rbl_message::msg::Rbl & msg)
  : msg_(msg)
  {}
  Init_Rbl_float_value integer_value(::rbl_message::msg::Rbl::_integer_value_type arg)
  {
    msg_.integer_value = std::move(arg);
    return Init_Rbl_float_value(msg_);
  }

private:
  ::rbl_message::msg::Rbl msg_;
};

class Init_Rbl_bool_value
{
public:
  Init_Rbl_bool_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rbl_integer_value bool_value(::rbl_message::msg::Rbl::_bool_value_type arg)
  {
    msg_.bool_value = std::move(arg);
    return Init_Rbl_integer_value(msg_);
  }

private:
  ::rbl_message::msg::Rbl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rbl_message::msg::Rbl>()
{
  return rbl_message::msg::builder::Init_Rbl_bool_value();
}

}  // namespace rbl_message

#endif  // RBL_MESSAGE__MSG__DETAIL__RBL__BUILDER_HPP_
