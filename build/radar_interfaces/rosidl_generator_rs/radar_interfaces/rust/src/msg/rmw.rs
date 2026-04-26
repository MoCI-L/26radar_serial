#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__EnemyPosition() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__EnemyPosition__init(msg: *mut EnemyPosition) -> bool;
    fn radar_interfaces__msg__EnemyPosition__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnemyPosition>, size: usize) -> bool;
    fn radar_interfaces__msg__EnemyPosition__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnemyPosition>);
    fn radar_interfaces__msg__EnemyPosition__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnemyPosition>, out_seq: *mut rosidl_runtime_rs::Sequence<EnemyPosition>) -> bool;
}

// Corresponds to radar_interfaces__msg__EnemyPosition
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 敌方所有机器人位置坐标，单位：cm (协议原始单位)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnemyPosition {

    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_3_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_3_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_4_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_4_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aerial_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aerial_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_y: u16,

}



impl Default for EnemyPosition {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__EnemyPosition__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__EnemyPosition__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnemyPosition {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyPosition__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyPosition__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyPosition__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnemyPosition {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnemyPosition where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/EnemyPosition";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__EnemyPosition() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__EnemyHP() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__EnemyHP__init(msg: *mut EnemyHP) -> bool;
    fn radar_interfaces__msg__EnemyHP__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnemyHP>, size: usize) -> bool;
    fn radar_interfaces__msg__EnemyHP__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnemyHP>);
    fn radar_interfaces__msg__EnemyHP__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnemyHP>, out_seq: *mut rosidl_runtime_rs::Sequence<EnemyHP>) -> bool;
}

// Corresponds to radar_interfaces__msg__EnemyHP
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 敌方各机器人血量

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnemyHP {

    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_3_hp: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_4_hp: u16,

    /// 保留位
    pub reserved: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_hp: u16,

}



impl Default for EnemyHP {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__EnemyHP__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__EnemyHP__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnemyHP {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyHP__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyHP__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyHP__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnemyHP {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnemyHP where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/EnemyHP";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__EnemyHP() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__EnemyAmmo() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__EnemyAmmo__init(msg: *mut EnemyAmmo) -> bool;
    fn radar_interfaces__msg__EnemyAmmo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<EnemyAmmo>, size: usize) -> bool;
    fn radar_interfaces__msg__EnemyAmmo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<EnemyAmmo>);
    fn radar_interfaces__msg__EnemyAmmo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<EnemyAmmo>, out_seq: *mut rosidl_runtime_rs::Sequence<EnemyAmmo>) -> bool;
}

// Corresponds to radar_interfaces__msg__EnemyAmmo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 敌方剩余允许发弹量

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct EnemyAmmo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_ammo: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_3_ammo: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_4_ammo: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub aerial_ammo: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_ammo: u16,

}



impl Default for EnemyAmmo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__EnemyAmmo__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__EnemyAmmo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for EnemyAmmo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyAmmo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyAmmo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__EnemyAmmo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for EnemyAmmo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for EnemyAmmo where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/EnemyAmmo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__EnemyAmmo() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__MacroStatus() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__MacroStatus__init(msg: *mut MacroStatus) -> bool;
    fn radar_interfaces__msg__MacroStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MacroStatus>, size: usize) -> bool;
    fn radar_interfaces__msg__MacroStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MacroStatus>);
    fn radar_interfaces__msg__MacroStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MacroStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<MacroStatus>) -> bool;
}

// Corresponds to radar_interfaces__msg__MacroStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 对方队伍宏观状态

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MacroStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub remaining_gold: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_gold: u16,

    /// 以下为位域展开的状态字段
    pub enemy_supply_area_occupied: bool,

    /// 0=未占领，1=对方占领，2=我方占领
    pub enemy_central_highland_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_trapezoid_highland_occupied: bool,

    /// 0=未占领，1=对方，2=我方，3=双方
    pub enemy_fort_buff_status: u8,

    /// 0=未占领，1=对方，2=我方
    pub enemy_outpost_buff_status: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_base_buff_occupied: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_tunnel_pre_jump_occupied: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_tunnel_post_jump_occupied: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_side_tunnel_pre_jump_occupied: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_side_tunnel_post_jump_occupied: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_highland_upper_occupied: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_jump_upper_occupied: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_road_upper_occupied: bool,

}



