// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice

#ifndef RBL_MESSAGE__MSG__DETAIL__RBL__FUNCTIONS_H_
#define RBL_MESSAGE__MSG__DETAIL__RBL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "rbl_message/msg/rosidl_generator_c__visibility_control.h"

#include "rbl_message/msg/detail/rbl__struct.h"

/// Initialize msg/Rbl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rbl_message__msg__Rbl
 * )) before or use
 * rbl_message__msg__Rbl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
bool
rbl_message__msg__Rbl__init(rbl_message__msg__Rbl * msg);

/// Finalize msg/Rbl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
void
rbl_message__msg__Rbl__fini(rbl_message__msg__Rbl * msg);

/// Create msg/Rbl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rbl_message__msg__Rbl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
rbl_message__msg__Rbl *
rbl_message__msg__Rbl__create();

/// Destroy msg/Rbl message.
/**
 * It calls
 * rbl_message__msg__Rbl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
void
rbl_message__msg__Rbl__destroy(rbl_message__msg__Rbl * msg);

/// Check for msg/Rbl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
bool
rbl_message__msg__Rbl__are_equal(const rbl_message__msg__Rbl * lhs, const rbl_message__msg__Rbl * rhs);

/// Copy a msg/Rbl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
bool
rbl_message__msg__Rbl__copy(
  const rbl_message__msg__Rbl * input,
  rbl_message__msg__Rbl * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
const rosidl_type_hash_t *
rbl_message__msg__Rbl__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
const rosidl_runtime_c__type_description__TypeDescription *
rbl_message__msg__Rbl__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
const rosidl_runtime_c__type_description__TypeSource *
rbl_message__msg__Rbl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
const rosidl_runtime_c__type_description__TypeSource__Sequence *
rbl_message__msg__Rbl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Rbl messages.
/**
 * It allocates the memory for the number of elements and calls
 * rbl_message__msg__Rbl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
bool
rbl_message__msg__Rbl__Sequence__init(rbl_message__msg__Rbl__Sequence * array, size_t size);

/// Finalize array of msg/Rbl messages.
/**
 * It calls
 * rbl_message__msg__Rbl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
void
rbl_message__msg__Rbl__Sequence__fini(rbl_message__msg__Rbl__Sequence * array);

/// Create array of msg/Rbl messages.
/**
 * It allocates the memory for the array and calls
 * rbl_message__msg__Rbl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
rbl_message__msg__Rbl__Sequence *
rbl_message__msg__Rbl__Sequence__create(size_t size);

/// Destroy array of msg/Rbl messages.
/**
 * It calls
 * rbl_message__msg__Rbl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
void
rbl_message__msg__Rbl__Sequence__destroy(rbl_message__msg__Rbl__Sequence * array);

/// Check for msg/Rbl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
bool
rbl_message__msg__Rbl__Sequence__are_equal(const rbl_message__msg__Rbl__Sequence * lhs, const rbl_message__msg__Rbl__Sequence * rhs);

/// Copy an array of msg/Rbl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rbl_message
bool
rbl_message__msg__Rbl__Sequence__copy(
  const rbl_message__msg__Rbl__Sequence * input,
  rbl_message__msg__Rbl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RBL_MESSAGE__MSG__DETAIL__RBL__FUNCTIONS_H_
