// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from k9_interface:srv/LtmRemember.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "k9_interface/srv/detail/ltm_remember__rosidl_typesupport_introspection_c.h"
#include "k9_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "k9_interface/srv/detail/ltm_remember__functions.h"
#include "k9_interface/srv/detail/ltm_remember__struct.h"


// Include directives for member types
// Member `up_to_twenty_topics_of_512_chars`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  k9_interface__srv__LtmRemember_Request__init(message_memory);
}

void k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_fini_function(void * message_memory)
{
  k9_interface__srv__LtmRemember_Request__fini(message_memory);
}

size_t k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__size_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__get_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__fetch_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__assign_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__get_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__resize_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_member_array[1] = {
  {
    "up_to_twenty_topics_of_512_chars",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    512,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    20,  // array size
    true,  // is upper bound
    offsetof(k9_interface__srv__LtmRemember_Request, up_to_twenty_topics_of_512_chars),  // bytes offset in struct
    NULL,  // default value
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__size_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars,  // size() function pointer
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars,  // get_const(index) function pointer
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__get_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars,  // get(index) function pointer
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__fetch_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars,  // fetch(index, &value) function pointer
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__assign_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars,  // assign(index, value) function pointer
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__resize_function__LtmRemember_Request__up_to_twenty_topics_of_512_chars  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_members = {
  "k9_interface__srv",  // message namespace
  "LtmRemember_Request",  // message name
  1,  // number of fields
  sizeof(k9_interface__srv__LtmRemember_Request),
  false,  // has_any_key_member_
  k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_member_array,  // message members
  k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_type_support_handle = {
  0,
  &k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_members,
  get_message_typesupport_handle_function,
  &k9_interface__srv__LtmRemember_Request__get_type_hash,
  &k9_interface__srv__LtmRemember_Request__get_type_description,
  &k9_interface__srv__LtmRemember_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_k9_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Request)() {
  if (!k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_type_support_handle.typesupport_identifier) {
    k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "k9_interface/srv/detail/ltm_remember__rosidl_typesupport_introspection_c.h"
// already included above
// #include "k9_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "k9_interface/srv/detail/ltm_remember__functions.h"
// already included above
// #include "k9_interface/srv/detail/ltm_remember__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  k9_interface__srv__LtmRemember_Response__init(message_memory);
}

void k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_fini_function(void * message_memory)
{
  k9_interface__srv__LtmRemember_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k9_interface__srv__LtmRemember_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "facts_remembered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k9_interface__srv__LtmRemember_Response, facts_remembered),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_members = {
  "k9_interface__srv",  // message namespace
  "LtmRemember_Response",  // message name
  2,  // number of fields
  sizeof(k9_interface__srv__LtmRemember_Response),
  false,  // has_any_key_member_
  k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_member_array,  // message members
  k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_type_support_handle = {
  0,
  &k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_members,
  get_message_typesupport_handle_function,
  &k9_interface__srv__LtmRemember_Response__get_type_hash,
  &k9_interface__srv__LtmRemember_Response__get_type_description,
  &k9_interface__srv__LtmRemember_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_k9_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Response)() {
  if (!k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_type_support_handle.typesupport_identifier) {
    k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "k9_interface/srv/detail/ltm_remember__rosidl_typesupport_introspection_c.h"
// already included above
// #include "k9_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "k9_interface/srv/detail/ltm_remember__functions.h"
// already included above
// #include "k9_interface/srv/detail/ltm_remember__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "k9_interface/srv/ltm_remember.h"
// Member `request`
// Member `response`
// already included above
// #include "k9_interface/srv/detail/ltm_remember__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  k9_interface__srv__LtmRemember_Event__init(message_memory);
}

void k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_fini_function(void * message_memory)
{
  k9_interface__srv__LtmRemember_Event__fini(message_memory);
}

size_t k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__size_function__LtmRemember_Event__request(
  const void * untyped_member)
{
  const k9_interface__srv__LtmRemember_Request__Sequence * member =
    (const k9_interface__srv__LtmRemember_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Event__request(
  const void * untyped_member, size_t index)
{
  const k9_interface__srv__LtmRemember_Request__Sequence * member =
    (const k9_interface__srv__LtmRemember_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_function__LtmRemember_Event__request(
  void * untyped_member, size_t index)
{
  k9_interface__srv__LtmRemember_Request__Sequence * member =
    (k9_interface__srv__LtmRemember_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__fetch_function__LtmRemember_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const k9_interface__srv__LtmRemember_Request * item =
    ((const k9_interface__srv__LtmRemember_Request *)
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Event__request(untyped_member, index));
  k9_interface__srv__LtmRemember_Request * value =
    (k9_interface__srv__LtmRemember_Request *)(untyped_value);
  *value = *item;
}

void k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__assign_function__LtmRemember_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  k9_interface__srv__LtmRemember_Request * item =
    ((k9_interface__srv__LtmRemember_Request *)
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_function__LtmRemember_Event__request(untyped_member, index));
  const k9_interface__srv__LtmRemember_Request * value =
    (const k9_interface__srv__LtmRemember_Request *)(untyped_value);
  *item = *value;
}

bool k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__resize_function__LtmRemember_Event__request(
  void * untyped_member, size_t size)
{
  k9_interface__srv__LtmRemember_Request__Sequence * member =
    (k9_interface__srv__LtmRemember_Request__Sequence *)(untyped_member);
  k9_interface__srv__LtmRemember_Request__Sequence__fini(member);
  return k9_interface__srv__LtmRemember_Request__Sequence__init(member, size);
}

size_t k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__size_function__LtmRemember_Event__response(
  const void * untyped_member)
{
  const k9_interface__srv__LtmRemember_Response__Sequence * member =
    (const k9_interface__srv__LtmRemember_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Event__response(
  const void * untyped_member, size_t index)
{
  const k9_interface__srv__LtmRemember_Response__Sequence * member =
    (const k9_interface__srv__LtmRemember_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_function__LtmRemember_Event__response(
  void * untyped_member, size_t index)
{
  k9_interface__srv__LtmRemember_Response__Sequence * member =
    (k9_interface__srv__LtmRemember_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__fetch_function__LtmRemember_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const k9_interface__srv__LtmRemember_Response * item =
    ((const k9_interface__srv__LtmRemember_Response *)
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Event__response(untyped_member, index));
  k9_interface__srv__LtmRemember_Response * value =
    (k9_interface__srv__LtmRemember_Response *)(untyped_value);
  *value = *item;
}

void k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__assign_function__LtmRemember_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  k9_interface__srv__LtmRemember_Response * item =
    ((k9_interface__srv__LtmRemember_Response *)
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_function__LtmRemember_Event__response(untyped_member, index));
  const k9_interface__srv__LtmRemember_Response * value =
    (const k9_interface__srv__LtmRemember_Response *)(untyped_value);
  *item = *value;
}

bool k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__resize_function__LtmRemember_Event__response(
  void * untyped_member, size_t size)
{
  k9_interface__srv__LtmRemember_Response__Sequence * member =
    (k9_interface__srv__LtmRemember_Response__Sequence *)(untyped_member);
  k9_interface__srv__LtmRemember_Response__Sequence__fini(member);
  return k9_interface__srv__LtmRemember_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(k9_interface__srv__LtmRemember_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(k9_interface__srv__LtmRemember_Event, request),  // bytes offset in struct
    NULL,  // default value
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__size_function__LtmRemember_Event__request,  // size() function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Event__request,  // get_const(index) function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_function__LtmRemember_Event__request,  // get(index) function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__fetch_function__LtmRemember_Event__request,  // fetch(index, &value) function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__assign_function__LtmRemember_Event__request,  // assign(index, value) function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__resize_function__LtmRemember_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(k9_interface__srv__LtmRemember_Event, response),  // bytes offset in struct
    NULL,  // default value
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__size_function__LtmRemember_Event__response,  // size() function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_const_function__LtmRemember_Event__response,  // get_const(index) function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__get_function__LtmRemember_Event__response,  // get(index) function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__fetch_function__LtmRemember_Event__response,  // fetch(index, &value) function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__assign_function__LtmRemember_Event__response,  // assign(index, value) function pointer
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__resize_function__LtmRemember_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_members = {
  "k9_interface__srv",  // message namespace
  "LtmRemember_Event",  // message name
  3,  // number of fields
  sizeof(k9_interface__srv__LtmRemember_Event),
  false,  // has_any_key_member_
  k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_member_array,  // message members
  k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_type_support_handle = {
  0,
  &k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_members,
  get_message_typesupport_handle_function,
  &k9_interface__srv__LtmRemember_Event__get_type_hash,
  &k9_interface__srv__LtmRemember_Event__get_type_description,
  &k9_interface__srv__LtmRemember_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_k9_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Event)() {
  k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Request)();
  k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Response)();
  if (!k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_type_support_handle.typesupport_identifier) {
    k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "k9_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "k9_interface/srv/detail/ltm_remember__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_service_members = {
  "k9_interface__srv",  // service namespace
  "LtmRemember",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_Request_message_type_support_handle,
  NULL,  // response message
  // k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_Response_message_type_support_handle
  NULL  // event_message
  // k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_Response_message_type_support_handle
};


static rosidl_service_type_support_t k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_service_type_support_handle = {
  0,
  &k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_service_members,
  get_service_typesupport_handle_function,
  &k9_interface__srv__LtmRemember_Request__rosidl_typesupport_introspection_c__LtmRemember_Request_message_type_support_handle,
  &k9_interface__srv__LtmRemember_Response__rosidl_typesupport_introspection_c__LtmRemember_Response_message_type_support_handle,
  &k9_interface__srv__LtmRemember_Event__rosidl_typesupport_introspection_c__LtmRemember_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    k9_interface,
    srv,
    LtmRemember
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    k9_interface,
    srv,
    LtmRemember
  ),
  &k9_interface__srv__LtmRemember__get_type_hash,
  &k9_interface__srv__LtmRemember__get_type_description,
  &k9_interface__srv__LtmRemember__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_k9_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember)(void) {
  if (!k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_service_type_support_handle.typesupport_identifier) {
    k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, k9_interface, srv, LtmRemember_Event)()->data;
  }

  return &k9_interface__srv__detail__ltm_remember__rosidl_typesupport_introspection_c__LtmRemember_service_type_support_handle;
}