impl Default for MacroStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__MacroStatus__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__MacroStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MacroStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__MacroStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__MacroStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__MacroStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MacroStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MacroStatus where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/MacroStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__MacroStatus() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__Buffs() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__Buffs__init(msg: *mut Buffs) -> bool;
    fn radar_interfaces__msg__Buffs__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Buffs>, size: usize) -> bool;
    fn radar_interfaces__msg__Buffs__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Buffs>);
    fn radar_interfaces__msg__Buffs__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Buffs>, out_seq: *mut rosidl_runtime_rs::Sequence<Buffs>) -> bool;
}

// Corresponds to radar_interfaces__msg__Buffs
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 英雄机器人增益

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Buffs {

    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_health_regen: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_cooling_boost: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_defense_boost: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_defense_debuff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hero_attack_boost: u16,

    /// 工程机器人增益
    pub engineer_health_regen: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_cooling_boost: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_defense_boost: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_defense_debuff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub engineer_attack_boost: u16,

    /// 3号步兵机器人增益
    pub infantry_3_health_regen: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_3_cooling_boost: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_3_defense_boost: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_3_defense_debuff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_3_attack_boost: u16,

    /// 4号步兵机器人增益
    pub infantry_4_health_regen: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_4_cooling_boost: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_4_defense_boost: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_4_defense_debuff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub infantry_4_attack_boost: u16,

    /// 哨兵机器人增益
    pub sentry_health_regen: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_cooling_boost: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_defense_boost: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_defense_debuff: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_attack_boost: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sentry_posture: u8,

}



impl Default for Buffs {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__Buffs__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__Buffs__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Buffs {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__Buffs__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__Buffs__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__Buffs__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Buffs {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Buffs where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/Buffs";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__Buffs() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__InterferenceKey() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__InterferenceKey__init(msg: *mut InterferenceKey) -> bool;
    fn radar_interfaces__msg__InterferenceKey__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InterferenceKey>, size: usize) -> bool;
    fn radar_interfaces__msg__InterferenceKey__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InterferenceKey>);
    fn radar_interfaces__msg__InterferenceKey__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InterferenceKey>, out_seq: *mut rosidl_runtime_rs::Sequence<InterferenceKey>) -> bool;
}

// Corresponds to radar_interfaces__msg__InterferenceKey
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 对方干扰波密钥，6字节ASCII

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InterferenceKey {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: rosidl_runtime_rs::String,

}



impl Default for InterferenceKey {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__InterferenceKey__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__InterferenceKey__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InterferenceKey {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__InterferenceKey__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__InterferenceKey__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__InterferenceKey__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InterferenceKey {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InterferenceKey where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/InterferenceKey";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__InterferenceKey() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__RadarMarkProgress() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__RadarMarkProgress__init(msg: *mut RadarMarkProgress) -> bool;
    fn radar_interfaces__msg__RadarMarkProgress__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarMarkProgress>, size: usize) -> bool;
    fn radar_interfaces__msg__RadarMarkProgress__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarMarkProgress>);
    fn radar_interfaces__msg__RadarMarkProgress__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarMarkProgress>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarMarkProgress>) -> bool;
}

// Corresponds to radar_interfaces__msg__RadarMarkProgress
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 雷达标记进度状态，敌方机器人阈值为100，己方机器人阈值为50

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarMarkProgress {

    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_hero_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_engineer_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_infantry_3_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_infantry_4_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_aerial_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enemy_sentry_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_hero_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_engineer_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_infantry_3_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_infantry_4_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_aerial_marked: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_sentry_marked: bool,

}



