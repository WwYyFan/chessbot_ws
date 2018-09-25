// Generated by gencpp from file chessbot_control/RG2_Grip.msg
// DO NOT EDIT!


#ifndef CHESSBOT_CONTROL_MESSAGE_RG2_GRIP_H
#define CHESSBOT_CONTROL_MESSAGE_RG2_GRIP_H

#include <ros/service_traits.h>


#include <chessbot_control/RG2_GripRequest.h>
#include <chessbot_control/RG2_GripResponse.h>


namespace chessbot_control
{

struct RG2_Grip
{

typedef RG2_GripRequest Request;
typedef RG2_GripResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RG2_Grip
} // namespace chessbot_control


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::chessbot_control::RG2_Grip > {
  static const char* value()
  {
    return "e59cc69aa535dfedb8f29528fe2a1de3";
  }

  static const char* value(const ::chessbot_control::RG2_Grip&) { return value(); }
};

template<>
struct DataType< ::chessbot_control::RG2_Grip > {
  static const char* value()
  {
    return "chessbot_control/RG2_Grip";
  }

  static const char* value(const ::chessbot_control::RG2_Grip&) { return value(); }
};


// service_traits::MD5Sum< ::chessbot_control::RG2_GripRequest> should match 
// service_traits::MD5Sum< ::chessbot_control::RG2_Grip > 
template<>
struct MD5Sum< ::chessbot_control::RG2_GripRequest>
{
  static const char* value()
  {
    return MD5Sum< ::chessbot_control::RG2_Grip >::value();
  }
  static const char* value(const ::chessbot_control::RG2_GripRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::chessbot_control::RG2_GripRequest> should match 
// service_traits::DataType< ::chessbot_control::RG2_Grip > 
template<>
struct DataType< ::chessbot_control::RG2_GripRequest>
{
  static const char* value()
  {
    return DataType< ::chessbot_control::RG2_Grip >::value();
  }
  static const char* value(const ::chessbot_control::RG2_GripRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::chessbot_control::RG2_GripResponse> should match 
// service_traits::MD5Sum< ::chessbot_control::RG2_Grip > 
template<>
struct MD5Sum< ::chessbot_control::RG2_GripResponse>
{
  static const char* value()
  {
    return MD5Sum< ::chessbot_control::RG2_Grip >::value();
  }
  static const char* value(const ::chessbot_control::RG2_GripResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::chessbot_control::RG2_GripResponse> should match 
// service_traits::DataType< ::chessbot_control::RG2_Grip > 
template<>
struct DataType< ::chessbot_control::RG2_GripResponse>
{
  static const char* value()
  {
    return DataType< ::chessbot_control::RG2_Grip >::value();
  }
  static const char* value(const ::chessbot_control::RG2_GripResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CHESSBOT_CONTROL_MESSAGE_RG2_GRIP_H
