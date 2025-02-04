// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from k9_interface:srv/LtmRemember.idl
// generated code does not contain a copyright notice

#include "k9_interface/srv/detail/ltm_remember__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_k9_interface
const rosidl_type_hash_t *
k9_interface__srv__LtmRemember__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x51, 0x4d, 0x6c, 0x62, 0xea, 0x28, 0x48,
      0x22, 0xce, 0xbe, 0x05, 0x7c, 0x77, 0x2e, 0x8c,
      0x0c, 0xca, 0xa6, 0x24, 0x1f, 0xef, 0xa7, 0x6c,
      0x21, 0x3b, 0xdf, 0xf7, 0x14, 0x67, 0x51, 0x5d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_k9_interface
const rosidl_type_hash_t *
k9_interface__srv__LtmRemember_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaa, 0xe7, 0x56, 0x42, 0x61, 0xaf, 0xe6, 0x20,
      0xc8, 0x38, 0x40, 0x2e, 0x11, 0xb6, 0xc2, 0x84,
      0xe0, 0x11, 0x16, 0xef, 0x7d, 0xe0, 0xce, 0x72,
      0x28, 0xf2, 0x12, 0x68, 0x3a, 0x1d, 0xee, 0xc3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_k9_interface
const rosidl_type_hash_t *
k9_interface__srv__LtmRemember_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x22, 0xe8, 0xa6, 0xff, 0xae, 0x48, 0xed, 0x4a,
      0xbb, 0x77, 0x00, 0xd8, 0x78, 0xf1, 0x5c, 0xab,
      0x2b, 0xcf, 0x70, 0xaa, 0x90, 0x4f, 0x98, 0xdd,
      0xd8, 0x1d, 0xa5, 0x61, 0xcf, 0xda, 0x9d, 0x7a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_k9_interface
const rosidl_type_hash_t *
k9_interface__srv__LtmRemember_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x87, 0x76, 0x46, 0xb2, 0xbb, 0x89, 0x2c, 0x07,
      0xd5, 0xd0, 0xce, 0xb4, 0x64, 0x3e, 0x33, 0x5c,
      0xff, 0xba, 0x1d, 0xd6, 0x7a, 0x4a, 0xab, 0xf2,
      0xe6, 0x14, 0x78, 0x01, 0xd9, 0xa1, 0x60, 0x6c,
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

static char k9_interface__srv__LtmRemember__TYPE_NAME[] = "k9_interface/srv/LtmRemember";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char k9_interface__srv__LtmRemember_Event__TYPE_NAME[] = "k9_interface/srv/LtmRemember_Event";
static char k9_interface__srv__LtmRemember_Request__TYPE_NAME[] = "k9_interface/srv/LtmRemember_Request";
static char k9_interface__srv__LtmRemember_Response__TYPE_NAME[] = "k9_interface/srv/LtmRemember_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char k9_interface__srv__LtmRemember__FIELD_NAME__request_message[] = "request_message";
static char k9_interface__srv__LtmRemember__FIELD_NAME__response_message[] = "response_message";
static char k9_interface__srv__LtmRemember__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field k9_interface__srv__LtmRemember__FIELDS[] = {
  {
    {k9_interface__srv__LtmRemember__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {k9_interface__srv__LtmRemember_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {k9_interface__srv__LtmRemember_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {k9_interface__srv__LtmRemember_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription k9_interface__srv__LtmRemember__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
k9_interface__srv__LtmRemember__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {k9_interface__srv__LtmRemember__TYPE_NAME, 28, 28},
      {k9_interface__srv__LtmRemember__FIELDS, 3, 3},
    },
    {k9_interface__srv__LtmRemember__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = k9_interface__srv__LtmRemember_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = k9_interface__srv__LtmRemember_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = k9_interface__srv__LtmRemember_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char k9_interface__srv__LtmRemember_Request__FIELD_NAME__up_to_twenty_topics_of_512_chars[] = "up_to_twenty_topics_of_512_chars";

static rosidl_runtime_c__type_description__Field k9_interface__srv__LtmRemember_Request__FIELDS[] = {
  {
    {k9_interface__srv__LtmRemember_Request__FIELD_NAME__up_to_twenty_topics_of_512_chars, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOUNDED_STRING_BOUNDED_SEQUENCE,
      20,
      512,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
k9_interface__srv__LtmRemember_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {k9_interface__srv__LtmRemember_Request__TYPE_NAME, 36, 36},
      {k9_interface__srv__LtmRemember_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char k9_interface__srv__LtmRemember_Response__FIELD_NAME__success[] = "success";
static char k9_interface__srv__LtmRemember_Response__FIELD_NAME__facts_remembered[] = "facts_remembered";

static rosidl_runtime_c__type_description__Field k9_interface__srv__LtmRemember_Response__FIELDS[] = {
  {
    {k9_interface__srv__LtmRemember_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember_Response__FIELD_NAME__facts_remembered, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
k9_interface__srv__LtmRemember_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {k9_interface__srv__LtmRemember_Response__TYPE_NAME, 37, 37},
      {k9_interface__srv__LtmRemember_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char k9_interface__srv__LtmRemember_Event__FIELD_NAME__info[] = "info";
static char k9_interface__srv__LtmRemember_Event__FIELD_NAME__request[] = "request";
static char k9_interface__srv__LtmRemember_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field k9_interface__srv__LtmRemember_Event__FIELDS[] = {
  {
    {k9_interface__srv__LtmRemember_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {k9_interface__srv__LtmRemember_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {k9_interface__srv__LtmRemember_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription k9_interface__srv__LtmRemember_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {k9_interface__srv__LtmRemember_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
k9_interface__srv__LtmRemember_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {k9_interface__srv__LtmRemember_Event__TYPE_NAME, 34, 34},
      {k9_interface__srv__LtmRemember_Event__FIELDS, 3, 3},
    },
    {k9_interface__srv__LtmRemember_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = k9_interface__srv__LtmRemember_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = k9_interface__srv__LtmRemember_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string<=512[<=20] up_to_twenty_topics_of_512_chars\n"
  "---\n"
  "bool success\n"
  "uint8 facts_remembered";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
k9_interface__srv__LtmRemember__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {k9_interface__srv__LtmRemember__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 91, 91},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
k9_interface__srv__LtmRemember_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {k9_interface__srv__LtmRemember_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
k9_interface__srv__LtmRemember_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {k9_interface__srv__LtmRemember_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
k9_interface__srv__LtmRemember_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {k9_interface__srv__LtmRemember_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
k9_interface__srv__LtmRemember__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *k9_interface__srv__LtmRemember__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *k9_interface__srv__LtmRemember_Event__get_individual_type_description_source(NULL);
    sources[3] = *k9_interface__srv__LtmRemember_Request__get_individual_type_description_source(NULL);
    sources[4] = *k9_interface__srv__LtmRemember_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
k9_interface__srv__LtmRemember_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *k9_interface__srv__LtmRemember_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
k9_interface__srv__LtmRemember_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *k9_interface__srv__LtmRemember_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
k9_interface__srv__LtmRemember_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *k9_interface__srv__LtmRemember_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *k9_interface__srv__LtmRemember_Request__get_individual_type_description_source(NULL);
    sources[3] = *k9_interface__srv__LtmRemember_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
