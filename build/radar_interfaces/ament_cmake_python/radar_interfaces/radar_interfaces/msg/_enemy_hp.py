# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_interfaces:msg/EnemyHP.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnemyHP(type):
    """Metaclass of message 'EnemyHP'."""

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
                'radar_interfaces.msg.EnemyHP')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__enemy_hp
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__enemy_hp
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__enemy_hp
            cls._TYPE_SUPPORT = module.type_support_msg__msg__enemy_hp
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__enemy_hp

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnemyHP(metaclass=Metaclass_EnemyHP):
    """Message class 'EnemyHP'."""

    __slots__ = [
        '_hero_hp',
        '_engineer_hp',
        '_infantry_3_hp',
        '_infantry_4_hp',
        '_reserved',
        '_sentry_hp',
    ]

    _fields_and_field_types = {
        'hero_hp': 'uint16',
        'engineer_hp': 'uint16',
        'infantry_3_hp': 'uint16',
        'infantry_4_hp': 'uint16',
        'reserved': 'uint16',
        'sentry_hp': 'uint16',
    }

    SLOT_TYPES = (
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
        self.hero_hp = kwargs.get('hero_hp', int())
        self.engineer_hp = kwargs.get('engineer_hp', int())
        self.infantry_3_hp = kwargs.get('infantry_3_hp', int())
        self.infantry_4_hp = kwargs.get('infantry_4_hp', int())
        self.reserved = kwargs.get('reserved', int())
        self.sentry_hp = kwargs.get('sentry_hp', int())

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
        if self.hero_hp != other.hero_hp:
            return False
        if self.engineer_hp != other.engineer_hp:
            return False
        if self.infantry_3_hp != other.infantry_3_hp:
            return False
        if self.infantry_4_hp != other.infantry_4_hp:
            return False
        if self.reserved != other.reserved:
            return False
        if self.sentry_hp != other.sentry_hp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hero_hp(self):
        """Message field 'hero_hp'."""
        return self._hero_hp

    @hero_hp.setter
    def hero_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hero_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hero_hp' field must be an unsigned integer in [0, 65535]"
        self._hero_hp = value

    @builtins.property
    def engineer_hp(self):
        """Message field 'engineer_hp'."""
        return self._engineer_hp

    @engineer_hp.setter
    def engineer_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engineer_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'engineer_hp' field must be an unsigned integer in [0, 65535]"
        self._engineer_hp = value

    @builtins.property
    def infantry_3_hp(self):
        """Message field 'infantry_3_hp'."""
        return self._infantry_3_hp

    @infantry_3_hp.setter
    def infantry_3_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_3_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'infantry_3_hp' field must be an unsigned integer in [0, 65535]"
        self._infantry_3_hp = value

    @builtins.property
    def infantry_4_hp(self):
        """Message field 'infantry_4_hp'."""
        return self._infantry_4_hp

    @infantry_4_hp.setter
    def infantry_4_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_4_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'infantry_4_hp' field must be an unsigned integer in [0, 65535]"
        self._infantry_4_hp = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserved' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reserved' field must be an unsigned integer in [0, 65535]"
        self._reserved = value

    @builtins.property
    def sentry_hp(self):
        """Message field 'sentry_hp'."""
        return self._sentry_hp

    @sentry_hp.setter
    def sentry_hp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_hp' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sentry_hp' field must be an unsigned integer in [0, 65535]"
        self._sentry_hp = value
