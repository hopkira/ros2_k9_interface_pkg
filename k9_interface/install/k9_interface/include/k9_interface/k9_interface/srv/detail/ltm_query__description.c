// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from k9_interface:srv/LtmQuery.idl
// generated code does not contain a copyright notice

#include "k9_interface/srv/detail/ltm_query__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_k9_interface
const rosidl_type_hash_t *
k9_interface__srv__LtmQuery__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x9f, 0xf7, 0x59, 0xfa, 0x38, 0xf4, 0xab,
      0xb8, 0x2f, 0x4d, 0xb0, 0x75, 0x01, 0xec, 0xbc,
      0xde, 0xea, 0xb7, 0xba, 0x6b, 0xae, 0x07, 0x66,
      0x08, 0x54, 0xff, 0x3a, 0xa3, 0x69, 0x58, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_k9_interface
const rosidl_type_hash_t *
k9_interface__srv__LtmQuery_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5c, 0x08, 0x94, 0x3f, 0xb6, 0xa2, 0xa6, 0x1d,
      0x9f, 0x31, 0x2e, 0x39, 0x40, 0xd3, 0x4b, 0x38,
      0x1b, 0x02, 0x14, 0xfc, 0x0e, 0xd9, 0x7d, 0x7d,
      0x05, 0xdb, 0x86, 0xd9, 0xff, 0x7c, 0x98, 0x49,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_k9_interface
const rosidl_type_hash_t *
k9_interface__srv__LtmQuery_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd2, 0xf5, 0xbb, 0xbe, 0x16, 0xd6, 0x30, 0xdb,
      0xc7, 0x3a, 0x30, 0xd6, 0x4f, 0x73, 0x2d, 0x31,
      0x41, 0x9a, 0xab, 0x64, 0x5d, 0xe6, 0xa2, 0xd2,
      0xf7, 0xe3, 0xba, 0x5e, 0xfd, 0x75, 0x41, 0x32,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_k9_interface
const rosidl_type_hash_t *
k9_interface__srv__LtmQuery_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0xfc, 0x90, 0x9c, 0x15, 0xea, 0x59, 0xea,
      0xea, 0x6f, 0x01, 0xbf, 0x6b, 0x68, 0xbf, 0xc5,
      0x9d, 0xed, 0xc5, 0x7d, 0x04, 0x51, 0xb3, 0x66,
      0x36, 0x9f, 0x8e, 0x9b, 0x59, 0xc1, 0x27, 0x6e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char k9_interface__srv__LtmQuery__TYPE_NAME[] = "k9_interface/srv/LtmQuery";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char k9_interface__srv__LtmQuery_Event__TYPE_NAME[] = "k9_interface/srv/LtmQuery_Event";
static char k9_interface__srv__LtmQuery_Request__TYPE_NAME[] = "k9_interface/srv/LtmQuery_Request";
static char k9_interface__srv__LtmQuery_Response__TYPE_NAME[] = "k9_interface/srv/LtmQuery_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char k9_interface__srv__LtmQuery__FIELD_NAME__request_message[] = "request_message";
static char k9_interface__srv__LtmQuery__FIELD_NAME__response_message[] = "response_message";
static char k9_interface__srv__LtmQuery__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field k9_interface__srv__LtmQuery__FIELDS[] = {
  {
    {k9_interface__srv__LtmQuery__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {k9_interface__srv__LtmQuery_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {k9_interface__srv__LtmQuery_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {k9_interface__srv__LtmQuery_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription k9_interface__srv__LtmQuery__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
k9_interface__srv__LtmQuery__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {k9_interface__srv__LtmQuery__TYPE_NAME, 25, 25},
      {k9_interface__srv__LtmQuery__FIELDS, 3, 3},
    },
    {k9_interface__srv__LtmQuery__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = k9_interface__srv__LtmQuery_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = k9_interface__srv__LtmQuery_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = k9_interface__srv__LtmQuery_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char k9_interface__srv__LtmQuery_Request__FIELD_NAME__query[] = "query";

static rosidl_runtime_c__type_description__Field k9_interface__srv__LtmQuery_Request__FIELDS[] = {
  {
    {k9_interface__srv__LtmQuery_Request__FIELD_NAME__query, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
k9_interface__srv__LtmQuery_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {k9_interface__srv__LtmQuery_Request__TYPE_NAME, 33, 33},
      {k9_interface__srv__LtmQuery_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char k9_interface__srv__LtmQuery_Response__FIELD_NAME__success[] = "success";
static char k9_interface__srv__LtmQuery_Response__FIELD_NAME__answer[] = "answer";

static rosidl_runtime_c__type_description__Field k9_interface__srv__LtmQuery_Response__FIELDS[] = {
  {
    {k9_interface__srv__LtmQuery_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery_Response__FIELD_NAME__answer, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
k9_interface__srv__LtmQuery_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {k9_interface__srv__LtmQuery_Response__TYPE_NAME, 34, 34},
      {k9_interface__srv__LtmQuery_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char k9_interface__srv__LtmQuery_Event__FIELD_NAME__info[] = "info";
static char k9_interface__srv__LtmQuery_Event__FIELD_NAME__request[] = "request";
static char k9_interface__srv__LtmQuery_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field k9_interface__srv__LtmQuery_Event__FIELDS[] = {
  {
    {k9_interface__srv__LtmQuery_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {k9_interface__srv__LtmQuery_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {k9_interface__srv__LtmQuery_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription k9_interface__srv__LtmQuery_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmQuery_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
k9_interface__srv__LtmQuery_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {k9_interface__srv__LtmQuery_Event__TYPE_NAME, 31, 31},
      {k9_interface__srv__LtmQuery_Event__FIELDS, 3, 3},
    },
    {k9_interface__srv__LtmQuery_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = k9_interface__srv__LtmQuery_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = k9_interface__srv__LtmQuery_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string query\n"
  "---\n"
  "bool success\n"
  "string answer";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
k9_interface__srv__LtmQuery__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {k9_interface__srv__LtmQuery__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
k9_interface__srv__LtmQuery_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {k9_interface__srv__LtmQuery_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
k9_interface__srv__LtmQuery_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {k9_interface__srv__LtmQuery_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
k9_interface__srv__LtmQuery_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {k9_interface__srv__LtmQuery_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
k9_interface__srv__LtmQuery__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *k9_interface__srv__LtmQuery__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *k9_interface__srv__LtmQuery_Event__get_individual_type_description_source(NULL);
    sources[3] = *k9_interface__srv__LtmQuery_Request__get_individual_type_description_source(NULL);
    sources[4] = *k9_interface__srv__LtmQuery_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
k9_interface__srv__LtmQuery_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *k9_interface__srv__LtmQuery_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
k9_interface__srv__LtmQuery_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *k9_interface__srv__LtmQuery_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
k9_interface__srv__LtmQuery_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *k9_interface__srv__LtmQuery_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *k9_interface__srv__LtmQuery_Request__get_individual_type_description_source(NULL);
    sources[3] = *k9_interface__srv__LtmQuery_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
