// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from k9_interface:srv/LtmRemember.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_remember.hpp"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__TRAITS_HPP_
#define K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "k9_interface/srv/detail/ltm_remember__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace k9_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LtmRemember_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: up_to_twenty_topics_of_512_chars
  {
    if (msg.up_to_twenty_topics_of_512_chars.size() == 0) {
      out << "up_to_twenty_topics_of_512_chars: []";
    } else {
      out << "up_to_twenty_topics_of_512_chars: [";
      size_t pending_items = msg.up_to_twenty_topics_of_512_chars.size();
      for (auto item : msg.up_to_twenty_topics_of_512_chars) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LtmRemember_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: up_to_twenty_topics_of_512_chars
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.up_to_twenty_topics_of_512_chars.size() == 0) {
      out << "up_to_twenty_topics_of_512_chars: []\n";
    } else {
      out << "up_to_twenty_topics_of_512_chars:\n";
      for (auto item : msg.up_to_twenty_topics_of_512_chars) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LtmRemember_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace k9_interface

namespace rosidl_generator_traits
{

[[deprecated("use k9_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const k9_interface::srv::LtmRemember_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  k9_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use k9_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const k9_interface::srv::LtmRemember_Request & msg)
{
  return k9_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<k9_interface::srv::LtmRemember_Request>()
{
  return "k9_interface::srv::LtmRemember_Request";
}

template<>
inline const char * name<k9_interface::srv::LtmRemember_Request>()
{
  return "k9_interface/srv/LtmRemember_Request";
}

template<>
struct has_fixed_size<k9_interface::srv::LtmRemember_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<k9_interface::srv::LtmRemember_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<k9_interface::srv::LtmRemember_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace k9_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LtmRemember_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: facts_remembered
  {
    out << "facts_remembered: ";
    rosidl_generator_traits::value_to_yaml(msg.facts_remembered, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LtmRemember_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: facts_remembered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "facts_remembered: ";
    rosidl_generator_traits::value_to_yaml(msg.facts_remembered, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LtmRemember_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace k9_interface

namespace rosidl_generator_traits
{

[[deprecated("use k9_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const k9_interface::srv::LtmRemember_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  k9_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use k9_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const k9_interface::srv::LtmRemember_Response & msg)
{
  return k9_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<k9_interface::srv::LtmRemember_Response>()
{
  return "k9_interface::srv::LtmRemember_Response";
}

template<>
inline const char * name<k9_interface::srv::LtmRemember_Response>()
{
  return "k9_interface/srv/LtmRemember_Response";
}

template<>
struct has_fixed_size<k9_interface::srv::LtmRemember_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<k9_interface::srv::LtmRemember_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<k9_interface::srv::LtmRemember_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace k9_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LtmRemember_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LtmRemember_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LtmRemember_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace k9_interface

namespace rosidl_generator_traits
{

[[deprecated("use k9_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const k9_interface::srv::LtmRemember_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  k9_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use k9_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const k9_interface::srv::LtmRemember_Event & msg)
{
  return k9_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<k9_interface::srv::LtmRemember_Event>()
{
  return "k9_interface::srv::LtmRemember_Event";
}

template<>
inline const char * name<k9_interface::srv::LtmRemember_Event>()
{
  return "k9_interface/srv/LtmRemember_Event";
}

template<>
struct has_fixed_size<k9_interface::srv::LtmRemember_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<k9_interface::srv::LtmRemember_Event>
  : std::integral_constant<bool, has_bounded_size<k9_interface::srv::LtmRemember_Request>::value && has_bounded_size<k9_interface::srv::LtmRemember_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<k9_interface::srv::LtmRemember_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<k9_interface::srv::LtmRemember>()
{
  return "k9_interface::srv::LtmRemember";
}

template<>
inline const char * name<k9_interface::srv::LtmRemember>()
{
  return "k9_interface/srv/LtmRemember";
}

template<>
struct has_fixed_size<k9_interface::srv::LtmRemember>
  : std::integral_constant<
    bool,
    has_fixed_size<k9_interface::srv::LtmRemember_Request>::value &&
    has_fixed_size<k9_interface::srv::LtmRemember_Response>::value
  >
{
};

template<>
struct has_bounded_size<k9_interface::srv::LtmRemember>
  : std::integral_constant<
    bool,
    has_bounded_size<k9_interface::srv::LtmRemember_Request>::value &&
    has_bounded_size<k9_interface::srv::LtmRemember_Response>::value
  >
{
};

template<>
struct is_service<k9_interface::srv::LtmRemember>
  : std::true_type
{
};

template<>
struct is_service_request<k9_interface::srv::LtmRemember_Request>
  : std::true_type
{
};

template<>
struct is_service_response<k9_interface::srv::LtmRemember_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__TRAITS_HPP_
