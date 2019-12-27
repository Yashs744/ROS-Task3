// Generated by gencpp from file duckietown_msgs/VehicleCorners.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_VEHICLECORNERS_H
#define DUCKIETOWN_MSGS_MESSAGE_VEHICLECORNERS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point32.h>
#include <std_msgs/Bool.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct VehicleCorners_
{
  typedef VehicleCorners_<ContainerAllocator> Type;

  VehicleCorners_()
    : header()
    , corners()
    , detection()
    , H(0)
    , W(0)  {
    }
  VehicleCorners_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , corners(_alloc)
    , detection(_alloc)
    , H(0)
    , W(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Point32_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point32_<ContainerAllocator> >::other >  _corners_type;
  _corners_type corners;

   typedef  ::std_msgs::Bool_<ContainerAllocator>  _detection_type;
  _detection_type detection;

   typedef int32_t _H_type;
  _H_type H;

   typedef int32_t _W_type;
  _W_type W;





  typedef boost::shared_ptr< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleCorners_

typedef ::duckietown_msgs::VehicleCorners_<std::allocator<void> > VehicleCorners;

typedef boost::shared_ptr< ::duckietown_msgs::VehicleCorners > VehicleCornersPtr;
typedef boost::shared_ptr< ::duckietown_msgs::VehicleCorners const> VehicleCornersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::VehicleCorners_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/home/yash/ROS Task3/AD-simulator/ros/catkin_ws/src/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f601f02846ab710f0645608b8ce77e71";
  }

  static const char* value(const ::duckietown_msgs::VehicleCorners_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf601f02846ab710fULL;
  static const uint64_t static_value2 = 0x0645608b8ce77e71ULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/VehicleCorners";
  }

  static const char* value(const ::duckietown_msgs::VehicleCorners_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"geometry_msgs/Point32[] corners\n"
"std_msgs/Bool detection\n"
"int32 H\n"
"int32 W\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: std_msgs/Bool\n"
"bool data\n"
;
  }

  static const char* value(const ::duckietown_msgs::VehicleCorners_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.corners);
      stream.next(m.detection);
      stream.next(m.H);
      stream.next(m.W);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleCorners_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::VehicleCorners_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::VehicleCorners_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "corners[]" << std::endl;
    for (size_t i = 0; i < v.corners.size(); ++i)
    {
      s << indent << "  corners[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point32_<ContainerAllocator> >::stream(s, indent + "    ", v.corners[i]);
    }
    s << indent << "detection: ";
    s << std::endl;
    Printer< ::std_msgs::Bool_<ContainerAllocator> >::stream(s, indent + "  ", v.detection);
    s << indent << "H: ";
    Printer<int32_t>::stream(s, indent + "  ", v.H);
    s << indent << "W: ";
    Printer<int32_t>::stream(s, indent + "  ", v.W);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_VEHICLECORNERS_H
