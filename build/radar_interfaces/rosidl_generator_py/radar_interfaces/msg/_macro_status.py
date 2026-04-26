# generated from rosidl_generator_py/resource/_idl.py.em
# with input from radar_interfaces:msg/MacroStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MacroStatus(type):
    """Metaclass of message 'MacroStatus'."""

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
                'radar_interfaces.msg.MacroStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__macro_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__macro_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__macro_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__macro_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__macro_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MacroStatus(metaclass=Metaclass_MacroStatus):
    """Message class 'MacroStatus'."""

    __slots__ = [
        '_remaining_gold',
        '_total_gold',
        '_enemy_supply_area_occupied',
        '_enemy_central_highland_status',
        '_enemy_trapezoid_highland_occupied',
        '_enemy_fort_buff_status',
        '_enemy_outpost_buff_status',
        '_enemy_base_buff_occupied',
        '_enemy_tunnel_pre_jump_occupied',
        '_enemy_tunnel_post_jump_occupied',
        '_ally_side_tunnel_pre_jump_occupied',
        '_ally_side_tunnel_post_jump_occupied',
        '_enemy_highland_upper_occupied',
        '_enemy_jump_upper_occupied',
        '_enemy_road_upper_occupied',
    ]

    _fields_and_field_types = {
        'remaining_gold': 'uint16',
        'total_gold': 'uint16',
        'enemy_supply_area_occupied': 'boolean',
        'enemy_central_highland_status': 'uint8',
        'enemy_trapezoid_highland_occupied': 'boolean',
        'enemy_fort_buff_status': 'uint8',
        'enemy_outpost_buff_status': 'uint8',
        'enemy_base_buff_occupied': 'boolean',
        'enemy_tunnel_pre_jump_occupied': 'boolean',
        'enemy_tunnel_post_jump_occupied': 'boolean',
        'ally_side_tunnel_pre_jump_occupied': 'boolean',
        'ally_side_tunnel_post_jump_occupied': 'boolean',
        'enemy_highland_upper_occupied': 'boolean',
        'enemy_jump_upper_occupied': 'boolean',
        'enemy_road_upper_occupied': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.remaining_gold = kwargs.get('remaining_gold', int())
        self.total_gold = kwargs.get('total_gold', int())
        self.enemy_supply_area_occupied = kwargs.get('enemy_supply_area_occupied', bool())
        self.enemy_central_highland_status = kwargs.get('enemy_central_highland_status', int())
        self.enemy_trapezoid_highland_occupied = kwargs.get('enemy_trapezoid_highland_occupied', bool())
        self.enemy_fort_buff_status = kwargs.get('enemy_fort_buff_status', int())
        self.enemy_outpost_buff_status = kwargs.get('enemy_outpost_buff_status', int())
        self.enemy_base_buff_occupied = kwargs.get('enemy_base_buff_occupied', bool())
        self.enemy_tunnel_pre_jump_occupied = kwargs.get('enemy_tunnel_pre_jump_occupied', bool())
        self.enemy_tunnel_post_jump_occupied = kwargs.get('enemy_tunnel_post_jump_occupied', bool())
        self.ally_side_tunnel_pre_jump_occupied = kwargs.get('ally_side_tunnel_pre_jump_occupied', bool())
        self.ally_side_tunnel_post_jump_occupied = kwargs.get('ally_side_tunnel_post_jump_occupied', bool())
        self.enemy_highland_upper_occupied = kwargs.get('enemy_highland_upper_occupied', bool())
        self.enemy_jump_upper_occupied = kwargs.get('enemy_jump_upper_occupied', bool())
        self.enemy_road_upper_occupied = kwargs.get('enemy_road_upper_occupied', bool())

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
        if self.remaining_gold != other.remaining_gold:
            return False
        if self.total_gold != other.total_gold:
            return False
        if self.enemy_supply_area_occupied != other.enemy_supply_area_occupied:
            return False
        if self.enemy_central_highland_status != other.enemy_central_highland_status:
            return False
        if self.enemy_trapezoid_highland_occupied != other.enemy_trapezoid_highland_occupied:
            return False
        if self.enemy_fort_buff_status != other.enemy_fort_buff_status:
            return False
        if self.enemy_outpost_buff_status != other.enemy_outpost_buff_status:
            return False
        if self.enemy_base_buff_occupied != other.enemy_base_buff_occupied:
            return False
        if self.enemy_tunnel_pre_jump_occupied != other.enemy_tunnel_pre_jump_occupied:
            return False
        if self.enemy_tunnel_post_jump_occupied != other.enemy_tunnel_post_jump_occupied:
            return False
        if self.ally_side_tunnel_pre_jump_occupied != other.ally_side_tunnel_pre_jump_occupied:
            return False
        if self.ally_side_tunnel_post_jump_occupied != other.ally_side_tunnel_post_jump_occupied:
            return False
        if self.enemy_highland_upper_occupied != other.enemy_highland_upper_occupied:
            return False
        if self.enemy_jump_upper_occupied != other.enemy_jump_upper_occupied:
            return False
        if self.enemy_road_upper_occupied != other.enemy_road_upper_occupied:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def remaining_gold(self):
        """Message field 'remaining_gold'."""
        return self._remaining_gold

    @remaining_gold.setter
    def remaining_gold(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remaining_gold' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'remaining_gold' field must be an unsigned integer in [0, 65535]"
        self._remaining_gold = value

    @builtins.property
    def total_gold(self):
        """Message field 'total_gold'."""
        return self._total_gold

    @total_gold.setter
    def total_gold(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_gold' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'total_gold' field must be an unsigned integer in [0, 65535]"
        self._total_gold = value

    @builtins.property
    def enemy_supply_area_occupied(self):
        """Message field 'enemy_supply_area_occupied'."""
        return self._enemy_supply_area_occupied

    @enemy_supply_area_occupied.setter
    def enemy_supply_area_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_supply_area_occupied' field must be of type 'bool'"
        self._enemy_supply_area_occupied = value

    @builtins.property
    def enemy_central_highland_status(self):
        """Message field 'enemy_central_highland_status'."""
        return self._enemy_central_highland_status

    @enemy_central_highland_status.setter
    def enemy_central_highland_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enemy_central_highland_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enemy_central_highland_status' field must be an unsigned integer in [0, 255]"
        self._enemy_central_highland_status = value

    @builtins.property
    def enemy_trapezoid_highland_occupied(self):
        """Message field 'enemy_trapezoid_highland_occupied'."""
        return self._enemy_trapezoid_highland_occupied

    @enemy_trapezoid_highland_occupied.setter
    def enemy_trapezoid_highland_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_trapezoid_highland_occupied' field must be of type 'bool'"
        self._enemy_trapezoid_highland_occupied = value

    @builtins.property
    def enemy_fort_buff_status(self):
        """Message field 'enemy_fort_buff_status'."""
        return self._enemy_fort_buff_status

    @enemy_fort_buff_status.setter
    def enemy_fort_buff_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enemy_fort_buff_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enemy_fort_buff_status' field must be an unsigned integer in [0, 255]"
        self._enemy_fort_buff_status = value

    @builtins.property
    def enemy_outpost_buff_status(self):
        """Message field 'enemy_outpost_buff_status'."""
        return self._enemy_outpost_buff_status

    @enemy_outpost_buff_status.setter
    def enemy_outpost_buff_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'enemy_outpost_buff_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'enemy_outpost_buff_status' field must be an unsigned integer in [0, 255]"
        self._enemy_outpost_buff_status = value

    @builtins.property
    def enemy_base_buff_occupied(self):
        """Message field 'enemy_base_buff_occupied'."""
        return self._enemy_base_buff_occupied

    @enemy_base_buff_occupied.setter
    def enemy_base_buff_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_base_buff_occupied' field must be of type 'bool'"
        self._enemy_base_buff_occupied = value

    @builtins.property
    def enemy_tunnel_pre_jump_occupied(self):
        """Message field 'enemy_tunnel_pre_jump_occupied'."""
        return self._enemy_tunnel_pre_jump_occupied

    @enemy_tunnel_pre_jump_occupied.setter
    def enemy_tunnel_pre_jump_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_tunnel_pre_jump_occupied' field must be of type 'bool'"
        self._enemy_tunnel_pre_jump_occupied = value

    @builtins.property
    def enemy_tunnel_post_jump_occupied(self):
        """Message field 'enemy_tunnel_post_jump_occupied'."""
        return self._enemy_tunnel_post_jump_occupied

    @enemy_tunnel_post_jump_occupied.setter
    def enemy_tunnel_post_jump_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_tunnel_post_jump_occupied' field must be of type 'bool'"
        self._enemy_tunnel_post_jump_occupied = value

    @builtins.property
    def ally_side_tunnel_pre_jump_occupied(self):
        """Message field 'ally_side_tunnel_pre_jump_occupied'."""
        return self._ally_side_tunnel_pre_jump_occupied

    @ally_side_tunnel_pre_jump_occupied.setter
    def ally_side_tunnel_pre_jump_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ally_side_tunnel_pre_jump_occupied' field must be of type 'bool'"
        self._ally_side_tunnel_pre_jump_occupied = value

    @builtins.property
    def ally_side_tunnel_post_jump_occupied(self):
        """Message field 'ally_side_tunnel_post_jump_occupied'."""
        return self._ally_side_tunnel_post_jump_occupied

    @ally_side_tunnel_post_jump_occupied.setter
    def ally_side_tunnel_post_jump_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ally_side_tunnel_post_jump_occupied' field must be of type 'bool'"
        self._ally_side_tunnel_post_jump_occupied = value

    @builtins.property
    def enemy_highland_upper_occupied(self):
        """Message field 'enemy_highland_upper_occupied'."""
        return self._enemy_highland_upper_occupied

    @enemy_highland_upper_occupied.setter
    def enemy_highland_upper_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_highland_upper_occupied' field must be of type 'bool'"
        self._enemy_highland_upper_occupied = value

    @builtins.property
    def enemy_jump_upper_occupied(self):
        """Message field 'enemy_jump_upper_occupied'."""
        return self._enemy_jump_upper_occupied

    @enemy_jump_upper_occupied.setter
    def enemy_jump_upper_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_jump_upper_occupied' field must be of type 'bool'"
        self._enemy_jump_upper_occupied = value

    @builtins.property
    def enemy_road_upper_occupied(self):
        """Message field 'enemy_road_upper_occupied'."""
        return self._enemy_road_upper_occupied

    @enemy_road_upper_occupied.setter
    def enemy_road_upper_occupied(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enemy_road_upper_occupied' field must be of type 'bool'"
        self._enemy_road_upper_occupied = value
