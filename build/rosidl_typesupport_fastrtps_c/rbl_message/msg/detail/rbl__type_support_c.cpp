// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice
#include "rbl_message/msg/detail/rbl__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rbl_message/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rbl_message/msg/detail/rbl__struct.h"
#include "rbl_message/msg/detail/rbl__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Rbl__ros_msg_type = rbl_message__msg__Rbl;

static bool _Rbl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Rbl__ros_msg_type * ros_message = static_cast<const _Rbl__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_value
  {
    cdr << (ros_message->bool_value ? true : false);
  }

  // Field name: integer_value
  {
    cdr << ros_message->integer_value;
  }

  // Field name: float_value
  {
    cdr << ros_message->float_value;
  }

  return true;
}

static bool _Rbl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Rbl__ros_msg_type * ros_message = static_cast<_Rbl__ros_msg_type *>(untyped_ros_message);
  // Field name: bool_value
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->bool_value = tmp ? true : false;
  }

  // Field name: integer_value
  {
    cdr >> ros_message->integer_value;
  }

  // Field name: float_value
  {
    cdr >> ros_message->float_value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rbl_message
size_t get_serialized_size_rbl_message__msg__Rbl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Rbl__ros_msg_type * ros_message = static_cast<const _Rbl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bool_value
  {
    size_t item_size = sizeof(ros_message->bool_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name integer_value
  {
    size_t item_size = sizeof(ros_message->integer_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name float_value
  {
    size_t item_size = sizeof(ros_message->float_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Rbl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rbl_message__msg__Rbl(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rbl_message
size_t max_serialized_size_rbl_message__msg__Rbl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: bool_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: integer_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: float_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rbl_message__msg__Rbl;
    is_plain =
      (
      offsetof(DataType, float_value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Rbl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rbl_message__msg__Rbl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Rbl = {
  "rbl_message::msg",
  "Rbl",
  _Rbl__cdr_serialize,
  _Rbl__cdr_deserialize,
  _Rbl__get_serialized_size,
  _Rbl__max_serialized_size
};

static rosidl_message_type_support_t _Rbl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Rbl,
  get_message_typesupport_handle_function,
  &rbl_message__msg__Rbl__get_type_hash,
  &rbl_message__msg__Rbl__get_type_description,
  &rbl_message__msg__Rbl__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rbl_message, msg, Rbl)() {
  return &_Rbl__type_support;
}

#if defined(__cplusplus)
}
#endif
