// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from k9_interface:srv/LtmRemember.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "k9_interface/srv/ltm_remember.hpp"


#ifndef K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__STRUCT_HPP_
#define K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__k9_interface__srv__LtmRemember_Request __attribute__((deprecated))
#else
# define DEPRECATED__k9_interface__srv__LtmRemember_Request __declspec(deprecated)
#endif

namespace k9_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LtmRemember_Request_
{
  using Type = LtmRemember_Request_<ContainerAllocator>;

  explicit LtmRemember_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LtmRemember_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _up_to_twenty_topics_of_512_chars_type =
    rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 20, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _up_to_twenty_topics_of_512_chars_type up_to_twenty_topics_of_512_chars;

  // setters for named parameter idiom
  Type & set__up_to_twenty_topics_of_512_chars(
    const rosidl_runtime_cpp::BoundedVector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, 20, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->up_to_twenty_topics_of_512_chars = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    k9_interface::srv::LtmRemember_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const k9_interface::srv::LtmRemember_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<k9_interface::srv::LtmRemember_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<k9_interface::srv::LtmRemember_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      k9_interface::srv::LtmRemember_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<k9_interface::srv::LtmRemember_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      k9_interface::srv::LtmRemember_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<k9_interface::srv::LtmRemember_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<k9_interface::srv::LtmRemember_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<k9_interface::srv::LtmRemember_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__k9_interface__srv__LtmRemember_Request
    std::shared_ptr<k9_interface::srv::LtmRemember_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__k9_interface__srv__LtmRemember_Request
    std::shared_ptr<k9_interface::srv::LtmRemember_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LtmRemember_Request_ & other) const
  {
    if (this->up_to_twenty_topics_of_512_chars != other.up_to_twenty_topics_of_512_chars) {
      return false;
    }
    return true;
  }
  bool operator!=(const LtmRemember_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LtmRemember_Request_

// alias to use template instance with default allocator
using LtmRemember_Request =
  k9_interface::srv::LtmRemember_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace k9_interface


#ifndef _WIN32
# define DEPRECATED__k9_interface__srv__LtmRemember_Response __attribute__((deprecated))
#else
# define DEPRECATED__k9_interface__srv__LtmRemember_Response __declspec(deprecated)
#endif

namespace k9_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LtmRemember_Response_
{
  using Type = LtmRemember_Response_<ContainerAllocator>;

  explicit LtmRemember_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->facts_remembered = 0;
    }
  }

  explicit LtmRemember_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->facts_remembered = 0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _facts_remembered_type =
    uint8_t;
  _facts_remembered_type facts_remembered;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__facts_remembered(
    const uint8_t & _arg)
  {
    this->facts_remembered = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    k9_interface::srv::LtmRemember_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const k9_interface::srv::LtmRemember_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<k9_interface::srv::LtmRemember_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<k9_interface::srv::LtmRemember_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      k9_interface::srv::LtmRemember_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<k9_interface::srv::LtmRemember_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      k9_interface::srv::LtmRemember_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<k9_interface::srv::LtmRemember_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<k9_interface::srv::LtmRemember_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<k9_interface::srv::LtmRemember_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__k9_interface__srv__LtmRemember_Response
    std::shared_ptr<k9_interface::srv::LtmRemember_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__k9_interface__srv__LtmRemember_Response
    std::shared_ptr<k9_interface::srv::LtmRemember_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LtmRemember_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->facts_remembered != other.facts_remembered) {
      return false;
    }
    return true;
  }
  bool operator!=(const LtmRemember_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LtmRemember_Response_

// alias to use template instance with default allocator
using LtmRemember_Response =
  k9_interface::srv::LtmRemember_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace k9_interface


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__k9_interface__srv__LtmRemember_Event __attribute__((deprecated))
#else
# define DEPRECATED__k9_interface__srv__LtmRemember_Event __declspec(deprecated)
#endif

namespace k9_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LtmRemember_Event_
{
  using Type = LtmRemember_Event_<ContainerAllocator>;

  explicit LtmRemember_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit LtmRemember_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<k9_interface::srv::LtmRemember_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<k9_interface::srv::LtmRemember_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<k9_interface::srv::LtmRemember_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<k9_interface::srv::LtmRemember_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<k9_interface::srv::LtmRemember_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<k9_interface::srv::LtmRemember_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<k9_interface::srv::LtmRemember_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<k9_interface::srv::LtmRemember_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    k9_interface::srv::LtmRemember_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const k9_interface::srv::LtmRemember_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<k9_interface::srv::LtmRemember_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<k9_interface::srv::LtmRemember_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      k9_interface::srv::LtmRemember_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<k9_interface::srv::LtmRemember_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      k9_interface::srv::LtmRemember_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<k9_interface::srv::LtmRemember_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<k9_interface::srv::LtmRemember_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<k9_interface::srv::LtmRemember_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__k9_interface__srv__LtmRemember_Event
    std::shared_ptr<k9_interface::srv::LtmRemember_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__k9_interface__srv__LtmRemember_Event
    std::shared_ptr<k9_interface::srv::LtmRemember_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LtmRemember_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const LtmRemember_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LtmRemember_Event_

// alias to use template instance with default allocator
using LtmRemember_Event =
  k9_interface::srv::LtmRemember_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace k9_interface

namespace k9_interface
{

namespace srv
{

struct LtmRemember
{
  using Request = k9_interface::srv::LtmRemember_Request;
  using Response = k9_interface::srv::LtmRemember_Response;
  using Event = k9_interface::srv::LtmRemember_Event;
};

}  // namespace srv

}  // namespace k9_interface

#endif  // K9_INTERFACE__SRV__DETAIL__LTM_REMEMBER__STRUCT_HPP_
