// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_interfaces:msg/MapRobotData.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/map_robot_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_interfaces__msg__MapRobotData__init(radar_interfaces__msg__MapRobotData * msg)
{
  if (!msg) {
    return false;
  }
  // opponent_hero_x
  // opponent_hero_y
  // opponent_engineer_x
  // opponent_engineer_y
  // opponent_infantry_3_x
  // opponent_infantry_3_y
  // opponent_infantry_4_x
  // opponent_infantry_4_y
  // opponent_aerial_x
  // opponent_aerial_y
  // opponent_sentry_x
  // opponent_sentry_y
  // ally_hero_x
  // ally_hero_y
  // ally_engineer_x
  // ally_engineer_y
  // ally_infantry_3_x
  // ally_infantry_3_y
  // ally_infantry_4_x
  // ally_infantry_4_y
  // ally_aerial_x
  // ally_aerial_y
  // ally_sentry_x
  // ally_sentry_y
  return true;
}

void
radar_interfaces__msg__MapRobotData__fini(radar_interfaces__msg__MapRobotData * msg)
{
  if (!msg) {
    return;
  }
  // opponent_hero_x
  // opponent_hero_y
  // opponent_engineer_x
  // opponent_engineer_y
  // opponent_infantry_3_x
  // opponent_infantry_3_y
  // opponent_infantry_4_x
  // opponent_infantry_4_y
  // opponent_aerial_x
  // opponent_aerial_y
  // opponent_sentry_x
  // opponent_sentry_y
  // ally_hero_x
  // ally_hero_y
  // ally_engineer_x
  // ally_engineer_y
  // ally_infantry_3_x
  // ally_infantry_3_y
  // ally_infantry_4_x
  // ally_infantry_4_y
  // ally_aerial_x
  // ally_aerial_y
  // ally_sentry_x
  // ally_sentry_y
}

bool
radar_interfaces__msg__MapRobotData__are_equal(const radar_interfaces__msg__MapRobotData * lhs, const radar_interfaces__msg__MapRobotData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // opponent_hero_x
  if (lhs->opponent_hero_x != rhs->opponent_hero_x) {
    return false;
  }
  // opponent_hero_y
  if (lhs->opponent_hero_y != rhs->opponent_hero_y) {
    return false;
  }
  // opponent_engineer_x
  if (lhs->opponent_engineer_x != rhs->opponent_engineer_x) {
    return false;
  }
  // opponent_engineer_y
  if (lhs->opponent_engineer_y != rhs->opponent_engineer_y) {
    return false;
  }
  // opponent_infantry_3_x
  if (lhs->opponent_infantry_3_x != rhs->opponent_infantry_3_x) {
    return false;
  }
  // opponent_infantry_3_y
  if (lhs->opponent_infantry_3_y != rhs->opponent_infantry_3_y) {
    return false;
  }
  // opponent_infantry_4_x
  if (lhs->opponent_infantry_4_x != rhs->opponent_infantry_4_x) {
    return false;
  }
  // opponent_infantry_4_y
  if (lhs->opponent_infantry_4_y != rhs->opponent_infantry_4_y) {
    return false;
  }
  // opponent_aerial_x
  if (lhs->opponent_aerial_x != rhs->opponent_aerial_x) {
    return false;
  }
  // opponent_aerial_y
  if (lhs->opponent_aerial_y != rhs->opponent_aerial_y) {
    return false;
  }
  // opponent_sentry_x
  if (lhs->opponent_sentry_x != rhs->opponent_sentry_x) {
    return false;
  }
  // opponent_sentry_y
  if (lhs->opponent_sentry_y != rhs->opponent_sentry_y) {
    return false;
  }
  // ally_hero_x
  if (lhs->ally_hero_x != rhs->ally_hero_x) {
    return false;
  }
  // ally_hero_y
  if (lhs->ally_hero_y != rhs->ally_hero_y) {
    return false;
  }
  // ally_engineer_x
  if (lhs->ally_engineer_x != rhs->ally_engineer_x) {
    return false;
  }
  // ally_engineer_y
  if (lhs->ally_engineer_y != rhs->ally_engineer_y) {
    return false;
  }
  // ally_infantry_3_x
  if (lhs->ally_infantry_3_x != rhs->ally_infantry_3_x) {
    return false;
  }
  // ally_infantry_3_y
  if (lhs->ally_infantry_3_y != rhs->ally_infantry_3_y) {
    return false;
  }
  // ally_infantry_4_x
  if (lhs->ally_infantry_4_x != rhs->ally_infantry_4_x) {
    return false;
  }
  // ally_infantry_4_y
  if (lhs->ally_infantry_4_y != rhs->ally_infantry_4_y) {
    return false;
  }
  // ally_aerial_x
  if (lhs->ally_aerial_x != rhs->ally_aerial_x) {
    return false;
  }
  // ally_aerial_y
  if (lhs->ally_aerial_y != rhs->ally_aerial_y) {
    return false;
  }
  // ally_sentry_x
  if (lhs->ally_sentry_x != rhs->ally_sentry_x) {
    return false;
  }
  // ally_sentry_y
  if (lhs->ally_sentry_y != rhs->ally_sentry_y) {
    return false;
  }
  return true;
}

