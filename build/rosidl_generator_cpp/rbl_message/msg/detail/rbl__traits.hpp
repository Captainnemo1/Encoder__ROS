// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice

#ifndef RBL_MESSAGE__MSG__DETAIL__RBL__TRAITS_HPP_
#define RBL_MESSAGE__MSG__DETAIL__RBL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rbl_message/msg/detail/rbl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rbl_message
{

namespace msg
{

inline void to_flow_style_yaml(
  const Rbl & msg,
  std::ostream & out)
{
  out << "{";
  // member: bool_value
  {
    out << "bool_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bool_value, out);
    out << ", ";
  }

  // member: integer_value
  {
    out << "integer_value: ";
    rosidl_generator_traits::value_to_yaml(msg.integer_value, out);
    out << ", ";
  }

  // member: float_value
  {
    out << "float_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float_value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rbl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bool_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bool_value: ";
    rosidl_generator_traits::value_to_yaml(msg.bool_value, out);
    out << "\n";
  }

  // member: integer_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integer_value: ";
    rosidl_generator_traits::value_to_yaml(msg.integer_value, out);
    out << "\n";
  }

  // member: float_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "float_value: ";
    rosidl_generator_traits::value_to_yaml(msg.float_value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rbl & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rbl_message

namespace rosidl_generator_traits
{

[[deprecated("use rbl_message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rbl_message::msg::Rbl & msg,
  std::ostream & out, size_t indentation = 0)
{
  rbl_message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rbl_message::msg::to_yaml() instead")]]
inline std::string to_yaml(const rbl_message::msg::Rbl & msg)
{
  return rbl_message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rbl_message::msg::Rbl>()
{
  return "rbl_message::msg::Rbl";
}

template<>
inline const char * name<rbl_message::msg::Rbl>()
{
  return "rbl_message/msg/Rbl";
}

template<>
struct has_fixed_size<rbl_message::msg::Rbl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rbl_message::msg::Rbl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rbl_message::msg::Rbl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RBL_MESSAGE__MSG__DETAIL__RBL__TRAITS_HPP_
