// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rbl_message/msg/detail/rbl__rosidl_typesupport_introspection_c.h"
#include "rbl_message/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rbl_message/msg/detail/rbl__functions.h"
#include "rbl_message/msg/detail/rbl__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rbl_message__msg__Rbl__init(message_memory);
}

void rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_fini_function(void * message_memory)
{
  rbl_message__msg__Rbl__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_message_member_array[3] = {
  {
    "bool_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rbl_message__msg__Rbl, bool_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "integer_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rbl_message__msg__Rbl, integer_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "float_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rbl_message__msg__Rbl, float_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_message_members = {
  "rbl_message__msg",  // message namespace
  "Rbl",  // message name
  3,  // number of fields
  sizeof(rbl_message__msg__Rbl),
  rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_message_member_array,  // message members
  rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_init_function,  // function to initialize message memory (memory has to be allocated)
  rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_message_type_support_handle = {
  0,
  &rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_message_members,
  get_message_typesupport_handle_function,
  &rbl_message__msg__Rbl__get_type_hash,
  &rbl_message__msg__Rbl__get_type_description,
  &rbl_message__msg__Rbl__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rbl_message
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rbl_message, msg, Rbl)() {
  if (!rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_message_type_support_handle.typesupport_identifier) {
    rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rbl_message__msg__Rbl__rosidl_typesupport_introspection_c__Rbl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
