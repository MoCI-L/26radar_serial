// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from radar_interfaces:msg/MacroStatus.idl
// generated code does not contain a copyright notice
#include "radar_interfaces/msg/detail/macro_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
radar_interfaces__msg__MacroStatus__init(radar_interfaces__msg__MacroStatus * msg)
{
  if (!msg) {
    return false;
  }
  // remaining_gold
  // total_gold
  // enemy_supply_area_occupied
  // enemy_central_highland_status
  // enemy_trapezoid_highland_occupied
  // enemy_fort_buff_status
  // enemy_outpost_buff_status
  // enemy_base_buff_occupied
  // enemy_tunnel_pre_jump_occupied
  // enemy_tunnel_post_jump_occupied
  // ally_side_tunnel_pre_jump_occupied
  // ally_side_tunnel_post_jump_occupied
  // enemy_highland_upper_occupied
  // enemy_jump_upper_occupied
  // enemy_road_upper_occupied
  return true;
}

void
radar_interfaces__msg__MacroStatus__fini(radar_interfaces__msg__MacroStatus * msg)
{
  if (!msg) {
    return;
  }
  // remaining_gold
  // total_gold
  // enemy_supply_area_occupied
  // enemy_central_highland_status
  // enemy_trapezoid_highland_occupied
  // enemy_fort_buff_status
  // enemy_outpost_buff_status
  // enemy_base_buff_occupied
  // enemy_tunnel_pre_jump_occupied
  // enemy_tunnel_post_jump_occupied
  // ally_side_tunnel_pre_jump_occupied
  // ally_side_tunnel_post_jump_occupied
  // enemy_highland_upper_occupied
  // enemy_jump_upper_occupied
  // enemy_road_upper_occupied
}

bool
radar_interfaces__msg__MacroStatus__are_equal(const radar_interfaces__msg__MacroStatus * lhs, const radar_interfaces__msg__MacroStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // remaining_gold
  if (lhs->remaining_gold != rhs->remaining_gold) {
    return false;
  }
  // total_gold
  if (lhs->total_gold != rhs->total_gold) {
    return false;
  }
  // enemy_supply_area_occupied
  if (lhs->enemy_supply_area_occupied != rhs->enemy_supply_area_occupied) {
    return false;
  }
  // enemy_central_highland_status
  if (lhs->enemy_central_highland_status != rhs->enemy_central_highland_status) {
    return false;
  }
  // enemy_trapezoid_highland_occupied
  if (lhs->enemy_trapezoid_highland_occupied != rhs->enemy_trapezoid_highland_occupied) {
    return false;
  }
  // enemy_fort_buff_status
  if (lhs->enemy_fort_buff_status != rhs->enemy_fort_buff_status) {
    return false;
  }
  // enemy_outpost_buff_status
  if (lhs->enemy_outpost_buff_status != rhs->enemy_outpost_buff_status) {
    return false;
  }
  // enemy_base_buff_occupied
  if (lhs->enemy_base_buff_occupied != rhs->enemy_base_buff_occupied) {
    return false;
  }
  // enemy_tunnel_pre_jump_occupied
  if (lhs->enemy_tunnel_pre_jump_occupied != rhs->enemy_tunnel_pre_jump_occupied) {
    return false;
  }
  // enemy_tunnel_post_jump_occupied
  if (lhs->enemy_tunnel_post_jump_occupied != rhs->enemy_tunnel_post_jump_occupied) {
    return false;
  }
  // ally_side_tunnel_pre_jump_occupied
  if (lhs->ally_side_tunnel_pre_jump_occupied != rhs->ally_side_tunnel_pre_jump_occupied) {
    return false;
  }
  // ally_side_tunnel_post_jump_occupied
  if (lhs->ally_side_tunnel_post_jump_occupied != rhs->ally_side_tunnel_post_jump_occupied) {
    return false;
  }
  // enemy_highland_upper_occupied
  if (lhs->enemy_highland_upper_occupied != rhs->enemy_highland_upper_occupied) {
    return false;
  }
  // enemy_jump_upper_occupied
  if (lhs->enemy_jump_upper_occupied != rhs->enemy_jump_upper_occupied) {
    return false;
  }
  // enemy_road_upper_occupied
  if (lhs->enemy_road_upper_occupied != rhs->enemy_road_upper_occupied) {
    return false;
  }
  return true;
}

