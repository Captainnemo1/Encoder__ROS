// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice

#include "rbl_message/msg/detail/rbl__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_rbl_message
const rosidl_type_hash_t *
rbl_message__msg__Rbl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0xaa, 0xf9, 0x8e, 0x20, 0x46, 0x49, 0x15,
      0xe4, 0x7c, 0x52, 0x42, 0x8c, 0x70, 0x9e, 0x04,
      0x00, 0x6b, 0x59, 0xbd, 0xde, 0xc8, 0x0e, 0xef,
      0x9b, 0x88, 0x9c, 0x01, 0xb6, 0x04, 0x87, 0xc5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char rbl_message__msg__Rbl__TYPE_NAME[] = "rbl_message/msg/Rbl";

// Define type names, field names, and default values
static char rbl_message__msg__Rbl__FIELD_NAME__bool_value[] = "bool_value";
static char rbl_message__msg__Rbl__FIELD_NAME__integer_value[] = "integer_value";
static char rbl_message__msg__Rbl__FIELD_NAME__float_value[] = "float_value";

static rosidl_runtime_c__type_description__Field rbl_message__msg__Rbl__FIELDS[] = {
  {
    {rbl_message__msg__Rbl__FIELD_NAME__bool_value, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rbl_message__msg__Rbl__FIELD_NAME__integer_value, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {rbl_message__msg__Rbl__FIELD_NAME__float_value, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
rbl_message__msg__Rbl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {rbl_message__msg__Rbl__TYPE_NAME, 19, 19},
      {rbl_message__msg__Rbl__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool bool_value\n"
  "int8 integer_value\n"
  "float32 float_value";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
rbl_message__msg__Rbl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {rbl_message__msg__Rbl__TYPE_NAME, 19, 19},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 54, 54},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
rbl_message__msg__Rbl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *rbl_message__msg__Rbl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