impl Default for RadarMarkProgress {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__RadarMarkProgress__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__RadarMarkProgress__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarMarkProgress {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarMarkProgress__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarMarkProgress__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarMarkProgress__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarMarkProgress {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarMarkProgress where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/RadarMarkProgress";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__RadarMarkProgress() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__RadarInfo() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__RadarInfo__init(msg: *mut RadarInfo) -> bool;
    fn radar_interfaces__msg__RadarInfo__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>, size: usize) -> bool;
    fn radar_interfaces__msg__RadarInfo__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>);
    fn radar_interfaces__msg__RadarInfo__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarInfo>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarInfo>) -> bool;
}

// Corresponds to radar_interfaces__msg__RadarInfo
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 雷达自主决策状态

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub double_vulnerability_chances: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_double_vulnerability_active: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub encryption_level: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub key_change_enabled: bool,

}



impl Default for RadarInfo {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__RadarInfo__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__RadarInfo__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarInfo {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarInfo__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarInfo__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarInfo__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarInfo {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarInfo where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/RadarInfo";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__RadarInfo() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__MapRobotData() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__MapRobotData__init(msg: *mut MapRobotData) -> bool;
    fn radar_interfaces__msg__MapRobotData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MapRobotData>, size: usize) -> bool;
    fn radar_interfaces__msg__MapRobotData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MapRobotData>);
    fn radar_interfaces__msg__MapRobotData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MapRobotData>, out_seq: *mut rosidl_runtime_rs::Sequence<MapRobotData>) -> bool;
}

// Corresponds to radar_interfaces__msg__MapRobotData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 雷达发送给己方选手端小地图的双边机器人坐标，单位：cm

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MapRobotData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_hero_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_hero_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_engineer_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_engineer_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_infantry_3_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_infantry_3_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_infantry_4_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_infantry_4_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_aerial_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_aerial_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_sentry_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub opponent_sentry_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_hero_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_hero_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_engineer_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_engineer_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_infantry_3_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_infantry_3_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_infantry_4_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_infantry_4_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_aerial_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_aerial_y: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_sentry_x: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ally_sentry_y: u16,

}



impl Default for MapRobotData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__MapRobotData__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__MapRobotData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MapRobotData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__MapRobotData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__MapRobotData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__MapRobotData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MapRobotData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MapRobotData where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/MapRobotData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__MapRobotData() }
  }
}


#[link(name = "radar_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__RadarDecisionCommand() -> *const std::ffi::c_void;
}

#[link(name = "radar_interfaces__rosidl_generator_c")]
extern "C" {
    fn radar_interfaces__msg__RadarDecisionCommand__init(msg: *mut RadarDecisionCommand) -> bool;
    fn radar_interfaces__msg__RadarDecisionCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RadarDecisionCommand>, size: usize) -> bool;
    fn radar_interfaces__msg__RadarDecisionCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RadarDecisionCommand>);
    fn radar_interfaces__msg__RadarDecisionCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RadarDecisionCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<RadarDecisionCommand>) -> bool;
}

// Corresponds to radar_interfaces__msg__RadarDecisionCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 雷达通过0x0301/0x0121上报的自主决策指令

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RadarDecisionCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub sender_id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub receiver_id: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub double_vulnerability_request: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub password_command_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub password: rosidl_runtime_rs::String,

}



impl Default for RadarDecisionCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !radar_interfaces__msg__RadarDecisionCommand__init(&mut msg as *mut _) {
        panic!("Call to radar_interfaces__msg__RadarDecisionCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RadarDecisionCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarDecisionCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarDecisionCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { radar_interfaces__msg__RadarDecisionCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RadarDecisionCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RadarDecisionCommand where Self: Sized {
  const TYPE_NAME: &'static str = "radar_interfaces/msg/RadarDecisionCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__radar_interfaces__msg__RadarDecisionCommand() }
  }
}


