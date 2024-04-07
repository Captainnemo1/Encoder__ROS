// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice

#ifndef RBL_MESSAGE__MSG__DETAIL__RBL__STRUCT_H_
#define RBL_MESSAGE__MSG__DETAIL__RBL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Rbl in the package rbl_message.
typedef struct rbl_message__msg__Rbl
{
  bool bool_value;
  int8_t integer_value;
  float float_value;
} rbl_message__msg__Rbl;

// Struct for a sequence of rbl_message__msg__Rbl.
typedef struct rbl_message__msg__Rbl__Sequence
{
  rbl_message__msg__Rbl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rbl_message__msg__Rbl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RBL_MESSAGE__MSG__DETAIL__RBL__STRUCT_H_
