// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from k9_interface:srv/LtmQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_query.h"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_QUERY__STRUCT_H_
#define K9_INTERFACE__SRV__DETAIL__LTM_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'query'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LtmQuery in the package k9_interface.
typedef struct k9_interface__srv__LtmQuery_Request
{
  rosidl_runtime_c__String query;
} k9_interface__srv__LtmQuery_Request;

// Struct for a sequence of k9_interface__srv__LtmQuery_Request.
typedef struct k9_interface__srv__LtmQuery_Request__Sequence
{
  k9_interface__srv__LtmQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmQuery_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'answer'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LtmQuery in the package k9_interface.
typedef struct k9_interface__srv__LtmQuery_Response
{
  bool success;
  rosidl_runtime_c__String answer;
} k9_interface__srv__LtmQuery_Response;

// Struct for a sequence of k9_interface__srv__LtmQuery_Response.
typedef struct k9_interface__srv__LtmQuery_Response__Sequence
{
  k9_interface__srv__LtmQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmQuery_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  k9_interface__srv__LtmQuery_Event__request__MAX_SIZE = 1
};
// response
enum
{
  k9_interface__srv__LtmQuery_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LtmQuery in the package k9_interface.
typedef struct k9_interface__srv__LtmQuery_Event
{
  service_msgs__msg__ServiceEventInfo info;
  k9_interface__srv__LtmQuery_Request__Sequence request;
  k9_interface__srv__LtmQuery_Response__Sequence response;
} k9_interface__srv__LtmQuery_Event;

// Struct for a sequence of k9_interface__srv__LtmQuery_Event.
typedef struct k9_interface__srv__LtmQuery_Event__Sequence
{
  k9_interface__srv__LtmQuery_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmQuery_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_QUERY__STRUCT_H_