bool
radar_interfaces__msg__MacroStatus__copy(
  const radar_interfaces__msg__MacroStatus * input,
  radar_interfaces__msg__MacroStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // remaining_gold
  output->remaining_gold = input->remaining_gold;
  // total_gold
  output->total_gold = input->total_gold;
  // enemy_supply_area_occupied
  output->enemy_supply_area_occupied = input->enemy_supply_area_occupied;
  // enemy_central_highland_status
  output->enemy_central_highland_status = input->enemy_central_highland_status;
  // enemy_trapezoid_highland_occupied
  output->enemy_trapezoid_highland_occupied = input->enemy_trapezoid_highland_occupied;
  // enemy_fort_buff_status
  output->enemy_fort_buff_status = input->enemy_fort_buff_status;
  // enemy_outpost_buff_status
  output->enemy_outpost_buff_status = input->enemy_outpost_buff_status;
  // enemy_base_buff_occupied
  output->enemy_base_buff_occupied = input->enemy_base_buff_occupied;
  // enemy_tunnel_pre_jump_occupied
  output->enemy_tunnel_pre_jump_occupied = input->enemy_tunnel_pre_jump_occupied;
  // enemy_tunnel_post_jump_occupied
  output->enemy_tunnel_post_jump_occupied = input->enemy_tunnel_post_jump_occupied;
  // ally_side_tunnel_pre_jump_occupied
  output->ally_side_tunnel_pre_jump_occupied = input->ally_side_tunnel_pre_jump_occupied;
  // ally_side_tunnel_post_jump_occupied
  output->ally_side_tunnel_post_jump_occupied = input->ally_side_tunnel_post_jump_occupied;
  // enemy_highland_upper_occupied
  output->enemy_highland_upper_occupied = input->enemy_highland_upper_occupied;
  // enemy_jump_upper_occupied
  output->enemy_jump_upper_occupied = input->enemy_jump_upper_occupied;
  // enemy_road_upper_occupied
  output->enemy_road_upper_occupied = input->enemy_road_upper_occupied;
  return true;
}

radar_interfaces__msg__MacroStatus *
radar_interfaces__msg__MacroStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__MacroStatus * msg = (radar_interfaces__msg__MacroStatus *)allocator.allocate(sizeof(radar_interfaces__msg__MacroStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(radar_interfaces__msg__MacroStatus));
  bool success = radar_interfaces__msg__MacroStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
radar_interfaces__msg__MacroStatus__destroy(radar_interfaces__msg__MacroStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    radar_interfaces__msg__MacroStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
radar_interfaces__msg__MacroStatus__Sequence__init(radar_interfaces__msg__MacroStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__MacroStatus * data = NULL;

  if (size) {
    data = (radar_interfaces__msg__MacroStatus *)allocator.zero_allocate(size, sizeof(radar_interfaces__msg__MacroStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = radar_interfaces__msg__MacroStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        radar_interfaces__msg__MacroStatus__fini(&data[i - 1]);
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
radar_interfaces__msg__MacroStatus__Sequence__fini(radar_interfaces__msg__MacroStatus__Sequence * array)
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
      radar_interfaces__msg__MacroStatus__fini(&array->data[i]);
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

radar_interfaces__msg__MacroStatus__Sequence *
radar_interfaces__msg__MacroStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  radar_interfaces__msg__MacroStatus__Sequence * array = (radar_interfaces__msg__MacroStatus__Sequence *)allocator.allocate(sizeof(radar_interfaces__msg__MacroStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = radar_interfaces__msg__MacroStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
radar_interfaces__msg__MacroStatus__Sequence__destroy(radar_interfaces__msg__MacroStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    radar_interfaces__msg__MacroStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
radar_interfaces__msg__MacroStatus__Sequence__are_equal(const radar_interfaces__msg__MacroStatus__Sequence * lhs, const radar_interfaces__msg__MacroStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!radar_interfaces__msg__MacroStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
radar_interfaces__msg__MacroStatus__Sequence__copy(
  const radar_interfaces__msg__MacroStatus__Sequence * input,
  radar_interfaces__msg__MacroStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(radar_interfaces__msg__MacroStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    radar_interfaces__msg__MacroStatus * data =
      (radar_interfaces__msg__MacroStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!radar_interfaces__msg__MacroStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          radar_interfaces__msg__MacroStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!radar_interfaces__msg__MacroStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
