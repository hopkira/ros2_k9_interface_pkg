// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from k9_interface:srv/LtmQuery.idl
// generated code does not contain a copyright notice
#include "k9_interface/srv/detail/ltm_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `query`
#include "rosidl_runtime_c/string_functions.h"

bool
k9_interface__srv__LtmQuery_Request__init(k9_interface__srv__LtmQuery_Request * msg)
{
  if (!msg) {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__init(&msg->query)) {
    k9_interface__srv__LtmQuery_Request__fini(msg);
    return false;
  }
  return true;
}

void
k9_interface__srv__LtmQuery_Request__fini(k9_interface__srv__LtmQuery_Request * msg)
{
  if (!msg) {
    return;
  }
  // query
  rosidl_runtime_c__String__fini(&msg->query);
}

bool
k9_interface__srv__LtmQuery_Request__are_equal(const k9_interface__srv__LtmQuery_Request * lhs, const k9_interface__srv__LtmQuery_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->query), &(rhs->query)))
  {
    return false;
  }
  return true;
}

bool
k9_interface__srv__LtmQuery_Request__copy(
  const k9_interface__srv__LtmQuery_Request * input,
  k9_interface__srv__LtmQuery_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // query
  if (!rosidl_runtime_c__String__copy(
      &(input->query), &(output->query)))
  {
    return false;
  }
  return true;
}

