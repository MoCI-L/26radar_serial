# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_interfaces:msg/RadarMarkProgress.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadarMarkProgress(type):
    """Metaclass of message 'RadarMarkProgress'."""

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
                'radar_interfaces.msg.RadarMarkProgress')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radar_mark_progress
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radar_mark_progress
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radar_mark_progress
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radar_mark_progress
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radar_mark_progress

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadarMarkProgress(metaclass=Metaclass_RadarMarkProgress):
    """Message class 'RadarMarkProgress'."""

    __slots__ = [
        '_enemy_hero_marked',
        '_enemy_engineer_marked',
        '_enemy_infantry_3_marked',
        '_enemy_infantry_4_marked',
        '_enemy_aerial_marked',
        '_enemy_sentry_marked',
        '_ally_hero_marked',
        '_ally_engineer_marked',
        '_ally_infantry_3_marked',
        '_ally_infantry_4_marked',
        '_ally_aerial_marked',
        '_ally_sentry_marked',
    ]

    _fields_and_field_types = {
        'enemy_hero_marked': 'boolean',
        'enemy_engineer_marked': 'boolean',
        'enemy_infantry_3_marked': 'boolean',
        'enemy_infantry_4_marked': 'boolean',
        'enemy_aerial_marked': 'boolean',
        'enemy_sentry_marked': 'boolean',
        'ally_hero_marked': 'boolean',
        'ally_engineer_marked': 'boolean',
        'ally_infantry_3_marked': 'boolean',
        'ally_infantry_4_marked': 'boolean',
        'ally_aerial_marked': 'boolean',
        'ally_sentry_marked': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.enemy_hero_marked = kwargs.get('enemy_hero_marked', bool())
        self.enemy_engineer_marked = kwargs.get('enemy_engineer_marked', bool())
        self.enemy_infantry_3_marked = kwargs.get('enemy_infantry_3_marked', bool())
        self.enemy_infantry_4_marked = kwargs.get('enemy_infantry_4_marked', bool())
        self.enemy_aerial_marked = kwargs.get('enemy_aerial_marked', bool())
        self.enemy_sentry_marked = kwargs.get('enemy_sentry_marked', bool())
        self.ally_hero_marked = kwargs.get('ally_hero_marked', bool())
        self.ally_engineer_marked = kwargs.get('ally_engineer_marked', bool())
        self.ally_infantry_3_marked = kwargs.get('ally_infantry_3_marked', bool())
        self.ally_infantry_4_marked = kwargs.get('ally_infantry_4_marked', bool())
        self.ally_aerial_marked = kwargs.get('ally_aerial_marked', bool())
        self.ally_sentry_marked = kwargs.get('ally_sentry_marked', bool())

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
        if self.enemy_hero_marked != other.enemy_hero_marked:
            return False
        if self.enemy_engineer_marked != other.enemy_engineer_marked:
            return False
        if self.enemy_infantry_3_marked != other.enemy_infantry_3_marked:
            return False
        if self.enemy_infantry_4_marked != other.enemy_infantry_4_marked:
            return False
        if self.enemy_aerial_marked != other.enemy_aerial_marked:
            return False
        if self.enemy_sentry_marked != other.enemy_sentry_marked:
            return False
        if self.ally_hero_marked != other.ally_hero_marked:
            return False
        if self.ally_engineer_marked != other.ally_engineer_marked:
            return False
        if self.ally_infantry_3_marked != other.ally_infantry_3_marked:
            return False
        if self.ally_infantry_4_marked != other.ally_infantry_4_marked:
            return False
        if self.ally_aerial_marked != other.ally_aerial_marked:
            return False
        if self.ally_sentry_marked != other.ally_sentry_marked:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def enemy_hero_marked(self):
        """Message field 'enemy_hero_marked'."""
        return self._enemy_hero_marked

    @enemy_hero_marked.setter
    def enemy_hero_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_hero_marked' field must be of type 'bool'"
        self._enemy_hero_marked = value

    @builtins.property
    def enemy_engineer_marked(self):
        """Message field 'enemy_engineer_marked'."""
        return self._enemy_engineer_marked

    @enemy_engineer_marked.setter
    def enemy_engineer_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_engineer_marked' field must be of type 'bool'"
        self._enemy_engineer_marked = value

    @builtins.property
    def enemy_infantry_3_marked(self):
        """Message field 'enemy_infantry_3_marked'."""
        return self._enemy_infantry_3_marked

    @enemy_infantry_3_marked.setter
    def enemy_infantry_3_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_infantry_3_marked' field must be of type 'bool'"
        self._enemy_infantry_3_marked = value

    @builtins.property
    def enemy_infantry_4_marked(self):
        """Message field 'enemy_infantry_4_marked'."""
        return self._enemy_infantry_4_marked

    @enemy_infantry_4_marked.setter
    def enemy_infantry_4_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_infantry_4_marked' field must be of type 'bool'"
        self._enemy_infantry_4_marked = value

    @builtins.property
    def enemy_aerial_marked(self):
        """Message field 'enemy_aerial_marked'."""
        return self._enemy_aerial_marked

    @enemy_aerial_marked.setter
    def enemy_aerial_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_aerial_marked' field must be of type 'bool'"
        self._enemy_aerial_marked = value

    @builtins.property
    def enemy_sentry_marked(self):
        """Message field 'enemy_sentry_marked'."""
        return self._enemy_sentry_marked

    @enemy_sentry_marked.setter
    def enemy_sentry_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_sentry_marked' field must be of type 'bool'"
        self._enemy_sentry_marked = value

    @builtins.property
    def ally_hero_marked(self):
        """Message field 'ally_hero_marked'."""
        return self._ally_hero_marked

    @ally_hero_marked.setter
    def ally_hero_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ally_hero_marked' field must be of type 'bool'"
        self._ally_hero_marked = value

    @builtins.property
    def ally_engineer_marked(self):
        """Message field 'ally_engineer_marked'."""
        return self._ally_engineer_marked

    @ally_engineer_marked.setter
    def ally_engineer_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ally_engineer_marked' field must be of type 'bool'"
        self._ally_engineer_marked = value

    @builtins.property
    def ally_infantry_3_marked(self):
        """Message field 'ally_infantry_3_marked'."""
        return self._ally_infantry_3_marked

    @ally_infantry_3_marked.setter
    def ally_infantry_3_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ally_infantry_3_marked' field must be of type 'bool'"
        self._ally_infantry_3_marked = value

    @builtins.property
    def ally_infantry_4_marked(self):
        """Message field 'ally_infantry_4_marked'."""
        return self._ally_infantry_4_marked

    @ally_infantry_4_marked.setter
    def ally_infantry_4_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ally_infantry_4_marked' field must be of type 'bool'"
        self._ally_infantry_4_marked = value

    @builtins.property
    def ally_aerial_marked(self):
        """Message field 'ally_aerial_marked'."""
        return self._ally_aerial_marked

    @ally_aerial_marked.setter
    def ally_aerial_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ally_aerial_marked' field must be of type 'bool'"
        self._ally_aerial_marked = value

    @builtins.property
    def ally_sentry_marked(self):
        """Message field 'ally_sentry_marked'."""
        return self._ally_sentry_marked

    @ally_sentry_marked.setter
    def ally_sentry_marked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ally_sentry_marked' field must be of type 'bool'"
        self._ally_sentry_marked = value
