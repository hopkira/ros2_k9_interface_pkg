// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from k9_interface:srv/LtmQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_query.hpp"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_QUERY__TRAITS_HPP_
#define K9_INTERFACE__SRV__DETAIL__LTM_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "k9_interface/srv/detail/ltm_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace k9_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LtmQuery_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: query
  {
    out << "query: ";
    rosidl_generator_traits::value_to_yaml(msg.query, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LtmQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: query
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query: ";
    rosidl_generator_traits::value_to_yaml(msg.query, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LtmQuery_Request & msg, bool use_flow_style = false)
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
  const k9_interface::srv::LtmQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  k9_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use k9_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const k9_interface::srv::LtmQuery_Request & msg)
{
  return k9_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<k9_interface::srv::LtmQuery_Request>()
{
  return "k9_interface::srv::LtmQuery_Request";
}

template<>
inline const char * name<k9_interface::srv::LtmQuery_Request>()
{
  return "k9_interface/srv/LtmQuery_Request";
}

template<>
struct has_fixed_size<k9_interface::srv::LtmQuery_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<k9_interface::srv::LtmQuery_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<k9_interface::srv::LtmQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace k9_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const LtmQuery_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: answer
  {
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LtmQuery_Response & msg,
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

  // member: answer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "answer: ";
    rosidl_generator_traits::value_to_yaml(msg.answer, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LtmQuery_Response & msg, bool use_flow_style = false)
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
  const k9_interface::srv::LtmQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  k9_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use k9_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const k9_interface::srv::LtmQuery_Response & msg)
{
  return k9_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<k9_interface::srv::LtmQuery_Response>()
{
  return "k9_interface::srv::LtmQuery_Response";
}

template<>
inline const char * name<k9_interface::srv::LtmQuery_Response>()
{
  return "k9_interface/srv/LtmQuery_Response";
}

template<>
struct has_fixed_size<k9_interface::srv::LtmQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<k9_interface::srv::LtmQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<k9_interface::srv::LtmQuery_Response>
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
  const LtmQuery_Event & msg,
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
  const LtmQuery_Event & msg,
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

inline std::string to_yaml(const LtmQuery_Event & msg, bool use_flow_style = false)
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
  const k9_interface::srv::LtmQuery_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  k9_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use k9_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const k9_interface::srv::LtmQuery_Event & msg)
{
  return k9_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<k9_interface::srv::LtmQuery_Event>()
{
  return "k9_interface::srv::LtmQuery_Event";
}

template<>
inline const char * name<k9_interface::srv::LtmQuery_Event>()
{
  return "k9_interface/srv/LtmQuery_Event";
}

template<>
struct has_fixed_size<k9_interface::srv::LtmQuery_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<k9_interface::srv::LtmQuery_Event>
  : std::integral_constant<bool, has_bounded_size<k9_interface::srv::LtmQuery_Request>::value && has_bounded_size<k9_interface::srv::LtmQuery_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<k9_interface::srv::LtmQuery_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<k9_interface::srv::LtmQuery>()
{
  return "k9_interface::srv::LtmQuery";
}

template<>
inline const char * name<k9_interface::srv::LtmQuery>()
{
  return "k9_interface/srv/LtmQuery";
}

template<>
struct has_fixed_size<k9_interface::srv::LtmQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<k9_interface::srv::LtmQuery_Request>::value &&
    has_fixed_size<k9_interface::srv::LtmQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<k9_interface::srv::LtmQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<k9_interface::srv::LtmQuery_Request>::value &&
    has_bounded_size<k9_interface::srv::LtmQuery_Response>::value
  >
{
};

template<>
struct is_service<k9_interface::srv::LtmQuery>
  : std::true_type
{
};

template<>
struct is_service_request<k9_interface::srv::LtmQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<k9_interface::srv::LtmQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_QUERY__TRAITS_HPP_
