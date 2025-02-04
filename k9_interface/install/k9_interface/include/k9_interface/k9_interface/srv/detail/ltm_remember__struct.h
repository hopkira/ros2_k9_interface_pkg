// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from k9_interface:srv/LtmRemember.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_remember.h"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__STRUCT_H_
#define K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'up_to_twenty_topics_of_512_chars'
#include "rosidl_runtime_c/string.h"

// constants for array fields with an upper bound
// up_to_twenty_topics_of_512_chars
enum
{
  k9_interface__srv__LtmRemember_Request__up_to_twenty_topics_of_512_chars__MAX_SIZE = 20
};
// up_to_twenty_topics_of_512_chars
enum
{
  k9_interface__srv__LtmRemember_Request__up_to_twenty_topics_of_512_chars__MAX_STRING_SIZE = 512
};

/// Struct defined in srv/LtmRemember in the package k9_interface.
typedef struct k9_interface__srv__LtmRemember_Request
{
  rosidl_runtime_c__String__Sequence up_to_twenty_topics_of_512_chars;
} k9_interface__srv__LtmRemember_Request;

// Struct for a sequence of k9_interface__srv__LtmRemember_Request.
typedef struct k9_interface__srv__LtmRemember_Request__Sequence
{
  k9_interface__srv__LtmRemember_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmRemember_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/LtmRemember in the package k9_interface.
typedef struct k9_interface__srv__LtmRemember_Response
{
  bool success;
  uint8_t facts_remembered;
} k9_interface__srv__LtmRemember_Response;

// Struct for a sequence of k9_interface__srv__LtmRemember_Response.
typedef struct k9_interface__srv__LtmRemember_Response__Sequence
{
  k9_interface__srv__LtmRemember_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmRemember_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  k9_interface__srv__LtmRemember_Event__request__MAX_SIZE = 1
};
// response
enum
{
  k9_interface__srv__LtmRemember_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LtmRemember in the package k9_interface.
typedef struct k9_interface__srv__LtmRemember_Event
{
  service_msgs__msg__ServiceEventInfo info;
  k9_interface__srv__LtmRemember_Request__Sequence request;
  k9_interface__srv__LtmRemember_Response__Sequence response;
} k9_interface__srv__LtmRemember_Event;

// Struct for a sequence of k9_interface__srv__LtmRemember_Event.
typedef struct k9_interface__srv__LtmRemember_Event__Sequence
{
  k9_interface__srv__LtmRemember_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmRemember_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__STRUCT_H_