bool
radar_interfaces__msg__MapRobotData__copy(
  const radar_interfaces__msg__MapRobotData * input,
  radar_interfaces__msg__MapRobotData * output)
{
  if (!input || !output) {
    return false;
  }
  // opponent_hero_x
  output->opponent_hero_x = input->opponent_hero_x;
  // opponent_hero_y
  output->opponent_hero_y = input->opponent_hero_y;
  // opponent_engineer_x
  output->opponent_engineer_x = input->opponent_engineer_x;
  // opponent_engineer_y
  output->opponent_engineer_y = input->opponent_engineer_y;
  // opponent_infantry_3_x
  output->opponent_infantry_3_x = input->opponent_infantry_3_x;
  // opponent_infantry_3_y
  output->opponent_infantry_3_y = input->opponent_infantry_3_y;
  // opponent_infantry_4_x
  output->opponent_infantry_4_x = input->opponent_infantry_4_x;
  // opponent_infantry_4_y
  output->opponent_infantry_4_y = input->opponent_infantry_4_y;
  // opponent_aerial_x
  output->opponent_aerial_x = input->opponent_aerial_x;
  // opponent_aerial_y
  output->opponent_aerial_y = input->opponent_aerial_y;
  // opponent_sentry_x
  output->opponent_sentry_x = input->opponent_sentry_x;
  // opponent_sentry_y
  output->opponent_sentry_y = input->opponent_sentry_y;
  // ally_hero_x
  output->ally_hero_x = input->ally_hero_x;
  // ally_hero_y
  output->ally_hero_y = input->ally_hero_y;
  // ally_engineer_x
  output->ally_engineer_x = input->ally_engineer_x;
  // ally_engineer_y
  output->ally_engineer_y = input->ally_engineer_y;
  // ally_infantry_3_x
  output->ally_infantry_3_x = input->ally_infantry_3_x;
  // ally_infantry_3_y
  output->ally_infantry_3_y = input->ally_infantry_3_y;
  // ally_infantry_4_x
  output->ally_infantry_4_x = input->ally_infantry_4_x;
  // ally_infantry_4_y
  output->ally_infantry_4_y = input->ally_infantry_4_y;
  // ally_aerial_x
  output->ally_aerial_x = input->ally_aerial_x;
  // ally_aerial_y
  output->ally_aerial_y = input->ally_aerial_y;
  // ally_sentry_x
  output->ally_sentry_x = input->ally_sentry_x;
  // ally_sentry_y
  output->ally_sentry_y = input->ally_sentry_y;
  return true;
}

radar_interfaces__msg__MapRobotData *
radar_interfaces__msg__MapRobotData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__MapRobotData * msg = (radar_interfaces__msg__MapRobotData *)allocator.allocate(sizeof(radar_interfaces__msg__MapRobotData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_interfaces__msg__MapRobotData));
  bool success = radar_interfaces__msg__MapRobotData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_interfaces__msg__MapRobotData__destroy(radar_interfaces__msg__MapRobotData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_interfaces__msg__MapRobotData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_interfaces__msg__MapRobotData__Sequence__init(radar_interfaces__msg__MapRobotData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__MapRobotData * data = NULL;

  if (size) {
    data = (radar_interfaces__msg__MapRobotData *)allocator.zero_allocate(size, sizeof(radar_interfaces__msg__MapRobotData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_interfaces__msg__MapRobotData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_interfaces__msg__MapRobotData__fini(&data[i - 1]);
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
radar_interfaces__msg__MapRobotData__Sequence__fini(radar_interfaces__msg__MapRobotData__Sequence * array)
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
      radar_interfaces__msg__MapRobotData__fini(&array->data[i]);
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

radar_interfaces__msg__MapRobotData__Sequence *
radar_interfaces__msg__MapRobotData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__MapRobotData__Sequence * array = (radar_interfaces__msg__MapRobotData__Sequence *)allocator.allocate(sizeof(radar_interfaces__msg__MapRobotData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_interfaces__msg__MapRobotData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_interfaces__msg__MapRobotData__Sequence__destroy(radar_interfaces__msg__MapRobotData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_interfaces__msg__MapRobotData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_interfaces__msg__MapRobotData__Sequence__are_equal(const radar_interfaces__msg__MapRobotData__Sequence * lhs, const radar_interfaces__msg__MapRobotData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_interfaces__msg__MapRobotData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_interfaces__msg__MapRobotData__Sequence__copy(
  const radar_interfaces__msg__MapRobotData__Sequence * input,
  radar_interfaces__msg__MapRobotData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_interfaces__msg__MapRobotData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_interfaces__msg__MapRobotData * data =
      (radar_interfaces__msg__MapRobotData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_interfaces__msg__MapRobotData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_interfaces__msg__MapRobotData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_interfaces__msg__MapRobotData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
