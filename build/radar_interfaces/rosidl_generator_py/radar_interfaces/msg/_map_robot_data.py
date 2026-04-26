# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_interfaces:msg/MapRobotData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MapRobotData(type):
    """Metaclass of message 'MapRobotData'."""

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
                'radar_interfaces.msg.MapRobotData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__map_robot_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__map_robot_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__map_robot_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__map_robot_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__map_robot_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MapRobotData(metaclass=Metaclass_MapRobotData):
    """Message class 'MapRobotData'."""

    __slots__ = [
        '_opponent_hero_x',
        '_opponent_hero_y',
        '_opponent_engineer_x',
        '_opponent_engineer_y',
        '_opponent_infantry_3_x',
        '_opponent_infantry_3_y',
        '_opponent_infantry_4_x',
        '_opponent_infantry_4_y',
        '_opponent_aerial_x',
        '_opponent_aerial_y',
        '_opponent_sentry_x',
        '_opponent_sentry_y',
        '_ally_hero_x',
        '_ally_hero_y',
        '_ally_engineer_x',
        '_ally_engineer_y',
        '_ally_infantry_3_x',
        '_ally_infantry_3_y',
        '_ally_infantry_4_x',
        '_ally_infantry_4_y',
        '_ally_aerial_x',
        '_ally_aerial_y',
        '_ally_sentry_x',
        '_ally_sentry_y',
    ]

    _fields_and_field_types = {
        'opponent_hero_x': 'uint16',
        'opponent_hero_y': 'uint16',
        'opponent_engineer_x': 'uint16',
        'opponent_engineer_y': 'uint16',
        'opponent_infantry_3_x': 'uint16',
        'opponent_infantry_3_y': 'uint16',
        'opponent_infantry_4_x': 'uint16',
        'opponent_infantry_4_y': 'uint16',
        'opponent_aerial_x': 'uint16',
        'opponent_aerial_y': 'uint16',
        'opponent_sentry_x': 'uint16',
        'opponent_sentry_y': 'uint16',
        'ally_hero_x': 'uint16',
        'ally_hero_y': 'uint16',
        'ally_engineer_x': 'uint16',
        'ally_engineer_y': 'uint16',
        'ally_infantry_3_x': 'uint16',
        'ally_infantry_3_y': 'uint16',
        'ally_infantry_4_x': 'uint16',
        'ally_infantry_4_y': 'uint16',
        'ally_aerial_x': 'uint16',
        'ally_aerial_y': 'uint16',
        'ally_sentry_x': 'uint16',
        'ally_sentry_y': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.opponent_hero_x = kwargs.get('opponent_hero_x', int())
        self.opponent_hero_y = kwargs.get('opponent_hero_y', int())
        self.opponent_engineer_x = kwargs.get('opponent_engineer_x', int())
        self.opponent_engineer_y = kwargs.get('opponent_engineer_y', int())
        self.opponent_infantry_3_x = kwargs.get('opponent_infantry_3_x', int())
        self.opponent_infantry_3_y = kwargs.get('opponent_infantry_3_y', int())
        self.opponent_infantry_4_x = kwargs.get('opponent_infantry_4_x', int())
        self.opponent_infantry_4_y = kwargs.get('opponent_infantry_4_y', int())
        self.opponent_aerial_x = kwargs.get('opponent_aerial_x', int())
        self.opponent_aerial_y = kwargs.get('opponent_aerial_y', int())
        self.opponent_sentry_x = kwargs.get('opponent_sentry_x', int())
        self.opponent_sentry_y = kwargs.get('opponent_sentry_y', int())
        self.ally_hero_x = kwargs.get('ally_hero_x', int())
        self.ally_hero_y = kwargs.get('ally_hero_y', int())
        self.ally_engineer_x = kwargs.get('ally_engineer_x', int())
        self.ally_engineer_y = kwargs.get('ally_engineer_y', int())
        self.ally_infantry_3_x = kwargs.get('ally_infantry_3_x', int())
        self.ally_infantry_3_y = kwargs.get('ally_infantry_3_y', int())
        self.ally_infantry_4_x = kwargs.get('ally_infantry_4_x', int())
        self.ally_infantry_4_y = kwargs.get('ally_infantry_4_y', int())
        self.ally_aerial_x = kwargs.get('ally_aerial_x', int())
        self.ally_aerial_y = kwargs.get('ally_aerial_y', int())
        self.ally_sentry_x = kwargs.get('ally_sentry_x', int())
        self.ally_sentry_y = kwargs.get('ally_sentry_y', int())

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
        if self.opponent_hero_x != other.opponent_hero_x:
            return False
        if self.opponent_hero_y != other.opponent_hero_y:
            return False
        if self.opponent_engineer_x != other.opponent_engineer_x:
            return False
        if self.opponent_engineer_y != other.opponent_engineer_y:
            return False
        if self.opponent_infantry_3_x != other.opponent_infantry_3_x:
            return False
        if self.opponent_infantry_3_y != other.opponent_infantry_3_y:
            return False
        if self.opponent_infantry_4_x != other.opponent_infantry_4_x:
            return False
        if self.opponent_infantry_4_y != other.opponent_infantry_4_y:
            return False
        if self.opponent_aerial_x != other.opponent_aerial_x:
            return False
        if self.opponent_aerial_y != other.opponent_aerial_y:
            return False
        if self.opponent_sentry_x != other.opponent_sentry_x:
            return False
        if self.opponent_sentry_y != other.opponent_sentry_y:
            return False
        if self.ally_hero_x != other.ally_hero_x:
            return False
        if self.ally_hero_y != other.ally_hero_y:
            return False
        if self.ally_engineer_x != other.ally_engineer_x:
            return False
        if self.ally_engineer_y != other.ally_engineer_y:
            return False
        if self.ally_infantry_3_x != other.ally_infantry_3_x:
            return False
        if self.ally_infantry_3_y != other.ally_infantry_3_y:
            return False
        if self.ally_infantry_4_x != other.ally_infantry_4_x:
            return False
        if self.ally_infantry_4_y != other.ally_infantry_4_y:
            return False
        if self.ally_aerial_x != other.ally_aerial_x:
            return False
        if self.ally_aerial_y != other.ally_aerial_y:
            return False
        if self.ally_sentry_x != other.ally_sentry_x:
            return False
        if self.ally_sentry_y != other.ally_sentry_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def opponent_hero_x(self):
        """Message field 'opponent_hero_x'."""
        return self._opponent_hero_x

    @opponent_hero_x.setter
    def opponent_hero_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_hero_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_hero_x' field must be an unsigned integer in [0, 65535]"
        self._opponent_hero_x = value

    @builtins.property
    def opponent_hero_y(self):
        """Message field 'opponent_hero_y'."""
        return self._opponent_hero_y

    @opponent_hero_y.setter
    def opponent_hero_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_hero_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_hero_y' field must be an unsigned integer in [0, 65535]"
        self._opponent_hero_y = value

    @builtins.property
    def opponent_engineer_x(self):
        """Message field 'opponent_engineer_x'."""
        return self._opponent_engineer_x

    @opponent_engineer_x.setter
    def opponent_engineer_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_engineer_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_engineer_x' field must be an unsigned integer in [0, 65535]"
        self._opponent_engineer_x = value

    @builtins.property
    def opponent_engineer_y(self):
        """Message field 'opponent_engineer_y'."""
        return self._opponent_engineer_y

    @opponent_engineer_y.setter
    def opponent_engineer_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_engineer_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_engineer_y' field must be an unsigned integer in [0, 65535]"
        self._opponent_engineer_y = value

    @builtins.property
    def opponent_infantry_3_x(self):
        """Message field 'opponent_infantry_3_x'."""
        return self._opponent_infantry_3_x

    @opponent_infantry_3_x.setter
    def opponent_infantry_3_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_infantry_3_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_infantry_3_x' field must be an unsigned integer in [0, 65535]"
        self._opponent_infantry_3_x = value

    @builtins.property
    def opponent_infantry_3_y(self):
        """Message field 'opponent_infantry_3_y'."""
        return self._opponent_infantry_3_y

    @opponent_infantry_3_y.setter
    def opponent_infantry_3_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_infantry_3_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_infantry_3_y' field must be an unsigned integer in [0, 65535]"
        self._opponent_infantry_3_y = value

    @builtins.property
    def opponent_infantry_4_x(self):
        """Message field 'opponent_infantry_4_x'."""
        return self._opponent_infantry_4_x

    @opponent_infantry_4_x.setter
    def opponent_infantry_4_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_infantry_4_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_infantry_4_x' field must be an unsigned integer in [0, 65535]"
        self._opponent_infantry_4_x = value

    @builtins.property
    def opponent_infantry_4_y(self):
        """Message field 'opponent_infantry_4_y'."""
        return self._opponent_infantry_4_y

    @opponent_infantry_4_y.setter
    def opponent_infantry_4_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_infantry_4_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_infantry_4_y' field must be an unsigned integer in [0, 65535]"
        self._opponent_infantry_4_y = value

    @builtins.property
    def opponent_aerial_x(self):
        """Message field 'opponent_aerial_x'."""
        return self._opponent_aerial_x

    @opponent_aerial_x.setter
    def opponent_aerial_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_aerial_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_aerial_x' field must be an unsigned integer in [0, 65535]"
        self._opponent_aerial_x = value

    @builtins.property
    def opponent_aerial_y(self):
        """Message field 'opponent_aerial_y'."""
        return self._opponent_aerial_y

    @opponent_aerial_y.setter
    def opponent_aerial_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_aerial_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_aerial_y' field must be an unsigned integer in [0, 65535]"
        self._opponent_aerial_y = value

    @builtins.property
    def opponent_sentry_x(self):
        """Message field 'opponent_sentry_x'."""
        return self._opponent_sentry_x

    @opponent_sentry_x.setter
    def opponent_sentry_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_sentry_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_sentry_x' field must be an unsigned integer in [0, 65535]"
        self._opponent_sentry_x = value

    @builtins.property
    def opponent_sentry_y(self):
        """Message field 'opponent_sentry_y'."""
        return self._opponent_sentry_y

    @opponent_sentry_y.setter
    def opponent_sentry_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opponent_sentry_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'opponent_sentry_y' field must be an unsigned integer in [0, 65535]"
        self._opponent_sentry_y = value

    @builtins.property
    def ally_hero_x(self):
        """Message field 'ally_hero_x'."""
        return self._ally_hero_x

    @ally_hero_x.setter
    def ally_hero_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_hero_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_hero_x' field must be an unsigned integer in [0, 65535]"
        self._ally_hero_x = value

    @builtins.property
    def ally_hero_y(self):
        """Message field 'ally_hero_y'."""
        return self._ally_hero_y

    @ally_hero_y.setter
    def ally_hero_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_hero_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_hero_y' field must be an unsigned integer in [0, 65535]"
        self._ally_hero_y = value

    @builtins.property
    def ally_engineer_x(self):
        """Message field 'ally_engineer_x'."""
        return self._ally_engineer_x

    @ally_engineer_x.setter
    def ally_engineer_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_engineer_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_engineer_x' field must be an unsigned integer in [0, 65535]"
        self._ally_engineer_x = value

    @builtins.property
    def ally_engineer_y(self):
        """Message field 'ally_engineer_y'."""
        return self._ally_engineer_y

    @ally_engineer_y.setter
    def ally_engineer_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_engineer_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_engineer_y' field must be an unsigned integer in [0, 65535]"
        self._ally_engineer_y = value

    @builtins.property
    def ally_infantry_3_x(self):
        """Message field 'ally_infantry_3_x'."""
        return self._ally_infantry_3_x

    @ally_infantry_3_x.setter
    def ally_infantry_3_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_infantry_3_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_infantry_3_x' field must be an unsigned integer in [0, 65535]"
        self._ally_infantry_3_x = value

    @builtins.property
    def ally_infantry_3_y(self):
        """Message field 'ally_infantry_3_y'."""
        return self._ally_infantry_3_y

    @ally_infantry_3_y.setter
    def ally_infantry_3_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_infantry_3_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_infantry_3_y' field must be an unsigned integer in [0, 65535]"
        self._ally_infantry_3_y = value

    @builtins.property
    def ally_infantry_4_x(self):
        """Message field 'ally_infantry_4_x'."""
        return self._ally_infantry_4_x

    @ally_infantry_4_x.setter
    def ally_infantry_4_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_infantry_4_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_infantry_4_x' field must be an unsigned integer in [0, 65535]"
        self._ally_infantry_4_x = value

    @builtins.property
    def ally_infantry_4_y(self):
        """Message field 'ally_infantry_4_y'."""
        return self._ally_infantry_4_y

    @ally_infantry_4_y.setter
    def ally_infantry_4_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_infantry_4_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_infantry_4_y' field must be an unsigned integer in [0, 65535]"
        self._ally_infantry_4_y = value

    @builtins.property
    def ally_aerial_x(self):
        """Message field 'ally_aerial_x'."""
        return self._ally_aerial_x

    @ally_aerial_x.setter
    def ally_aerial_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_aerial_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_aerial_x' field must be an unsigned integer in [0, 65535]"
        self._ally_aerial_x = value

    @builtins.property
    def ally_aerial_y(self):
        """Message field 'ally_aerial_y'."""
        return self._ally_aerial_y

    @ally_aerial_y.setter
    def ally_aerial_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_aerial_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_aerial_y' field must be an unsigned integer in [0, 65535]"
        self._ally_aerial_y = value

    @builtins.property
    def ally_sentry_x(self):
        """Message field 'ally_sentry_x'."""
        return self._ally_sentry_x

    @ally_sentry_x.setter
    def ally_sentry_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_sentry_x' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_sentry_x' field must be an unsigned integer in [0, 65535]"
        self._ally_sentry_x = value

    @builtins.property
    def ally_sentry_y(self):
        """Message field 'ally_sentry_y'."""
        return self._ally_sentry_y

    @ally_sentry_y.setter
    def ally_sentry_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ally_sentry_y' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ally_sentry_y' field must be an unsigned integer in [0, 65535]"
        self._ally_sentry_y = value
