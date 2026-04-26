# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_interfaces:msg/RadarInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarInfo(type):
    """Metaclass of message 'RadarInfo'."""

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
                'radar_interfaces.msg.RadarInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_info

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarInfo(metaclass=Metaclass_RadarInfo):
    """Message class 'RadarInfo'."""

    __slots__ = [
        '_double_vulnerability_chances',
        '_opponent_double_vulnerability_active',
        '_encryption_level',
        '_key_change_enabled',
    ]

    _fields_and_field_types = {
        'double_vulnerability_chances': 'uint8',
        'opponent_double_vulnerability_active': 'boolean',
        'encryption_level': 'uint8',
        'key_change_enabled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.double_vulnerability_chances = kwargs.get('double_vulnerability_chances', int())
        self.opponent_double_vulnerability_active = kwargs.get('opponent_double_vulnerability_active', bool())
        self.encryption_level = kwargs.get('encryption_level', int())
        self.key_change_enabled = kwargs.get('key_change_enabled', bool())

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
        if self.double_vulnerability_chances != other.double_vulnerability_chances:
            return False
        if self.opponent_double_vulnerability_active != other.opponent_double_vulnerability_active:
            return False
        if self.encryption_level != other.encryption_level:
            return False
        if self.key_change_enabled != other.key_change_enabled:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def double_vulnerability_chances(self):
        """Message field 'double_vulnerability_chances'."""
        return self._double_vulnerability_chances

    @double_vulnerability_chances.setter
    def double_vulnerability_chances(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'double_vulnerability_chances' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'double_vulnerability_chances' field must be an unsigned integer in [0, 255]"
        self._double_vulnerability_chances = value

    @builtins.property
    def opponent_double_vulnerability_active(self):
        """Message field 'opponent_double_vulnerability_active'."""
        return self._opponent_double_vulnerability_active

    @opponent_double_vulnerability_active.setter
    def opponent_double_vulnerability_active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'opponent_double_vulnerability_active' field must be of type 'bool'"
        self._opponent_double_vulnerability_active = value

    @builtins.property
    def encryption_level(self):
        """Message field 'encryption_level'."""
        return self._encryption_level

    @encryption_level.setter
    def encryption_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'encryption_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'encryption_level' field must be an unsigned integer in [0, 255]"
        self._encryption_level = value

    @builtins.property
    def key_change_enabled(self):
        """Message field 'key_change_enabled'."""
        return self._key_change_enabled

    @key_change_enabled.setter
    def key_change_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'key_change_enabled' field must be of type 'bool'"
        self._key_change_enabled = value
