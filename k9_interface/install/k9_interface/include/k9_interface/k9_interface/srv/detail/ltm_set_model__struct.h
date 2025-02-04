// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from k9_interface:srv/LtmSetModel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_set_model.h"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_SET_MODEL__STRUCT_H_
#define K9_INTERFACE__SRV__DETAIL__LTM_SET_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODEL_TYPE_GENERATE'.
enum
{
  k9_interface__srv__LtmSetModel_Request__MODEL_TYPE_GENERATE = 0
};

/// Constant 'MODEL_TYPE_EMBED'.
enum
{
  k9_interface__srv__LtmSetModel_Request__MODEL_TYPE_EMBED = 1
};

// Include directives for member types
// Member 'model_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/LtmSetModel in the package k9_interface.
typedef struct k9_interface__srv__LtmSetModel_Request
{
  uint8_t model_type;
  rosidl_runtime_c__String model_name;
} k9_interface__srv__LtmSetModel_Request;

// Struct for a sequence of k9_interface__srv__LtmSetModel_Request.
typedef struct k9_interface__srv__LtmSetModel_Request__Sequence
{
  k9_interface__srv__LtmSetModel_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmSetModel_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/LtmSetModel in the package k9_interface.
typedef struct k9_interface__srv__LtmSetModel_Response
{
  bool success;
} k9_interface__srv__LtmSetModel_Response;

// Struct for a sequence of k9_interface__srv__LtmSetModel_Response.
typedef struct k9_interface__srv__LtmSetModel_Response__Sequence
{
  k9_interface__srv__LtmSetModel_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmSetModel_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  k9_interface__srv__LtmSetModel_Event__request__MAX_SIZE = 1
};
// response
enum
{
  k9_interface__srv__LtmSetModel_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LtmSetModel in the package k9_interface.
typedef struct k9_interface__srv__LtmSetModel_Event
{
  service_msgs__msg__ServiceEventInfo info;
  k9_interface__srv__LtmSetModel_Request__Sequence request;
  k9_interface__srv__LtmSetModel_Response__Sequence response;
} k9_interface__srv__LtmSetModel_Event;

// Struct for a sequence of k9_interface__srv__LtmSetModel_Event.
typedef struct k9_interface__srv__LtmSetModel_Event__Sequence
{
  k9_interface__srv__LtmSetModel_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} k9_interface__srv__LtmSetModel_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_SET_MODEL__STRUCT_H_
