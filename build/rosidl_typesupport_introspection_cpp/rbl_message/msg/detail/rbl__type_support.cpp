// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rbl_message/msg/detail/rbl__functions.h"
#include "rbl_message/msg/detail/rbl__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rbl_message
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Rbl_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rbl_message::msg::Rbl(_init);
}

void Rbl_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rbl_message::msg::Rbl *>(message_memory);
  typed_message->~Rbl();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Rbl_message_member_array[3] = {
  {
    "bool_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rbl_message::msg::Rbl, bool_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "integer_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rbl_message::msg::Rbl, integer_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "float_value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rbl_message::msg::Rbl, float_value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Rbl_message_members = {
  "rbl_message::msg",  // message namespace
  "Rbl",  // message name
  3,  // number of fields
  sizeof(rbl_message::msg::Rbl),
  Rbl_message_member_array,  // message members
  Rbl_init_function,  // function to initialize message memory (memory has to be allocated)
  Rbl_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Rbl_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Rbl_message_members,
  get_message_typesupport_handle_function,
  &rbl_message__msg__Rbl__get_type_hash,
  &rbl_message__msg__Rbl__get_type_description,
  &rbl_message__msg__Rbl__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rbl_message


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rbl_message::msg::Rbl>()
{
  return &::rbl_message::msg::rosidl_typesupport_introspection_cpp::Rbl_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rbl_message, msg, Rbl)() {
  return &::rbl_message::msg::rosidl_typesupport_introspection_cpp::Rbl_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
