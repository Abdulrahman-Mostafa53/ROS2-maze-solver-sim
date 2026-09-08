// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from maze_interfaces:srv/Error.idl
// generated code does not contain a copyright notice
#include "maze_interfaces/srv/detail/error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
maze_interfaces__srv__Error_Request__init(maze_interfaces__srv__Error_Request * msg)
{
  if (!msg) {
    return false;
  }
  // stop
  return true;
}

void
maze_interfaces__srv__Error_Request__fini(maze_interfaces__srv__Error_Request * msg)
{
  if (!msg) {
    return;
  }
  // stop
}

bool
maze_interfaces__srv__Error_Request__are_equal(const maze_interfaces__srv__Error_Request * lhs, const maze_interfaces__srv__Error_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stop
  if (lhs->stop != rhs->stop) {
    return false;
  }
  return true;
}

bool
maze_interfaces__srv__Error_Request__copy(
  const maze_interfaces__srv__Error_Request * input,
  maze_interfaces__srv__Error_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // stop
  output->stop = input->stop;
  return true;
}

maze_interfaces__srv__Error_Request *
maze_interfaces__srv__Error_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Request * msg = (maze_interfaces__srv__Error_Request *)allocator.allocate(sizeof(maze_interfaces__srv__Error_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_interfaces__srv__Error_Request));
  bool success = maze_interfaces__srv__Error_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_interfaces__srv__Error_Request__destroy(maze_interfaces__srv__Error_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_interfaces__srv__Error_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_interfaces__srv__Error_Request__Sequence__init(maze_interfaces__srv__Error_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_interfaces__srv__Error_Request)) {
      return false;
    }
    data = (maze_interfaces__srv__Error_Request *)allocator.zero_allocate(size, sizeof(maze_interfaces__srv__Error_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_interfaces__srv__Error_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_interfaces__srv__Error_Request__fini(&data[i - 1]);
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
maze_interfaces__srv__Error_Request__Sequence__fini(maze_interfaces__srv__Error_Request__Sequence * array)
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
      maze_interfaces__srv__Error_Request__fini(&array->data[i]);
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

maze_interfaces__srv__Error_Request__Sequence *
maze_interfaces__srv__Error_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Request__Sequence * array = (maze_interfaces__srv__Error_Request__Sequence *)allocator.allocate(sizeof(maze_interfaces__srv__Error_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_interfaces__srv__Error_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_interfaces__srv__Error_Request__Sequence__destroy(maze_interfaces__srv__Error_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_interfaces__srv__Error_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_interfaces__srv__Error_Request__Sequence__are_equal(const maze_interfaces__srv__Error_Request__Sequence * lhs, const maze_interfaces__srv__Error_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_interfaces__srv__Error_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_interfaces__srv__Error_Request__Sequence__copy(
  const maze_interfaces__srv__Error_Request__Sequence * input,
  maze_interfaces__srv__Error_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_interfaces__srv__Error_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_interfaces__srv__Error_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_interfaces__srv__Error_Request * data =
      (maze_interfaces__srv__Error_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_interfaces__srv__Error_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_interfaces__srv__Error_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_interfaces__srv__Error_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
maze_interfaces__srv__Error_Response__init(maze_interfaces__srv__Error_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    maze_interfaces__srv__Error_Response__fini(msg);
    return false;
  }
  return true;
}

void
maze_interfaces__srv__Error_Response__fini(maze_interfaces__srv__Error_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
maze_interfaces__srv__Error_Response__are_equal(const maze_interfaces__srv__Error_Response * lhs, const maze_interfaces__srv__Error_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
maze_interfaces__srv__Error_Response__copy(
  const maze_interfaces__srv__Error_Response * input,
  maze_interfaces__srv__Error_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

maze_interfaces__srv__Error_Response *
maze_interfaces__srv__Error_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Response * msg = (maze_interfaces__srv__Error_Response *)allocator.allocate(sizeof(maze_interfaces__srv__Error_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_interfaces__srv__Error_Response));
  bool success = maze_interfaces__srv__Error_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_interfaces__srv__Error_Response__destroy(maze_interfaces__srv__Error_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_interfaces__srv__Error_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_interfaces__srv__Error_Response__Sequence__init(maze_interfaces__srv__Error_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_interfaces__srv__Error_Response)) {
      return false;
    }
    data = (maze_interfaces__srv__Error_Response *)allocator.zero_allocate(size, sizeof(maze_interfaces__srv__Error_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_interfaces__srv__Error_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_interfaces__srv__Error_Response__fini(&data[i - 1]);
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
maze_interfaces__srv__Error_Response__Sequence__fini(maze_interfaces__srv__Error_Response__Sequence * array)
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
      maze_interfaces__srv__Error_Response__fini(&array->data[i]);
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

maze_interfaces__srv__Error_Response__Sequence *
maze_interfaces__srv__Error_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Response__Sequence * array = (maze_interfaces__srv__Error_Response__Sequence *)allocator.allocate(sizeof(maze_interfaces__srv__Error_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_interfaces__srv__Error_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_interfaces__srv__Error_Response__Sequence__destroy(maze_interfaces__srv__Error_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_interfaces__srv__Error_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_interfaces__srv__Error_Response__Sequence__are_equal(const maze_interfaces__srv__Error_Response__Sequence * lhs, const maze_interfaces__srv__Error_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_interfaces__srv__Error_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_interfaces__srv__Error_Response__Sequence__copy(
  const maze_interfaces__srv__Error_Response__Sequence * input,
  maze_interfaces__srv__Error_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_interfaces__srv__Error_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_interfaces__srv__Error_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_interfaces__srv__Error_Response * data =
      (maze_interfaces__srv__Error_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_interfaces__srv__Error_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_interfaces__srv__Error_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_interfaces__srv__Error_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "maze_interfaces/srv/detail/error__functions.h"

bool
maze_interfaces__srv__Error_Event__init(maze_interfaces__srv__Error_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    maze_interfaces__srv__Error_Event__fini(msg);
    return false;
  }
  // request
  if (!maze_interfaces__srv__Error_Request__Sequence__init(&msg->request, 0)) {
    maze_interfaces__srv__Error_Event__fini(msg);
    return false;
  }
  // response
  if (!maze_interfaces__srv__Error_Response__Sequence__init(&msg->response, 0)) {
    maze_interfaces__srv__Error_Event__fini(msg);
    return false;
  }
  return true;
}

void
maze_interfaces__srv__Error_Event__fini(maze_interfaces__srv__Error_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  maze_interfaces__srv__Error_Request__Sequence__fini(&msg->request);
  // response
  maze_interfaces__srv__Error_Response__Sequence__fini(&msg->response);
}

bool
maze_interfaces__srv__Error_Event__are_equal(const maze_interfaces__srv__Error_Event * lhs, const maze_interfaces__srv__Error_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!maze_interfaces__srv__Error_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!maze_interfaces__srv__Error_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
maze_interfaces__srv__Error_Event__copy(
  const maze_interfaces__srv__Error_Event * input,
  maze_interfaces__srv__Error_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!maze_interfaces__srv__Error_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!maze_interfaces__srv__Error_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

maze_interfaces__srv__Error_Event *
maze_interfaces__srv__Error_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Event * msg = (maze_interfaces__srv__Error_Event *)allocator.allocate(sizeof(maze_interfaces__srv__Error_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(maze_interfaces__srv__Error_Event));
  bool success = maze_interfaces__srv__Error_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
maze_interfaces__srv__Error_Event__destroy(maze_interfaces__srv__Error_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    maze_interfaces__srv__Error_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
maze_interfaces__srv__Error_Event__Sequence__init(maze_interfaces__srv__Error_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(maze_interfaces__srv__Error_Event)) {
      return false;
    }
    data = (maze_interfaces__srv__Error_Event *)allocator.zero_allocate(size, sizeof(maze_interfaces__srv__Error_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = maze_interfaces__srv__Error_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        maze_interfaces__srv__Error_Event__fini(&data[i - 1]);
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
maze_interfaces__srv__Error_Event__Sequence__fini(maze_interfaces__srv__Error_Event__Sequence * array)
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
      maze_interfaces__srv__Error_Event__fini(&array->data[i]);
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

maze_interfaces__srv__Error_Event__Sequence *
maze_interfaces__srv__Error_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  maze_interfaces__srv__Error_Event__Sequence * array = (maze_interfaces__srv__Error_Event__Sequence *)allocator.allocate(sizeof(maze_interfaces__srv__Error_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = maze_interfaces__srv__Error_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
maze_interfaces__srv__Error_Event__Sequence__destroy(maze_interfaces__srv__Error_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    maze_interfaces__srv__Error_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
maze_interfaces__srv__Error_Event__Sequence__are_equal(const maze_interfaces__srv__Error_Event__Sequence * lhs, const maze_interfaces__srv__Error_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!maze_interfaces__srv__Error_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
maze_interfaces__srv__Error_Event__Sequence__copy(
  const maze_interfaces__srv__Error_Event__Sequence * input,
  maze_interfaces__srv__Error_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(maze_interfaces__srv__Error_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(maze_interfaces__srv__Error_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    maze_interfaces__srv__Error_Event * data =
      (maze_interfaces__srv__Error_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!maze_interfaces__srv__Error_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          maze_interfaces__srv__Error_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!maze_interfaces__srv__Error_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
