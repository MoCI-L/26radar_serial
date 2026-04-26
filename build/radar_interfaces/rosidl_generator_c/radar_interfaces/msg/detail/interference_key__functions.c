// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_interfaces:msg/InterferenceKey.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/interference_key__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key`
#include "rosidl_runtime_c/string_functions.h"

bool
radar_interfaces__msg__InterferenceKey__init(radar_interfaces__msg__InterferenceKey * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__init(&msg->key)) {
    radar_interfaces__msg__InterferenceKey__fini(msg);
    return false;
  }
  return true;
}

void
radar_interfaces__msg__InterferenceKey__fini(radar_interfaces__msg__InterferenceKey * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_runtime_c__String__fini(&msg->key);
}

bool
radar_interfaces__msg__InterferenceKey__are_equal(const radar_interfaces__msg__InterferenceKey * lhs, const radar_interfaces__msg__InterferenceKey * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  return true;
}

bool
radar_interfaces__msg__InterferenceKey__copy(
  const radar_interfaces__msg__InterferenceKey * input,
  radar_interfaces__msg__InterferenceKey * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  if (!rosidl_runtime_c__String__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  return true;
}

radar_interfaces__msg__InterferenceKey *
radar_interfaces__msg__InterferenceKey__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__InterferenceKey * msg = (radar_interfaces__msg__InterferenceKey *)allocator.allocate(sizeof(radar_interfaces__msg__InterferenceKey), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_interfaces__msg__InterferenceKey));
  bool success = radar_interfaces__msg__InterferenceKey__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_interfaces__msg__InterferenceKey__destroy(radar_interfaces__msg__InterferenceKey * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_interfaces__msg__InterferenceKey__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_interfaces__msg__InterferenceKey__Sequence__init(radar_interfaces__msg__InterferenceKey__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__InterferenceKey * data = NULL;

  if (size) {
    data = (radar_interfaces__msg__InterferenceKey *)allocator.zero_allocate(size, sizeof(radar_interfaces__msg__InterferenceKey), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_interfaces__msg__InterferenceKey__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_interfaces__msg__InterferenceKey__fini(&data[i - 1]);
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
radar_interfaces__msg__InterferenceKey__Sequence__fini(radar_interfaces__msg__InterferenceKey__Sequence * array)
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
      radar_interfaces__msg__InterferenceKey__fini(&array->data[i]);
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

radar_interfaces__msg__InterferenceKey__Sequence *
radar_interfaces__msg__InterferenceKey__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__InterferenceKey__Sequence * array = (radar_interfaces__msg__InterferenceKey__Sequence *)allocator.allocate(sizeof(radar_interfaces__msg__InterferenceKey__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_interfaces__msg__InterferenceKey__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_interfaces__msg__InterferenceKey__Sequence__destroy(radar_interfaces__msg__InterferenceKey__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_interfaces__msg__InterferenceKey__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_interfaces__msg__InterferenceKey__Sequence__are_equal(const radar_interfaces__msg__InterferenceKey__Sequence * lhs, const radar_interfaces__msg__InterferenceKey__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_interfaces__msg__InterferenceKey__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_interfaces__msg__InterferenceKey__Sequence__copy(
  const radar_interfaces__msg__InterferenceKey__Sequence * input,
  radar_interfaces__msg__InterferenceKey__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_interfaces__msg__InterferenceKey);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_interfaces__msg__InterferenceKey * data =
      (radar_interfaces__msg__InterferenceKey *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_interfaces__msg__InterferenceKey__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_interfaces__msg__InterferenceKey__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_interfaces__msg__InterferenceKey__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
