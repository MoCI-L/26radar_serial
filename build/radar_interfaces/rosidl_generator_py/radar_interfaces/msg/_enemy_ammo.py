# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_interfaces:msg/EnemyAmmo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EnemyAmmo(type):
    """Metaclass of message 'EnemyAmmo'."""

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
                'radar_interfaces.msg.EnemyAmmo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__enemy_ammo
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__enemy_ammo
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__enemy_ammo
            cls._TYPE_SUPPORT = module.type_support_msg__msg__enemy_ammo
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__enemy_ammo

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EnemyAmmo(metaclass=Metaclass_EnemyAmmo):
    """Message class 'EnemyAmmo'."""

    __slots__ = [
        '_hero_ammo',
        '_infantry_3_ammo',
        '_infantry_4_ammo',
        '_aerial_ammo',
        '_sentry_ammo',
    ]

    _fields_and_field_types = {
        'hero_ammo': 'uint16',
        'infantry_3_ammo': 'uint16',
        'infantry_4_ammo': 'uint16',
        'aerial_ammo': 'uint16',
        'sentry_ammo': 'uint16',
    }

    SLOT_TYPES = (
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
        self.hero_ammo = kwargs.get('hero_ammo', int())
        self.infantry_3_ammo = kwargs.get('infantry_3_ammo', int())
        self.infantry_4_ammo = kwargs.get('infantry_4_ammo', int())
        self.aerial_ammo = kwargs.get('aerial_ammo', int())
        self.sentry_ammo = kwargs.get('sentry_ammo', int())

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
        if self.hero_ammo != other.hero_ammo:
            return False
        if self.infantry_3_ammo != other.infantry_3_ammo:
            return False
        if self.infantry_4_ammo != other.infantry_4_ammo:
            return False
        if self.aerial_ammo != other.aerial_ammo:
            return False
        if self.sentry_ammo != other.sentry_ammo:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def hero_ammo(self):
        """Message field 'hero_ammo'."""
        return self._hero_ammo

    @hero_ammo.setter
    def hero_ammo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hero_ammo' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hero_ammo' field must be an unsigned integer in [0, 65535]"
        self._hero_ammo = value

    @builtins.property
    def infantry_3_ammo(self):
        """Message field 'infantry_3_ammo'."""
        return self._infantry_3_ammo

    @infantry_3_ammo.setter
    def infantry_3_ammo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_3_ammo' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'infantry_3_ammo' field must be an unsigned integer in [0, 65535]"
        self._infantry_3_ammo = value

    @builtins.property
    def infantry_4_ammo(self):
        """Message field 'infantry_4_ammo'."""
        return self._infantry_4_ammo

    @infantry_4_ammo.setter
    def infantry_4_ammo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'infantry_4_ammo' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'infantry_4_ammo' field must be an unsigned integer in [0, 65535]"
        self._infantry_4_ammo = value

    @builtins.property
    def aerial_ammo(self):
        """Message field 'aerial_ammo'."""
        return self._aerial_ammo

    @aerial_ammo.setter
    def aerial_ammo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aerial_ammo' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'aerial_ammo' field must be an unsigned integer in [0, 65535]"
        self._aerial_ammo = value

    @builtins.property
    def sentry_ammo(self):
        """Message field 'sentry_ammo'."""
        return self._sentry_ammo

    @sentry_ammo.setter
    def sentry_ammo(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sentry_ammo' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sentry_ammo' field must be an unsigned integer in [0, 65535]"
        self._sentry_ammo = value
