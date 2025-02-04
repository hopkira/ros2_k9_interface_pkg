// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from k9_interface:srv/LtmRemember.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_remember.hpp"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__BUILDER_HPP_
#define K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "k9_interface/srv/detail/ltm_remember__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmRemember_Request_up_to_twenty_topics_of_512_chars
{
public:
  Init_LtmRemember_Request_up_to_twenty_topics_of_512_chars()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::k9_interface::srv::LtmRemember_Request up_to_twenty_topics_of_512_chars(::k9_interface::srv::LtmRemember_Request::_up_to_twenty_topics_of_512_chars_type arg)
  {
    msg_.up_to_twenty_topics_of_512_chars = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmRemember_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmRemember_Request>()
{
  return k9_interface::srv::builder::Init_LtmRemember_Request_up_to_twenty_topics_of_512_chars();
}

}  // namespace k9_interface


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmRemember_Response_facts_remembered
{
public:
  explicit Init_LtmRemember_Response_facts_remembered(::k9_interface::srv::LtmRemember_Response & msg)
  : msg_(msg)
  {}
  ::k9_interface::srv::LtmRemember_Response facts_remembered(::k9_interface::srv::LtmRemember_Response::_facts_remembered_type arg)
  {
    msg_.facts_remembered = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmRemember_Response msg_;
};

class Init_LtmRemember_Response_success
{
public:
  Init_LtmRemember_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LtmRemember_Response_facts_remembered success(::k9_interface::srv::LtmRemember_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LtmRemember_Response_facts_remembered(msg_);
  }

private:
  ::k9_interface::srv::LtmRemember_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmRemember_Response>()
{
  return k9_interface::srv::builder::Init_LtmRemember_Response_success();
}

}  // namespace k9_interface


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmRemember_Event_response
{
public:
  explicit Init_LtmRemember_Event_response(::k9_interface::srv::LtmRemember_Event & msg)
  : msg_(msg)
  {}
  ::k9_interface::srv::LtmRemember_Event response(::k9_interface::srv::LtmRemember_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmRemember_Event msg_;
};

class Init_LtmRemember_Event_request
{
public:
  explicit Init_LtmRemember_Event_request(::k9_interface::srv::LtmRemember_Event & msg)
  : msg_(msg)
  {}
  Init_LtmRemember_Event_response request(::k9_interface::srv::LtmRemember_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LtmRemember_Event_response(msg_);
  }

private:
  ::k9_interface::srv::LtmRemember_Event msg_;
};

class Init_LtmRemember_Event_info
{
public:
  Init_LtmRemember_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LtmRemember_Event_request info(::k9_interface::srv::LtmRemember_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LtmRemember_Event_request(msg_);
  }

private:
  ::k9_interface::srv::LtmRemember_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmRemember_Event>()
{
  return k9_interface::srv::builder::Init_LtmRemember_Event_info();
}

}  // namespace k9_interface

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__BUILDER_HPP_
