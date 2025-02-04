// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from k9_interface:srv/LtmQuery.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_query.hpp"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_QUERY__BUILDER_HPP_
#define K9_INTERFACE__SRV__DETAIL__LTM_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "k9_interface/srv/detail/ltm_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmQuery_Request_query
{
public:
  Init_LtmQuery_Request_query()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::k9_interface::srv::LtmQuery_Request query(::k9_interface::srv::LtmQuery_Request::_query_type arg)
  {
    msg_.query = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmQuery_Request>()
{
  return k9_interface::srv::builder::Init_LtmQuery_Request_query();
}

}  // namespace k9_interface


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmQuery_Response_answer
{
public:
  explicit Init_LtmQuery_Response_answer(::k9_interface::srv::LtmQuery_Response & msg)
  : msg_(msg)
  {}
  ::k9_interface::srv::LtmQuery_Response answer(::k9_interface::srv::LtmQuery_Response::_answer_type arg)
  {
    msg_.answer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmQuery_Response msg_;
};

class Init_LtmQuery_Response_success
{
public:
  Init_LtmQuery_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LtmQuery_Response_answer success(::k9_interface::srv::LtmQuery_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LtmQuery_Response_answer(msg_);
  }

private:
  ::k9_interface::srv::LtmQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmQuery_Response>()
{
  return k9_interface::srv::builder::Init_LtmQuery_Response_success();
}

}  // namespace k9_interface


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmQuery_Event_response
{
public:
  explicit Init_LtmQuery_Event_response(::k9_interface::srv::LtmQuery_Event & msg)
  : msg_(msg)
  {}
  ::k9_interface::srv::LtmQuery_Event response(::k9_interface::srv::LtmQuery_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmQuery_Event msg_;
};

class Init_LtmQuery_Event_request
{
public:
  explicit Init_LtmQuery_Event_request(::k9_interface::srv::LtmQuery_Event & msg)
  : msg_(msg)
  {}
  Init_LtmQuery_Event_response request(::k9_interface::srv::LtmQuery_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LtmQuery_Event_response(msg_);
  }

private:
  ::k9_interface::srv::LtmQuery_Event msg_;
};

class Init_LtmQuery_Event_info
{
public:
  Init_LtmQuery_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LtmQuery_Event_request info(::k9_interface::srv::LtmQuery_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LtmQuery_Event_request(msg_);
  }

private:
  ::k9_interface::srv::LtmQuery_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmQuery_Event>()
{
  return k9_interface::srv::builder::Init_LtmQuery_Event_info();
}

}  // namespace k9_interface

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_QUERY__BUILDER_HPP_