k9_interface__srv__LtmQuery_Request *
k9_interface__srv__LtmQuery_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Request * msg = (k9_interface__srv__LtmQuery_Request *)allocator.allocate(sizeof(k9_interface__srv__LtmQuery_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(k9_interface__srv__LtmQuery_Request));
  bool success = k9_interface__srv__LtmQuery_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
k9_interface__srv__LtmQuery_Request__destroy(k9_interface__srv__LtmQuery_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    k9_interface__srv__LtmQuery_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
k9_interface__srv__LtmQuery_Request__Sequence__init(k9_interface__srv__LtmQuery_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Request * data = NULL;

  if (size) {
    data = (k9_interface__srv__LtmQuery_Request *)allocator.zero_allocate(size, sizeof(k9_interface__srv__LtmQuery_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = k9_interface__srv__LtmQuery_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        k9_interface__srv__LtmQuery_Request__fini(&data[i - 1]);
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
k9_interface__srv__LtmQuery_Request__Sequence__fini(k9_interface__srv__LtmQuery_Request__Sequence * array)
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
      k9_interface__srv__LtmQuery_Request__fini(&array->data[i]);
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

k9_interface__srv__LtmQuery_Request__Sequence *
k9_interface__srv__LtmQuery_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Request__Sequence * array = (k9_interface__srv__LtmQuery_Request__Sequence *)allocator.allocate(sizeof(k9_interface__srv__LtmQuery_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = k9_interface__srv__LtmQuery_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
k9_interface__srv__LtmQuery_Request__Sequence__destroy(k9_interface__srv__LtmQuery_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    k9_interface__srv__LtmQuery_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
k9_interface__srv__LtmQuery_Request__Sequence__are_equal(const k9_interface__srv__LtmQuery_Request__Sequence * lhs, const k9_interface__srv__LtmQuery_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!k9_interface__srv__LtmQuery_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
k9_interface__srv__LtmQuery_Request__Sequence__copy(
  const k9_interface__srv__LtmQuery_Request__Sequence * input,
  k9_interface__srv__LtmQuery_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(k9_interface__srv__LtmQuery_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    k9_interface__srv__LtmQuery_Request * data =
      (k9_interface__srv__LtmQuery_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!k9_interface__srv__LtmQuery_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          k9_interface__srv__LtmQuery_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!k9_interface__srv__LtmQuery_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `answer`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
k9_interface__srv__LtmQuery_Response__init(k9_interface__srv__LtmQuery_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // answer
  if (!rosidl_runtime_c__String__init(&msg->answer)) {
    k9_interface__srv__LtmQuery_Response__fini(msg);
    return false;
  }
  return true;
}

void
k9_interface__srv__LtmQuery_Response__fini(k9_interface__srv__LtmQuery_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // answer
  rosidl_runtime_c__String__fini(&msg->answer);
}

bool
k9_interface__srv__LtmQuery_Response__are_equal(const k9_interface__srv__LtmQuery_Response * lhs, const k9_interface__srv__LtmQuery_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // answer
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->answer), &(rhs->answer)))
  {
    return false;
  }
  return true;
}

bool
k9_interface__srv__LtmQuery_Response__copy(
  const k9_interface__srv__LtmQuery_Response * input,
  k9_interface__srv__LtmQuery_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // answer
  if (!rosidl_runtime_c__String__copy(
      &(input->answer), &(output->answer)))
  {
    return false;
  }
  return true;
}

k9_interface__srv__LtmQuery_Response *
k9_interface__srv__LtmQuery_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Response * msg = (k9_interface__srv__LtmQuery_Response *)allocator.allocate(sizeof(k9_interface__srv__LtmQuery_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(k9_interface__srv__LtmQuery_Response));
  bool success = k9_interface__srv__LtmQuery_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
k9_interface__srv__LtmQuery_Response__destroy(k9_interface__srv__LtmQuery_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    k9_interface__srv__LtmQuery_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
k9_interface__srv__LtmQuery_Response__Sequence__init(k9_interface__srv__LtmQuery_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Response * data = NULL;

  if (size) {
    data = (k9_interface__srv__LtmQuery_Response *)allocator.zero_allocate(size, sizeof(k9_interface__srv__LtmQuery_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = k9_interface__srv__LtmQuery_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        k9_interface__srv__LtmQuery_Response__fini(&data[i - 1]);
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
k9_interface__srv__LtmQuery_Response__Sequence__fini(k9_interface__srv__LtmQuery_Response__Sequence * array)
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
      k9_interface__srv__LtmQuery_Response__fini(&array->data[i]);
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

k9_interface__srv__LtmQuery_Response__Sequence *
k9_interface__srv__LtmQuery_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Response__Sequence * array = (k9_interface__srv__LtmQuery_Response__Sequence *)allocator.allocate(sizeof(k9_interface__srv__LtmQuery_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = k9_interface__srv__LtmQuery_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
k9_interface__srv__LtmQuery_Response__Sequence__destroy(k9_interface__srv__LtmQuery_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    k9_interface__srv__LtmQuery_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
k9_interface__srv__LtmQuery_Response__Sequence__are_equal(const k9_interface__srv__LtmQuery_Response__Sequence * lhs, const k9_interface__srv__LtmQuery_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!k9_interface__srv__LtmQuery_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
k9_interface__srv__LtmQuery_Response__Sequence__copy(
  const k9_interface__srv__LtmQuery_Response__Sequence * input,
  k9_interface__srv__LtmQuery_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(k9_interface__srv__LtmQuery_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    k9_interface__srv__LtmQuery_Response * data =
      (k9_interface__srv__LtmQuery_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!k9_interface__srv__LtmQuery_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          k9_interface__srv__LtmQuery_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!k9_interface__srv__LtmQuery_Response__copy(
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
// #include "k9_interface/srv/detail/ltm_query__functions.h"

bool
k9_interface__srv__LtmQuery_Event__init(k9_interface__srv__LtmQuery_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    k9_interface__srv__LtmQuery_Event__fini(msg);
    return false;
  }
  // request
  if (!k9_interface__srv__LtmQuery_Request__Sequence__init(&msg->request, 0)) {
    k9_interface__srv__LtmQuery_Event__fini(msg);
    return false;
  }
  // response
  if (!k9_interface__srv__LtmQuery_Response__Sequence__init(&msg->response, 0)) {
    k9_interface__srv__LtmQuery_Event__fini(msg);
    return false;
  }
  return true;
}

void
k9_interface__srv__LtmQuery_Event__fini(k9_interface__srv__LtmQuery_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  k9_interface__srv__LtmQuery_Request__Sequence__fini(&msg->request);
  // response
  k9_interface__srv__LtmQuery_Response__Sequence__fini(&msg->response);
}

bool
k9_interface__srv__LtmQuery_Event__are_equal(const k9_interface__srv__LtmQuery_Event * lhs, const k9_interface__srv__LtmQuery_Event * rhs)
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
  if (!k9_interface__srv__LtmQuery_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!k9_interface__srv__LtmQuery_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
k9_interface__srv__LtmQuery_Event__copy(
  const k9_interface__srv__LtmQuery_Event * input,
  k9_interface__srv__LtmQuery_Event * output)
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
  if (!k9_interface__srv__LtmQuery_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!k9_interface__srv__LtmQuery_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

k9_interface__srv__LtmQuery_Event *
k9_interface__srv__LtmQuery_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Event * msg = (k9_interface__srv__LtmQuery_Event *)allocator.allocate(sizeof(k9_interface__srv__LtmQuery_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(k9_interface__srv__LtmQuery_Event));
  bool success = k9_interface__srv__LtmQuery_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
k9_interface__srv__LtmQuery_Event__destroy(k9_interface__srv__LtmQuery_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    k9_interface__srv__LtmQuery_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
k9_interface__srv__LtmQuery_Event__Sequence__init(k9_interface__srv__LtmQuery_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Event * data = NULL;

  if (size) {
    data = (k9_interface__srv__LtmQuery_Event *)allocator.zero_allocate(size, sizeof(k9_interface__srv__LtmQuery_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = k9_interface__srv__LtmQuery_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        k9_interface__srv__LtmQuery_Event__fini(&data[i - 1]);
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
k9_interface__srv__LtmQuery_Event__Sequence__fini(k9_interface__srv__LtmQuery_Event__Sequence * array)
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
      k9_interface__srv__LtmQuery_Event__fini(&array->data[i]);
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

k9_interface__srv__LtmQuery_Event__Sequence *
k9_interface__srv__LtmQuery_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  k9_interface__srv__LtmQuery_Event__Sequence * array = (k9_interface__srv__LtmQuery_Event__Sequence *)allocator.allocate(sizeof(k9_interface__srv__LtmQuery_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = k9_interface__srv__LtmQuery_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
k9_interface__srv__LtmQuery_Event__Sequence__destroy(k9_interface__srv__LtmQuery_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    k9_interface__srv__LtmQuery_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
k9_interface__srv__LtmQuery_Event__Sequence__are_equal(const k9_interface__srv__LtmQuery_Event__Sequence * lhs, const k9_interface__srv__LtmQuery_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!k9_interface__srv__LtmQuery_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
k9_interface__srv__LtmQuery_Event__Sequence__copy(
  const k9_interface__srv__LtmQuery_Event__Sequence * input,
  k9_interface__srv__LtmQuery_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(k9_interface__srv__LtmQuery_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    k9_interface__srv__LtmQuery_Event * data =
      (k9_interface__srv__LtmQuery_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!k9_interface__srv__LtmQuery_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          k9_interface__srv__LtmQuery_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!k9_interface__srv__LtmQuery_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
