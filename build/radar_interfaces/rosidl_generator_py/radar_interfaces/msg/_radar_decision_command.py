# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_interfaces:msg/RadarDecisionCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarDecisionCommand(type):
    """Metaclass of message 'RadarDecisionCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('radar_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'radar_interfaces.msg.RadarDecisionCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_decision_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_decision_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_decision_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_decision_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_decision_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarDecisionCommand(metaclass=Metaclass_RadarDecisionCommand):
    """Message class 'RadarDecisionCommand'."""

    __slots__ = [
        '_sender_id',
        '_receiver_id',
        '_double_vulnerability_request',
        '_password_command_type',
        '_password',
    ]

    _fields_and_field_types = {
        'sender_id': 'uint16',
        'receiver_id': 'uint16',
        'double_vulnerability_request': 'uint8',
        'password_command_type': 'uint8',
        'password': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sender_id = kwargs.get('sender_id', int())
        self.receiver_id = kwargs.get('receiver_id', int())
        self.double_vulnerability_request = kwargs.get('double_vulnerability_request', int())
        self.password_command_type = kwargs.get('password_command_type', int())
        self.password = kwargs.get('password', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.sender_id != other.sender_id:
            return False
        if self.receiver_id != other.receiver_id:
            return False
        if self.double_vulnerability_request != other.double_vulnerability_request:
            return False
        if self.password_command_type != other.password_command_type:
            return False
        if self.password != other.password:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def sender_id(self):
        """Message field 'sender_id'."""
        return self._sender_id

    @sender_id.setter
    def sender_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sender_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sender_id' field must be an unsigned integer in [0, 65535]"
        self._sender_id = value

    @builtins.property
    def receiver_id(self):
        """Message field 'receiver_id'."""
        return self._receiver_id

    @receiver_id.setter
    def receiver_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'receiver_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'receiver_id' field must be an unsigned integer in [0, 65535]"
        self._receiver_id = value

    @builtins.property
    def double_vulnerability_request(self):
        """Message field 'double_vulnerability_request'."""
        return self._double_vulnerability_request

    @double_vulnerability_request.setter
    def double_vulnerability_request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'double_vulnerability_request' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'double_vulnerability_request' field must be an unsigned integer in [0, 255]"
        self._double_vulnerability_request = value

    @builtins.property
    def password_command_type(self):
        """Message field 'password_command_type'."""
        return self._password_command_type

    @password_command_type.setter
    def password_command_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'password_command_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'password_command_type' field must be an unsigned integer in [0, 255]"
        self._password_command_type = value

    @builtins.property
    def password(self):
        """Message field 'password'."""
        return self._password

    @password.setter
    def password(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'password' field must be of type 'str'"
        self._password = value
