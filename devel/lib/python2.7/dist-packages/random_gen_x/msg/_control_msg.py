# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from random_gen_x/control_msg.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class control_msg(genpy.Message):
  _md5sum = "76856e6a7501ff768ebedc7d6ea94795"
  _type = "random_gen_x/control_msg"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """std_msgs/Float64 rand_x
std_msgs/Float64 rand_y
std_msgs/Float64 rand_yaw
================================================================================
MSG: std_msgs/Float64
float64 data"""
  __slots__ = ['rand_x','rand_y','rand_yaw']
  _slot_types = ['std_msgs/Float64','std_msgs/Float64','std_msgs/Float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       rand_x,rand_y,rand_yaw

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(control_msg, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.rand_x is None:
        self.rand_x = std_msgs.msg.Float64()
      if self.rand_y is None:
        self.rand_y = std_msgs.msg.Float64()
      if self.rand_yaw is None:
        self.rand_yaw = std_msgs.msg.Float64()
    else:
      self.rand_x = std_msgs.msg.Float64()
      self.rand_y = std_msgs.msg.Float64()
      self.rand_yaw = std_msgs.msg.Float64()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3d().pack(_x.rand_x.data, _x.rand_y.data, _x.rand_yaw.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.rand_x is None:
        self.rand_x = std_msgs.msg.Float64()
      if self.rand_y is None:
        self.rand_y = std_msgs.msg.Float64()
      if self.rand_yaw is None:
        self.rand_yaw = std_msgs.msg.Float64()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.rand_x.data, _x.rand_y.data, _x.rand_yaw.data,) = _get_struct_3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3d().pack(_x.rand_x.data, _x.rand_y.data, _x.rand_yaw.data))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.rand_x is None:
        self.rand_x = std_msgs.msg.Float64()
      if self.rand_y is None:
        self.rand_y = std_msgs.msg.Float64()
      if self.rand_yaw is None:
        self.rand_yaw = std_msgs.msg.Float64()
      end = 0
      _x = self
      start = end
      end += 24
      (_x.rand_x.data, _x.rand_y.data, _x.rand_yaw.data,) = _get_struct_3d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3d = None
def _get_struct_3d():
    global _struct_3d
    if _struct_3d is None:
        _struct_3d = struct.Struct("<3d")
    return _struct_3d
