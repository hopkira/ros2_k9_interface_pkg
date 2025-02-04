// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from k9_interface:srv/LtmSetModel.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_set_model.hpp"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_SET_MODEL__BUILDER_HPP_
#define K9_INTERFACE__SRV__DETAIL__LTM_SET_MODEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "k9_interface/srv/detail/ltm_set_model__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmSetModel_Request_model_name
{
public:
  explicit Init_LtmSetModel_Request_model_name(::k9_interface::srv::LtmSetModel_Request & msg)
  : msg_(msg)
  {}
  ::k9_interface::srv::LtmSetModel_Request model_name(::k9_interface::srv::LtmSetModel_Request::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmSetModel_Request msg_;
};

class Init_LtmSetModel_Request_model_type
{
public:
  Init_LtmSetModel_Request_model_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LtmSetModel_Request_model_name model_type(::k9_interface::srv::LtmSetModel_Request::_model_type_type arg)
  {
    msg_.model_type = std::move(arg);
    return Init_LtmSetModel_Request_model_name(msg_);
  }

private:
  ::k9_interface::srv::LtmSetModel_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmSetModel_Request>()
{
  return k9_interface::srv::builder::Init_LtmSetModel_Request_model_type();
}

}  // namespace k9_interface


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmSetModel_Response_success
{
public:
  Init_LtmSetModel_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::k9_interface::srv::LtmSetModel_Response success(::k9_interface::srv::LtmSetModel_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmSetModel_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmSetModel_Response>()
{
  return k9_interface::srv::builder::Init_LtmSetModel_Response_success();
}

}  // namespace k9_interface


namespace k9_interface
{

namespace srv
{

namespace builder
{

class Init_LtmSetModel_Event_response
{
public:
  explicit Init_LtmSetModel_Event_response(::k9_interface::srv::LtmSetModel_Event & msg)
  : msg_(msg)
  {}
  ::k9_interface::srv::LtmSetModel_Event response(::k9_interface::srv::LtmSetModel_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::k9_interface::srv::LtmSetModel_Event msg_;
};

class Init_LtmSetModel_Event_request
{
public:
  explicit Init_LtmSetModel_Event_request(::k9_interface::srv::LtmSetModel_Event & msg)
  : msg_(msg)
  {}
  Init_LtmSetModel_Event_response request(::k9_interface::srv::LtmSetModel_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LtmSetModel_Event_response(msg_);
  }

private:
  ::k9_interface::srv::LtmSetModel_Event msg_;
};

class Init_LtmSetModel_Event_info
{
public:
  Init_LtmSetModel_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LtmSetModel_Event_request info(::k9_interface::srv::LtmSetModel_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LtmSetModel_Event_request(msg_);
  }

private:
  ::k9_interface::srv::LtmSetModel_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::k9_interface::srv::LtmSetModel_Event>()
{
  return k9_interface::srv::builder::Init_LtmSetModel_Event_info();
}

}  // namespace k9_interface

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_SET_MODEL__BUILDER_HPP_
