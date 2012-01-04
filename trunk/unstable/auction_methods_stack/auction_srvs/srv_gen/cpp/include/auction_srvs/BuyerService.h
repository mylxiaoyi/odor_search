/* Auto-generated by genmsg_cpp for file /home/joaoquintas/ros_workspace/SRC/auction_methods_stack/auction_srvs/srv/BuyerService.srv */
#ifndef AUCTION_SRVS_SERVICE_BUYERSERVICE_H
#define AUCTION_SRVS_SERVICE_BUYERSERVICE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "auction_msgs/Auction.h"



namespace auction_srvs
{
template <class ContainerAllocator>
struct BuyerServiceRequest_ {
  typedef BuyerServiceRequest_<ContainerAllocator> Type;

  BuyerServiceRequest_()
  : auctioneer_node()
  , sending_node()
  , nodes_collected()
  , auction_data()
  {
  }

  BuyerServiceRequest_(const ContainerAllocator& _alloc)
  : auctioneer_node(_alloc)
  , sending_node(_alloc)
  , nodes_collected(_alloc)
  , auction_data(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _auctioneer_node_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  auctioneer_node;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sending_node_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  sending_node;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _nodes_collected_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  nodes_collected;

  typedef  ::auction_msgs::Auction_<ContainerAllocator>  _auction_data_type;
   ::auction_msgs::Auction_<ContainerAllocator>  auction_data;


private:
  static const char* __s_getDataType_() { return "auction_srvs/BuyerServiceRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "7cd34bdf13dec94669878da207bcd649"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "827a8d5b8806f1bbb1bc47a119c94d69"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
\n\
string auctioneer_node\n\
string sending_node\n\
string nodes_collected\n\
auction_msgs/Auction auction_data\n\
\n\
\n\
================================================================================\n\
MSG: auction_msgs/Auction\n\
Header header\n\
string command\n\
string task_type_name\n\
string subject\n\
string metrics\n\
duration length\n\
geometry_msgs/Point task_location\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, auctioneer_node);
    ros::serialization::serialize(stream, sending_node);
    ros::serialization::serialize(stream, nodes_collected);
    ros::serialization::serialize(stream, auction_data);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, auctioneer_node);
    ros::serialization::deserialize(stream, sending_node);
    ros::serialization::deserialize(stream, nodes_collected);
    ros::serialization::deserialize(stream, auction_data);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(auctioneer_node);
    size += ros::serialization::serializationLength(sending_node);
    size += ros::serialization::serializationLength(nodes_collected);
    size += ros::serialization::serializationLength(auction_data);
    return size;
  }

  typedef boost::shared_ptr< ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::auction_srvs::BuyerServiceRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct BuyerServiceRequest
typedef  ::auction_srvs::BuyerServiceRequest_<std::allocator<void> > BuyerServiceRequest;

typedef boost::shared_ptr< ::auction_srvs::BuyerServiceRequest> BuyerServiceRequestPtr;
typedef boost::shared_ptr< ::auction_srvs::BuyerServiceRequest const> BuyerServiceRequestConstPtr;


template <class ContainerAllocator>
struct BuyerServiceResponse_ {
  typedef BuyerServiceResponse_<ContainerAllocator> Type;

  BuyerServiceResponse_()
  : response_info()
  {
  }

  BuyerServiceResponse_(const ContainerAllocator& _alloc)
  : response_info(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _response_info_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  response_info;


private:
  static const char* __s_getDataType_() { return "auction_srvs/BuyerServiceResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "3807fca4b87e6d8139990870471dd195"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "827a8d5b8806f1bbb1bc47a119c94d69"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
\n\
string response_info\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, response_info);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, response_info);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(response_info);
    return size;
  }

  typedef boost::shared_ptr< ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::auction_srvs::BuyerServiceResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct BuyerServiceResponse
typedef  ::auction_srvs::BuyerServiceResponse_<std::allocator<void> > BuyerServiceResponse;

typedef boost::shared_ptr< ::auction_srvs::BuyerServiceResponse> BuyerServiceResponsePtr;
typedef boost::shared_ptr< ::auction_srvs::BuyerServiceResponse const> BuyerServiceResponseConstPtr;

struct BuyerService
{

typedef BuyerServiceRequest Request;
typedef BuyerServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct BuyerService
} // namespace auction_srvs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::auction_srvs::BuyerServiceRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "7cd34bdf13dec94669878da207bcd649";
  }

  static const char* value(const  ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x7cd34bdf13dec946ULL;
  static const uint64_t static_value2 = 0x69878da207bcd649ULL;
};

template<class ContainerAllocator>
struct DataType< ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "auction_srvs/BuyerServiceRequest";
  }

  static const char* value(const  ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
string auctioneer_node\n\
string sending_node\n\
string nodes_collected\n\
auction_msgs/Auction auction_data\n\
\n\
\n\
================================================================================\n\
MSG: auction_msgs/Auction\n\
Header header\n\
string command\n\
string task_type_name\n\
string subject\n\
string metrics\n\
duration length\n\
geometry_msgs/Point task_location\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
";
  }

  static const char* value(const  ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::auction_srvs::BuyerServiceResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3807fca4b87e6d8139990870471dd195";
  }

  static const char* value(const  ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3807fca4b87e6d81ULL;
  static const uint64_t static_value2 = 0x39990870471dd195ULL;
};

template<class ContainerAllocator>
struct DataType< ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "auction_srvs/BuyerServiceResponse";
  }

  static const char* value(const  ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
string response_info\n\
\n\
";
  }

  static const char* value(const  ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::auction_srvs::BuyerServiceRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.auctioneer_node);
    stream.next(m.sending_node);
    stream.next(m.nodes_collected);
    stream.next(m.auction_data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct BuyerServiceRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::auction_srvs::BuyerServiceResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.response_info);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct BuyerServiceResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<auction_srvs::BuyerService> {
  static const char* value() 
  {
    return "827a8d5b8806f1bbb1bc47a119c94d69";
  }

  static const char* value(const auction_srvs::BuyerService&) { return value(); } 
};

template<>
struct DataType<auction_srvs::BuyerService> {
  static const char* value() 
  {
    return "auction_srvs/BuyerService";
  }

  static const char* value(const auction_srvs::BuyerService&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<auction_srvs::BuyerServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "827a8d5b8806f1bbb1bc47a119c94d69";
  }

  static const char* value(const auction_srvs::BuyerServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<auction_srvs::BuyerServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "auction_srvs/BuyerService";
  }

  static const char* value(const auction_srvs::BuyerServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<auction_srvs::BuyerServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "827a8d5b8806f1bbb1bc47a119c94d69";
  }

  static const char* value(const auction_srvs::BuyerServiceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<auction_srvs::BuyerServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "auction_srvs/BuyerService";
  }

  static const char* value(const auction_srvs::BuyerServiceResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // AUCTION_SRVS_SERVICE_BUYERSERVICE_H

