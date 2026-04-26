# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_interfaces:msg/Buffs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Buffs(type):
    """Metaclass of message 'Buffs'."""

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
                'radar_interfaces.msg.Buffs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__buffs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__buffs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__buffs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__buffs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__buffs

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Buffs(metaclass=Metaclass_Buffs):
    """Message class 'Buffs'."""

    __slots__ = [
        '_hero_health_regen',
        '_hero_cooling_boost',
        '_hero_defense_boost',
        '_hero_defense_debuff',
        '_hero_attack_boost',
        '_engineer_health_regen',
        '_engineer_cooling_boost',
        '_engineer_defense_boost',
        '_engineer_defense_debuff',
        '_engineer_attack_boost',
        '_infantry_3_health_regen',
        '_infantry_3_cooling_boost',
        '_infantry_3_defense_boost',
        '_infantry_3_defense_debuff',
        '_infantry_3_attack_boost',
        '_infantry_4_health_regen',
        '_infantry_4_cooling_boost',
        '_infantry_4_defense_boost',
        '_infantry_4_defense_debuff',
        '_infantry_4_attack_boost',
        '_sentry_health_regen',
        '_sentry_cooling_boost',
        '_sentry_defense_boost',
        '_sentry_defense_debuff',
        '_sentry_attack_boost',
        '_sentry_posture',
    ]

    _fields_and_field_types = {
        'hero_health_regen': 'uint8',
        'hero_cooling_boost': 'uint16',
        'hero_defense_boost': 'uint8',
        'hero_defense_debuff': 'uint8',
        'hero_attack_boost': 'uint16',
        'engineer_health_regen': 'uint8',
        'engineer_cooling_boost': 'uint16',
        'engineer_defense_boost': 'uint8',
        'engineer_defense_debuff': 'uint8',
        'engineer_attack_boost': 'uint16',
        'infantry_3_health_regen': 'uint8',
        'infantry_3_cooling_boost': 'uint16',
        'infantry_3_defense_boost': 'uint8',
        'infantry_3_defense_debuff': 'uint8',
        'infantry_3_attack_boost': 'uint16',
        'infantry_4_health_regen': 'uint8',
        'infantry_4_cooling_boost': 'uint16',
        'infantry_4_defense_boost': 'uint8',
        'infantry_4_defense_debuff': 'uint8',
        'infantry_4_attack_boost': 'uint16',
        'sentry_health_regen': 'uint8',
        'sentry_cooling_boost': 'uint16',
        'sentry_defense_boost': 'uint8',
        'sentry_defense_debuff': 'uint8',
        'sentry_attack_boost': 'uint16',
        'sentry_posture': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.hero_health_regen = kwargs.get('hero_health_regen', int())
        self.hero_cooling_boost = kwargs.get('hero_cooling_boost', int())
        self.hero_defense_boost = kwargs.get('hero_defense_boost', int())
        self.hero_defense_debuff = kwargs.get('hero_defense_debuff', int())
        self.hero_attack_boost = kwargs.get('hero_attack_boost', int())
        self.engineer_health_regen = kwargs.get('engineer_health_regen', int())
        self.engineer_cooling_boost = kwargs.get('engineer_cooling_boost', int())
        self.engineer_defense_boost = kwargs.get('engineer_defense_boost', int())
        self.engineer_defense_debuff = kwargs.get('engineer_defense_debuff', int())
        self.engineer_attack_boost = kwargs.get('engineer_attack_boost', int())
        self.infantry_3_health_regen = kwargs.get('infantry_3_health_regen', int())
        self.infantry_3_cooling_boost = kwargs.get('infantry_3_cooling_boost', int())
        self.infantry_3_defense_boost = kwargs.get('infantry_3_defense_boost', int())
        self.infantry_3_defense_debuff = kwargs.get('infantry_3_defense_debuff', int())
        self.infantry_3_attack_boost = kwargs.get('infantry_3_attack_boost', int())
        self.infantry_4_health_regen = kwargs.get('infantry_4_health_regen', int())
        self.infantry_4_cooling_boost = kwargs.get('infantry_4_cooling_boost', int())
        self.infantry_4_defense_boost = kwargs.get('infantry_4_defense_boost', int())
        self.infantry_4_defense_debuff = kwargs.get('infantry_4_defense_debuff', int())
        self.infantry_4_attack_boost = kwargs.get('infantry_4_attack_boost', int())
        self.sentry_health_regen = kwargs.get('sentry_health_regen', int())
        self.sentry_cooling_boost = kwargs.get('sentry_cooling_boost', int())
        self.sentry_defense_boost = kwargs.get('sentry_defense_boost', int())
        self.sentry_defense_debuff = kwargs.get('sentry_defense_debuff', int())
        self.sentry_attack_boost = kwargs.get('sentry_attack_boost', int())
        self.sentry_posture = kwargs.get('sentry_posture', int())

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
        if self.hero_health_regen != other.hero_health_regen:
            return False
        if self.hero_cooling_boost != other.hero_cooling_boost:
            return False
        if self.hero_defense_boost != other.hero_defense_boost:
            return False
        if self.hero_defense_debuff != other.hero_defense_debuff:
            return False
        if self.hero_attack_boost != other.hero_attack_boost:
            return False
        if self.engineer_health_regen != other.engineer_health_regen:
            return False
        if self.engineer_cooling_boost != other.engineer_cooling_boost:
            return False
        if self.engineer_defense_boost != other.engineer_defense_boost:
            return False
        if self.engineer_defense_debuff != other.engineer_defense_debuff:
            return False
        if self.engineer_attack_boost != other.engineer_attack_boost:
            return False
        if self.infantry_3_health_regen != other.infantry_3_health_regen:
            return False
        if self.infantry_3_cooling_boost != other.infantry_3_cooling_boost:
            return False
        if self.infantry_3_defense_boost != other.infantry_3_defense_boost:
            return False
        if self.infantry_3_defense_debuff != other.infantry_3_defense_debuff:
            return False
        if self.infantry_3_attack_boost != other.infantry_3_attack_boost:
            return False
        if self.infantry_4_health_regen != other.infantry_4_health_regen:
            return False
        if self.infantry_4_cooling_boost != other.infantry_4_cooling_boost:
            return False
        if self.infantry_4_defense_boost != other.infantry_4_defense_boost:
            return False
        if self.infantry_4_defense_debuff != other.infantry_4_defense_debuff:
            return False
        if self.infantry_4_attack_boost != other.infantry_4_attack_boost:
            return False
        if self.sentry_health_regen != other.sentry_health_regen:
            return False
        if self.sentry_cooling_boost != other.sentry_cooling_boost:
            return False
        if self.sentry_defense_boost != other.sentry_defense_boost:
            return False
        if self.sentry_defense_debuff != other.sentry_defense_debuff:
            return False
        if self.sentry_attack_boost != other.sentry_attack_boost:
            return False
        if self.sentry_posture != other.sentry_posture:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hero_health_regen(self):
        """Message field 'hero_health_regen'."""
        return self._hero_health_regen

    @hero_health_regen.setter
    def hero_health_regen(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hero_health_regen' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hero_health_regen' field must be an unsigned integer in [0, 255]"
        self._hero_health_regen = value

    @builtins.property
    def hero_cooling_boost(self):
        """Message field 'hero_cooling_boost'."""
        return self._hero_cooling_boost

    @hero_cooling_boost.setter
    def hero_cooling_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hero_cooling_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hero_cooling_boost' field must be an unsigned integer in [0, 65535]"
        self._hero_cooling_boost = value

    @builtins.property
    def hero_defense_boost(self):
        """Message field 'hero_defense_boost'."""
        return self._hero_defense_boost

    @hero_defense_boost.setter
    def hero_defense_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hero_defense_boost' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hero_defense_boost' field must be an unsigned integer in [0, 255]"
        self._hero_defense_boost = value

    @builtins.property
    def hero_defense_debuff(self):
        """Message field 'hero_defense_debuff'."""
        return self._hero_defense_debuff

    @hero_defense_debuff.setter
    def hero_defense_debuff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hero_defense_debuff' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hero_defense_debuff' field must be an unsigned integer in [0, 255]"
        self._hero_defense_debuff = value

    @builtins.property
    def hero_attack_boost(self):
        """Message field 'hero_attack_boost'."""
        return self._hero_attack_boost

    @hero_attack_boost.setter
    def hero_attack_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hero_attack_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hero_attack_boost' field must be an unsigned integer in [0, 65535]"
        self._hero_attack_boost = value

    @builtins.property
    def engineer_health_regen(self):
        """Message field 'engineer_health_regen'."""
        return self._engineer_health_regen

    @engineer_health_regen.setter
    def engineer_health_regen(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engineer_health_regen' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'engineer_health_regen' field must be an unsigned integer in [0, 255]"
        self._engineer_health_regen = value

    @builtins.property
    def engineer_cooling_boost(self):
        """Message field 'engineer_cooling_boost'."""
        return self._engineer_cooling_boost

    @engineer_cooling_boost.setter
    def engineer_cooling_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engineer_cooling_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'engineer_cooling_boost' field must be an unsigned integer in [0, 65535]"
        self._engineer_cooling_boost = value

    @builtins.property
    def engineer_defense_boost(self):
        """Message field 'engineer_defense_boost'."""
        return self._engineer_defense_boost

    @engineer_defense_boost.setter
    def engineer_defense_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engineer_defense_boost' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'engineer_defense_boost' field must be an unsigned integer in [0, 255]"
        self._engineer_defense_boost = value

    @builtins.property
    def engineer_defense_debuff(self):
        """Message field 'engineer_defense_debuff'."""
        return self._engineer_defense_debuff

    @engineer_defense_debuff.setter
    def engineer_defense_debuff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engineer_defense_debuff' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'engineer_defense_debuff' field must be an unsigned integer in [0, 255]"
        self._engineer_defense_debuff = value

    @builtins.property
    def engineer_attack_boost(self):
        """Message field 'engineer_attack_boost'."""
        return self._engineer_attack_boost

    @engineer_attack_boost.setter
    def engineer_attack_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engineer_attack_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'engineer_attack_boost' field must be an unsigned integer in [0, 65535]"
        self._engineer_attack_boost = value

    @builtins.property
    def infantry_3_health_regen(self):
        """Message field 'infantry_3_health_regen'."""
        return self._infantry_3_health_regen

    @infantry_3_health_regen.setter
    def infantry_3_health_regen(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_3_health_regen' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'infantry_3_health_regen' field must be an unsigned integer in [0, 255]"
        self._infantry_3_health_regen = value

    @builtins.property
    def infantry_3_cooling_boost(self):
        """Message field 'infantry_3_cooling_boost'."""
        return self._infantry_3_cooling_boost

    @infantry_3_cooling_boost.setter
    def infantry_3_cooling_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_3_cooling_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'infantry_3_cooling_boost' field must be an unsigned integer in [0, 65535]"
        self._infantry_3_cooling_boost = value

    @builtins.property
    def infantry_3_defense_boost(self):
        """Message field 'infantry_3_defense_boost'."""
        return self._infantry_3_defense_boost

    @infantry_3_defense_boost.setter
    def infantry_3_defense_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_3_defense_boost' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'infantry_3_defense_boost' field must be an unsigned integer in [0, 255]"
        self._infantry_3_defense_boost = value

    @builtins.property
    def infantry_3_defense_debuff(self):
        """Message field 'infantry_3_defense_debuff'."""
        return self._infantry_3_defense_debuff

    @infantry_3_defense_debuff.setter
    def infantry_3_defense_debuff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_3_defense_debuff' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'infantry_3_defense_debuff' field must be an unsigned integer in [0, 255]"
        self._infantry_3_defense_debuff = value

    @builtins.property
    def infantry_3_attack_boost(self):
        """Message field 'infantry_3_attack_boost'."""
        return self._infantry_3_attack_boost

    @infantry_3_attack_boost.setter
    def infantry_3_attack_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_3_attack_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'infantry_3_attack_boost' field must be an unsigned integer in [0, 65535]"
        self._infantry_3_attack_boost = value

    @builtins.property
    def infantry_4_health_regen(self):
        """Message field 'infantry_4_health_regen'."""
        return self._infantry_4_health_regen

    @infantry_4_health_regen.setter
    def infantry_4_health_regen(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_4_health_regen' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'infantry_4_health_regen' field must be an unsigned integer in [0, 255]"
        self._infantry_4_health_regen = value

    @builtins.property
    def infantry_4_cooling_boost(self):
        """Message field 'infantry_4_cooling_boost'."""
        return self._infantry_4_cooling_boost

    @infantry_4_cooling_boost.setter
    def infantry_4_cooling_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_4_cooling_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'infantry_4_cooling_boost' field must be an unsigned integer in [0, 65535]"
        self._infantry_4_cooling_boost = value

    @builtins.property
    def infantry_4_defense_boost(self):
        """Message field 'infantry_4_defense_boost'."""
        return self._infantry_4_defense_boost

    @infantry_4_defense_boost.setter
    def infantry_4_defense_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_4_defense_boost' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'infantry_4_defense_boost' field must be an unsigned integer in [0, 255]"
        self._infantry_4_defense_boost = value

    @builtins.property
    def infantry_4_defense_debuff(self):
        """Message field 'infantry_4_defense_debuff'."""
        return self._infantry_4_defense_debuff

    @infantry_4_defense_debuff.setter
    def infantry_4_defense_debuff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_4_defense_debuff' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'infantry_4_defense_debuff' field must be an unsigned integer in [0, 255]"
        self._infantry_4_defense_debuff = value

    @builtins.property
    def infantry_4_attack_boost(self):
        """Message field 'infantry_4_attack_boost'."""
        return self._infantry_4_attack_boost

    @infantry_4_attack_boost.setter
    def infantry_4_attack_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_4_attack_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'infantry_4_attack_boost' field must be an unsigned integer in [0, 65535]"
        self._infantry_4_attack_boost = value

    @builtins.property
    def sentry_health_regen(self):
        """Message field 'sentry_health_regen'."""
        return self._sentry_health_regen

    @sentry_health_regen.setter
    def sentry_health_regen(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_health_regen' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sentry_health_regen' field must be an unsigned integer in [0, 255]"
        self._sentry_health_regen = value

    @builtins.property
    def sentry_cooling_boost(self):
        """Message field 'sentry_cooling_boost'."""
        return self._sentry_cooling_boost

    @sentry_cooling_boost.setter
    def sentry_cooling_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_cooling_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sentry_cooling_boost' field must be an unsigned integer in [0, 65535]"
        self._sentry_cooling_boost = value

    @builtins.property
    def sentry_defense_boost(self):
        """Message field 'sentry_defense_boost'."""
        return self._sentry_defense_boost

    @sentry_defense_boost.setter
    def sentry_defense_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_defense_boost' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sentry_defense_boost' field must be an unsigned integer in [0, 255]"
        self._sentry_defense_boost = value

    @builtins.property
    def sentry_defense_debuff(self):
        """Message field 'sentry_defense_debuff'."""
        return self._sentry_defense_debuff

    @sentry_defense_debuff.setter
    def sentry_defense_debuff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_defense_debuff' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sentry_defense_debuff' field must be an unsigned integer in [0, 255]"
        self._sentry_defense_debuff = value

    @builtins.property
    def sentry_attack_boost(self):
        """Message field 'sentry_attack_boost'."""
        return self._sentry_attack_boost

    @sentry_attack_boost.setter
    def sentry_attack_boost(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_attack_boost' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sentry_attack_boost' field must be an unsigned integer in [0, 65535]"
        self._sentry_attack_boost = value

    @builtins.property
    def sentry_posture(self):
        """Message field 'sentry_posture'."""
        return self._sentry_posture

    @sentry_posture.setter
    def sentry_posture(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_posture' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sentry_posture' field must be an unsigned integer in [0, 255]"
        self._sentry_posture = value
