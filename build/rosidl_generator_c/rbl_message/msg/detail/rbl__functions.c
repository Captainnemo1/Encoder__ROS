// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rbl_message:msg/Rbl.idl
// generated code does not contain a copyright notice
#include "rbl_message/msg/detail/rbl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rbl_message__msg__Rbl__init(rbl_message__msg__Rbl * msg)
{
  if (!msg) {
    return false;
  }
  // bool_value
  // integer_value
  // float_value
  return true;
}

void
rbl_message__msg__Rbl__fini(rbl_message__msg__Rbl * msg)
{
  if (!msg) {
    return;
  }
  // bool_value
  // integer_value
  // float_value
}

bool
rbl_message__msg__Rbl__are_equal(const rbl_message__msg__Rbl * lhs, const rbl_message__msg__Rbl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bool_value
  if (lhs->bool_value != rhs->bool_value) {
    return false;
  }
  // integer_value
  if (lhs->integer_value != rhs->integer_value) {
    return false;
  }
  // float_value
  if (lhs->float_value != rhs->float_value) {
    return false;
  }
  return true;
}

bool
rbl_message__msg__Rbl__copy(
  const rbl_message__msg__Rbl * input,
  rbl_message__msg__Rbl * output)
{
  if (!input || !output) {
    return false;
  }
  // bool_value
  output->bool_value = input->bool_value;
  // integer_value
  output->integer_value = input->integer_value;
  // float_value
  output->float_value = input->float_value;
  return true;
}

rbl_message__msg__Rbl *
rbl_message__msg__Rbl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rbl_message__msg__Rbl * msg = (rbl_message__msg__Rbl *)allocator.allocate(sizeof(rbl_message__msg__Rbl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rbl_message__msg__Rbl));
  bool success = rbl_message__msg__Rbl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rbl_message__msg__Rbl__destroy(rbl_message__msg__Rbl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rbl_message__msg__Rbl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rbl_message__msg__Rbl__Sequence__init(rbl_message__msg__Rbl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rbl_message__msg__Rbl * data = NULL;

  if (size) {
    data = (rbl_message__msg__Rbl *)allocator.zero_allocate(size, sizeof(rbl_message__msg__Rbl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rbl_message__msg__Rbl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rbl_message__msg__Rbl__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rbl_message__msg__Rbl__Sequence__fini(rbl_message__msg__Rbl__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rbl_message__msg__Rbl__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rbl_message__msg__Rbl__Sequence *
rbl_message__msg__Rbl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rbl_message__msg__Rbl__Sequence * array = (rbl_message__msg__Rbl__Sequence *)allocator.allocate(sizeof(rbl_message__msg__Rbl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rbl_message__msg__Rbl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rbl_message__msg__Rbl__Sequence__destroy(rbl_message__msg__Rbl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rbl_message__msg__Rbl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rbl_message__msg__Rbl__Sequence__are_equal(const rbl_message__msg__Rbl__Sequence * lhs, const rbl_message__msg__Rbl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rbl_message__msg__Rbl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rbl_message__msg__Rbl__Sequence__copy(
  const rbl_message__msg__Rbl__Sequence * input,
  rbl_message__msg__Rbl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rbl_message__msg__Rbl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rbl_message__msg__Rbl * data =
      (rbl_message__msg__Rbl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rbl_message__msg__Rbl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rbl_message__msg__Rbl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rbl_message__msg__Rbl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
