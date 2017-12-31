// Generated by gencpp from file dynamixel_msgs/MotorState.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_MSGS_MESSAGE_MOTORSTATE_H
#define DYNAMIXEL_MSGS_MESSAGE_MOTORSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamixel_msgs
{
template <class ContainerAllocator>
struct MotorState_
{
  typedef MotorState_<ContainerAllocator> Type;

  MotorState_()
    : timestamp(0.0)
    , id(0)
    , goal(0)
    , position(0)
    , error(0)
    , speed(0)
    , load(0.0)
    , voltage(0.0)
    , temperature(0)
    , moving(false)  {
    }
  MotorState_(const ContainerAllocator& _alloc)
    : timestamp(0.0)
    , id(0)
    , goal(0)
    , position(0)
    , error(0)
    , speed(0)
    , load(0.0)
    , voltage(0.0)
    , temperature(0)
    , moving(false)  {
  (void)_alloc;
    }



   typedef double _timestamp_type;
  _timestamp_type timestamp;

   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _goal_type;
  _goal_type goal;

   typedef int32_t _position_type;
  _position_type position;

   typedef int32_t _error_type;
  _error_type error;

   typedef int32_t _speed_type;
  _speed_type speed;

   typedef double _load_type;
  _load_type load;

   typedef double _voltage_type;
  _voltage_type voltage;

   typedef int32_t _temperature_type;
  _temperature_type temperature;

   typedef uint8_t _moving_type;
  _moving_type moving;




  typedef boost::shared_ptr< ::dynamixel_msgs::MotorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_msgs::MotorState_<ContainerAllocator> const> ConstPtr;

}; // struct MotorState_

typedef ::dynamixel_msgs::MotorState_<std::allocator<void> > MotorState;

typedef boost::shared_ptr< ::dynamixel_msgs::MotorState > MotorStatePtr;
typedef boost::shared_ptr< ::dynamixel_msgs::MotorState const> MotorStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_msgs::MotorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_msgs::MotorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dynamixel_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dynamixel_msgs': ['/home/luo/python_ws/src/dynamixel_motor/dynamixel_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_msgs::MotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_msgs::MotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_msgs::MotorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_msgs::MotorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_msgs::MotorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_msgs::MotorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1cefdc3ff0c7d52e475886024476b74d";
  }

  static const char* value(const ::dynamixel_msgs::MotorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1cefdc3ff0c7d52eULL;
  static const uint64_t static_value2 = 0x475886024476b74dULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_msgs/MotorState";
  }

  static const char* value(const ::dynamixel_msgs::MotorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_msgs::MotorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 timestamp   # motor state is at this time\n\
int32 id            # motor id\n\
int32 goal          # commanded position (in encoder units)\n\
int32 position      # current position (in encoder units)\n\
int32 error         # difference between current and goal positions\n\
int32 speed         # current speed (0.111 rpm per unit)\n\
float64 load        # current load - ratio of applied torque over maximum torque\n\
float64 voltage     # current voltage (V)\n\
int32 temperature   # current temperature (degrees Celsius)\n\
bool moving         # whether the motor is currently in motion\n\
";
  }

  static const char* value(const ::dynamixel_msgs::MotorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_msgs::MotorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.id);
      stream.next(m.goal);
      stream.next(m.position);
      stream.next(m.error);
      stream.next(m.speed);
      stream.next(m.load);
      stream.next(m.voltage);
      stream.next(m.temperature);
      stream.next(m.moving);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MotorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_msgs::MotorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_msgs::MotorState_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<double>::stream(s, indent + "  ", v.timestamp);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "goal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.goal);
    s << indent << "position: ";
    Printer<int32_t>::stream(s, indent + "  ", v.position);
    s << indent << "error: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error);
    s << indent << "speed: ";
    Printer<int32_t>::stream(s, indent + "  ", v.speed);
    s << indent << "load: ";
    Printer<double>::stream(s, indent + "  ", v.load);
    s << indent << "voltage: ";
    Printer<double>::stream(s, indent + "  ", v.voltage);
    s << indent << "temperature: ";
    Printer<int32_t>::stream(s, indent + "  ", v.temperature);
    s << indent << "moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.moving);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_MSGS_MESSAGE_MOTORSTATE_H
