#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to radar_interfaces__msg__EnemyPosition
/// 敌方所有机器人位置坐标，单位：cm (协议原始单位)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnemyPosition::default())
  }
}

impl rosidl_runtime_rs::Message for EnemyPosition {
  type RmwMsg = super::msg::rmw::EnemyPosition;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        hero_x: msg.hero_x,
        hero_y: msg.hero_y,
        engineer_x: msg.engineer_x,
        engineer_y: msg.engineer_y,
        infantry_3_x: msg.infantry_3_x,
        infantry_3_y: msg.infantry_3_y,
        infantry_4_x: msg.infantry_4_x,
        infantry_4_y: msg.infantry_4_y,
        aerial_x: msg.aerial_x,
        aerial_y: msg.aerial_y,
        sentry_x: msg.sentry_x,
        sentry_y: msg.sentry_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      hero_x: msg.hero_x,
      hero_y: msg.hero_y,
      engineer_x: msg.engineer_x,
      engineer_y: msg.engineer_y,
      infantry_3_x: msg.infantry_3_x,
      infantry_3_y: msg.infantry_3_y,
      infantry_4_x: msg.infantry_4_x,
      infantry_4_y: msg.infantry_4_y,
      aerial_x: msg.aerial_x,
      aerial_y: msg.aerial_y,
      sentry_x: msg.sentry_x,
      sentry_y: msg.sentry_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      hero_x: msg.hero_x,
      hero_y: msg.hero_y,
      engineer_x: msg.engineer_x,
      engineer_y: msg.engineer_y,
      infantry_3_x: msg.infantry_3_x,
      infantry_3_y: msg.infantry_3_y,
      infantry_4_x: msg.infantry_4_x,
      infantry_4_y: msg.infantry_4_y,
      aerial_x: msg.aerial_x,
      aerial_y: msg.aerial_y,
      sentry_x: msg.sentry_x,
      sentry_y: msg.sentry_y,
    }
  }
}


// Corresponds to radar_interfaces__msg__EnemyHP
/// 敌方各机器人血量

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnemyHP::default())
  }
}

impl rosidl_runtime_rs::Message for EnemyHP {
  type RmwMsg = super::msg::rmw::EnemyHP;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        hero_hp: msg.hero_hp,
        engineer_hp: msg.engineer_hp,
        infantry_3_hp: msg.infantry_3_hp,
        infantry_4_hp: msg.infantry_4_hp,
        reserved: msg.reserved,
        sentry_hp: msg.sentry_hp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      hero_hp: msg.hero_hp,
      engineer_hp: msg.engineer_hp,
      infantry_3_hp: msg.infantry_3_hp,
      infantry_4_hp: msg.infantry_4_hp,
      reserved: msg.reserved,
      sentry_hp: msg.sentry_hp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      hero_hp: msg.hero_hp,
      engineer_hp: msg.engineer_hp,
      infantry_3_hp: msg.infantry_3_hp,
      infantry_4_hp: msg.infantry_4_hp,
      reserved: msg.reserved,
      sentry_hp: msg.sentry_hp,
    }
  }
}


// Corresponds to radar_interfaces__msg__EnemyAmmo
/// 敌方剩余允许发弹量

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::EnemyAmmo::default())
  }
}

impl rosidl_runtime_rs::Message for EnemyAmmo {
  type RmwMsg = super::msg::rmw::EnemyAmmo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        hero_ammo: msg.hero_ammo,
        infantry_3_ammo: msg.infantry_3_ammo,
        infantry_4_ammo: msg.infantry_4_ammo,
        aerial_ammo: msg.aerial_ammo,
        sentry_ammo: msg.sentry_ammo,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      hero_ammo: msg.hero_ammo,
      infantry_3_ammo: msg.infantry_3_ammo,
      infantry_4_ammo: msg.infantry_4_ammo,
      aerial_ammo: msg.aerial_ammo,
      sentry_ammo: msg.sentry_ammo,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      hero_ammo: msg.hero_ammo,
      infantry_3_ammo: msg.infantry_3_ammo,
      infantry_4_ammo: msg.infantry_4_ammo,
      aerial_ammo: msg.aerial_ammo,
      sentry_ammo: msg.sentry_ammo,
    }
  }
}


// Corresponds to radar_interfaces__msg__MacroStatus
/// 对方队伍宏观状态

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MacroStatus::default())
  }
}

impl rosidl_runtime_rs::Message for MacroStatus {
  type RmwMsg = super::msg::rmw::MacroStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        remaining_gold: msg.remaining_gold,
        total_gold: msg.total_gold,
        enemy_supply_area_occupied: msg.enemy_supply_area_occupied,
        enemy_central_highland_status: msg.enemy_central_highland_status,
        enemy_trapezoid_highland_occupied: msg.enemy_trapezoid_highland_occupied,
        enemy_fort_buff_status: msg.enemy_fort_buff_status,
        enemy_outpost_buff_status: msg.enemy_outpost_buff_status,
        enemy_base_buff_occupied: msg.enemy_base_buff_occupied,
        enemy_tunnel_pre_jump_occupied: msg.enemy_tunnel_pre_jump_occupied,
        enemy_tunnel_post_jump_occupied: msg.enemy_tunnel_post_jump_occupied,
        ally_side_tunnel_pre_jump_occupied: msg.ally_side_tunnel_pre_jump_occupied,
        ally_side_tunnel_post_jump_occupied: msg.ally_side_tunnel_post_jump_occupied,
        enemy_highland_upper_occupied: msg.enemy_highland_upper_occupied,
        enemy_jump_upper_occupied: msg.enemy_jump_upper_occupied,
        enemy_road_upper_occupied: msg.enemy_road_upper_occupied,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      remaining_gold: msg.remaining_gold,
      total_gold: msg.total_gold,
      enemy_supply_area_occupied: msg.enemy_supply_area_occupied,
      enemy_central_highland_status: msg.enemy_central_highland_status,
      enemy_trapezoid_highland_occupied: msg.enemy_trapezoid_highland_occupied,
      enemy_fort_buff_status: msg.enemy_fort_buff_status,
      enemy_outpost_buff_status: msg.enemy_outpost_buff_status,
      enemy_base_buff_occupied: msg.enemy_base_buff_occupied,
      enemy_tunnel_pre_jump_occupied: msg.enemy_tunnel_pre_jump_occupied,
      enemy_tunnel_post_jump_occupied: msg.enemy_tunnel_post_jump_occupied,
      ally_side_tunnel_pre_jump_occupied: msg.ally_side_tunnel_pre_jump_occupied,
      ally_side_tunnel_post_jump_occupied: msg.ally_side_tunnel_post_jump_occupied,
      enemy_highland_upper_occupied: msg.enemy_highland_upper_occupied,
      enemy_jump_upper_occupied: msg.enemy_jump_upper_occupied,
      enemy_road_upper_occupied: msg.enemy_road_upper_occupied,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      remaining_gold: msg.remaining_gold,
      total_gold: msg.total_gold,
      enemy_supply_area_occupied: msg.enemy_supply_area_occupied,
      enemy_central_highland_status: msg.enemy_central_highland_status,
      enemy_trapezoid_highland_occupied: msg.enemy_trapezoid_highland_occupied,
      enemy_fort_buff_status: msg.enemy_fort_buff_status,
      enemy_outpost_buff_status: msg.enemy_outpost_buff_status,
      enemy_base_buff_occupied: msg.enemy_base_buff_occupied,
      enemy_tunnel_pre_jump_occupied: msg.enemy_tunnel_pre_jump_occupied,
      enemy_tunnel_post_jump_occupied: msg.enemy_tunnel_post_jump_occupied,
      ally_side_tunnel_pre_jump_occupied: msg.ally_side_tunnel_pre_jump_occupied,
      ally_side_tunnel_post_jump_occupied: msg.ally_side_tunnel_post_jump_occupied,
      enemy_highland_upper_occupied: msg.enemy_highland_upper_occupied,
      enemy_jump_upper_occupied: msg.enemy_jump_upper_occupied,
      enemy_road_upper_occupied: msg.enemy_road_upper_occupied,
    }
  }
}


// Corresponds to radar_interfaces__msg__Buffs
/// 英雄机器人增益

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Buffs::default())
  }
}

impl rosidl_runtime_rs::Message for Buffs {
  type RmwMsg = super::msg::rmw::Buffs;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        hero_health_regen: msg.hero_health_regen,
        hero_cooling_boost: msg.hero_cooling_boost,
        hero_defense_boost: msg.hero_defense_boost,
        hero_defense_debuff: msg.hero_defense_debuff,
        hero_attack_boost: msg.hero_attack_boost,
        engineer_health_regen: msg.engineer_health_regen,
        engineer_cooling_boost: msg.engineer_cooling_boost,
        engineer_defense_boost: msg.engineer_defense_boost,
        engineer_defense_debuff: msg.engineer_defense_debuff,
        engineer_attack_boost: msg.engineer_attack_boost,
        infantry_3_health_regen: msg.infantry_3_health_regen,
        infantry_3_cooling_boost: msg.infantry_3_cooling_boost,
        infantry_3_defense_boost: msg.infantry_3_defense_boost,
        infantry_3_defense_debuff: msg.infantry_3_defense_debuff,
        infantry_3_attack_boost: msg.infantry_3_attack_boost,
        infantry_4_health_regen: msg.infantry_4_health_regen,
        infantry_4_cooling_boost: msg.infantry_4_cooling_boost,
        infantry_4_defense_boost: msg.infantry_4_defense_boost,
        infantry_4_defense_debuff: msg.infantry_4_defense_debuff,
        infantry_4_attack_boost: msg.infantry_4_attack_boost,
        sentry_health_regen: msg.sentry_health_regen,
        sentry_cooling_boost: msg.sentry_cooling_boost,
        sentry_defense_boost: msg.sentry_defense_boost,
        sentry_defense_debuff: msg.sentry_defense_debuff,
        sentry_attack_boost: msg.sentry_attack_boost,
        sentry_posture: msg.sentry_posture,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      hero_health_regen: msg.hero_health_regen,
      hero_cooling_boost: msg.hero_cooling_boost,
      hero_defense_boost: msg.hero_defense_boost,
      hero_defense_debuff: msg.hero_defense_debuff,
      hero_attack_boost: msg.hero_attack_boost,
      engineer_health_regen: msg.engineer_health_regen,
      engineer_cooling_boost: msg.engineer_cooling_boost,
      engineer_defense_boost: msg.engineer_defense_boost,
      engineer_defense_debuff: msg.engineer_defense_debuff,
      engineer_attack_boost: msg.engineer_attack_boost,
      infantry_3_health_regen: msg.infantry_3_health_regen,
      infantry_3_cooling_boost: msg.infantry_3_cooling_boost,
      infantry_3_defense_boost: msg.infantry_3_defense_boost,
      infantry_3_defense_debuff: msg.infantry_3_defense_debuff,
      infantry_3_attack_boost: msg.infantry_3_attack_boost,
      infantry_4_health_regen: msg.infantry_4_health_regen,
      infantry_4_cooling_boost: msg.infantry_4_cooling_boost,
      infantry_4_defense_boost: msg.infantry_4_defense_boost,
      infantry_4_defense_debuff: msg.infantry_4_defense_debuff,
      infantry_4_attack_boost: msg.infantry_4_attack_boost,
      sentry_health_regen: msg.sentry_health_regen,
      sentry_cooling_boost: msg.sentry_cooling_boost,
      sentry_defense_boost: msg.sentry_defense_boost,
      sentry_defense_debuff: msg.sentry_defense_debuff,
      sentry_attack_boost: msg.sentry_attack_boost,
      sentry_posture: msg.sentry_posture,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      hero_health_regen: msg.hero_health_regen,
      hero_cooling_boost: msg.hero_cooling_boost,
      hero_defense_boost: msg.hero_defense_boost,
      hero_defense_debuff: msg.hero_defense_debuff,
      hero_attack_boost: msg.hero_attack_boost,
      engineer_health_regen: msg.engineer_health_regen,
      engineer_cooling_boost: msg.engineer_cooling_boost,
      engineer_defense_boost: msg.engineer_defense_boost,
      engineer_defense_debuff: msg.engineer_defense_debuff,
      engineer_attack_boost: msg.engineer_attack_boost,
      infantry_3_health_regen: msg.infantry_3_health_regen,
      infantry_3_cooling_boost: msg.infantry_3_cooling_boost,
      infantry_3_defense_boost: msg.infantry_3_defense_boost,
      infantry_3_defense_debuff: msg.infantry_3_defense_debuff,
      infantry_3_attack_boost: msg.infantry_3_attack_boost,
      infantry_4_health_regen: msg.infantry_4_health_regen,
      infantry_4_cooling_boost: msg.infantry_4_cooling_boost,
      infantry_4_defense_boost: msg.infantry_4_defense_boost,
      infantry_4_defense_debuff: msg.infantry_4_defense_debuff,
      infantry_4_attack_boost: msg.infantry_4_attack_boost,
      sentry_health_regen: msg.sentry_health_regen,
      sentry_cooling_boost: msg.sentry_cooling_boost,
      sentry_defense_boost: msg.sentry_defense_boost,
      sentry_defense_debuff: msg.sentry_defense_debuff,
      sentry_attack_boost: msg.sentry_attack_boost,
      sentry_posture: msg.sentry_posture,
    }
  }
}


// Corresponds to radar_interfaces__msg__InterferenceKey
/// 对方干扰波密钥，6字节ASCII

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InterferenceKey {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: std::string::String,

}



impl Default for InterferenceKey {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::InterferenceKey::default())
  }
}

impl rosidl_runtime_rs::Message for InterferenceKey {
  type RmwMsg = super::msg::rmw::InterferenceKey;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        key: msg.key.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      key: msg.key.to_string(),
    }
  }
}


// Corresponds to radar_interfaces__msg__RadarMarkProgress
/// 雷达标记进度状态，敌方机器人阈值为100，己方机器人阈值为50

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarMarkProgress::default())
  }
}

impl rosidl_runtime_rs::Message for RadarMarkProgress {
  type RmwMsg = super::msg::rmw::RadarMarkProgress;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        enemy_hero_marked: msg.enemy_hero_marked,
        enemy_engineer_marked: msg.enemy_engineer_marked,
        enemy_infantry_3_marked: msg.enemy_infantry_3_marked,
        enemy_infantry_4_marked: msg.enemy_infantry_4_marked,
        enemy_aerial_marked: msg.enemy_aerial_marked,
        enemy_sentry_marked: msg.enemy_sentry_marked,
        ally_hero_marked: msg.ally_hero_marked,
        ally_engineer_marked: msg.ally_engineer_marked,
        ally_infantry_3_marked: msg.ally_infantry_3_marked,
        ally_infantry_4_marked: msg.ally_infantry_4_marked,
        ally_aerial_marked: msg.ally_aerial_marked,
        ally_sentry_marked: msg.ally_sentry_marked,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      enemy_hero_marked: msg.enemy_hero_marked,
      enemy_engineer_marked: msg.enemy_engineer_marked,
      enemy_infantry_3_marked: msg.enemy_infantry_3_marked,
      enemy_infantry_4_marked: msg.enemy_infantry_4_marked,
      enemy_aerial_marked: msg.enemy_aerial_marked,
      enemy_sentry_marked: msg.enemy_sentry_marked,
      ally_hero_marked: msg.ally_hero_marked,
      ally_engineer_marked: msg.ally_engineer_marked,
      ally_infantry_3_marked: msg.ally_infantry_3_marked,
      ally_infantry_4_marked: msg.ally_infantry_4_marked,
      ally_aerial_marked: msg.ally_aerial_marked,
      ally_sentry_marked: msg.ally_sentry_marked,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      enemy_hero_marked: msg.enemy_hero_marked,
      enemy_engineer_marked: msg.enemy_engineer_marked,
      enemy_infantry_3_marked: msg.enemy_infantry_3_marked,
      enemy_infantry_4_marked: msg.enemy_infantry_4_marked,
      enemy_aerial_marked: msg.enemy_aerial_marked,
      enemy_sentry_marked: msg.enemy_sentry_marked,
      ally_hero_marked: msg.ally_hero_marked,
      ally_engineer_marked: msg.ally_engineer_marked,
      ally_infantry_3_marked: msg.ally_infantry_3_marked,
      ally_infantry_4_marked: msg.ally_infantry_4_marked,
      ally_aerial_marked: msg.ally_aerial_marked,
      ally_sentry_marked: msg.ally_sentry_marked,
    }
  }
}


// Corresponds to radar_interfaces__msg__RadarInfo
/// 雷达自主决策状态

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarInfo::default())
  }
}

impl rosidl_runtime_rs::Message for RadarInfo {
  type RmwMsg = super::msg::rmw::RadarInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        double_vulnerability_chances: msg.double_vulnerability_chances,
        opponent_double_vulnerability_active: msg.opponent_double_vulnerability_active,
        encryption_level: msg.encryption_level,
        key_change_enabled: msg.key_change_enabled,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      double_vulnerability_chances: msg.double_vulnerability_chances,
      opponent_double_vulnerability_active: msg.opponent_double_vulnerability_active,
      encryption_level: msg.encryption_level,
      key_change_enabled: msg.key_change_enabled,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      double_vulnerability_chances: msg.double_vulnerability_chances,
      opponent_double_vulnerability_active: msg.opponent_double_vulnerability_active,
      encryption_level: msg.encryption_level,
      key_change_enabled: msg.key_change_enabled,
    }
  }
}


// Corresponds to radar_interfaces__msg__MapRobotData
/// 雷达发送给己方选手端小地图的双边机器人坐标，单位：cm

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MapRobotData::default())
  }
}

impl rosidl_runtime_rs::Message for MapRobotData {
  type RmwMsg = super::msg::rmw::MapRobotData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        opponent_hero_x: msg.opponent_hero_x,
        opponent_hero_y: msg.opponent_hero_y,
        opponent_engineer_x: msg.opponent_engineer_x,
        opponent_engineer_y: msg.opponent_engineer_y,
        opponent_infantry_3_x: msg.opponent_infantry_3_x,
        opponent_infantry_3_y: msg.opponent_infantry_3_y,
        opponent_infantry_4_x: msg.opponent_infantry_4_x,
        opponent_infantry_4_y: msg.opponent_infantry_4_y,
        opponent_aerial_x: msg.opponent_aerial_x,
        opponent_aerial_y: msg.opponent_aerial_y,
        opponent_sentry_x: msg.opponent_sentry_x,
        opponent_sentry_y: msg.opponent_sentry_y,
        ally_hero_x: msg.ally_hero_x,
        ally_hero_y: msg.ally_hero_y,
        ally_engineer_x: msg.ally_engineer_x,
        ally_engineer_y: msg.ally_engineer_y,
        ally_infantry_3_x: msg.ally_infantry_3_x,
        ally_infantry_3_y: msg.ally_infantry_3_y,
        ally_infantry_4_x: msg.ally_infantry_4_x,
        ally_infantry_4_y: msg.ally_infantry_4_y,
        ally_aerial_x: msg.ally_aerial_x,
        ally_aerial_y: msg.ally_aerial_y,
        ally_sentry_x: msg.ally_sentry_x,
        ally_sentry_y: msg.ally_sentry_y,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      opponent_hero_x: msg.opponent_hero_x,
      opponent_hero_y: msg.opponent_hero_y,
      opponent_engineer_x: msg.opponent_engineer_x,
      opponent_engineer_y: msg.opponent_engineer_y,
      opponent_infantry_3_x: msg.opponent_infantry_3_x,
      opponent_infantry_3_y: msg.opponent_infantry_3_y,
      opponent_infantry_4_x: msg.opponent_infantry_4_x,
      opponent_infantry_4_y: msg.opponent_infantry_4_y,
      opponent_aerial_x: msg.opponent_aerial_x,
      opponent_aerial_y: msg.opponent_aerial_y,
      opponent_sentry_x: msg.opponent_sentry_x,
      opponent_sentry_y: msg.opponent_sentry_y,
      ally_hero_x: msg.ally_hero_x,
      ally_hero_y: msg.ally_hero_y,
      ally_engineer_x: msg.ally_engineer_x,
      ally_engineer_y: msg.ally_engineer_y,
      ally_infantry_3_x: msg.ally_infantry_3_x,
      ally_infantry_3_y: msg.ally_infantry_3_y,
      ally_infantry_4_x: msg.ally_infantry_4_x,
      ally_infantry_4_y: msg.ally_infantry_4_y,
      ally_aerial_x: msg.ally_aerial_x,
      ally_aerial_y: msg.ally_aerial_y,
      ally_sentry_x: msg.ally_sentry_x,
      ally_sentry_y: msg.ally_sentry_y,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      opponent_hero_x: msg.opponent_hero_x,
      opponent_hero_y: msg.opponent_hero_y,
      opponent_engineer_x: msg.opponent_engineer_x,
      opponent_engineer_y: msg.opponent_engineer_y,
      opponent_infantry_3_x: msg.opponent_infantry_3_x,
      opponent_infantry_3_y: msg.opponent_infantry_3_y,
      opponent_infantry_4_x: msg.opponent_infantry_4_x,
      opponent_infantry_4_y: msg.opponent_infantry_4_y,
      opponent_aerial_x: msg.opponent_aerial_x,
      opponent_aerial_y: msg.opponent_aerial_y,
      opponent_sentry_x: msg.opponent_sentry_x,
      opponent_sentry_y: msg.opponent_sentry_y,
      ally_hero_x: msg.ally_hero_x,
      ally_hero_y: msg.ally_hero_y,
      ally_engineer_x: msg.ally_engineer_x,
      ally_engineer_y: msg.ally_engineer_y,
      ally_infantry_3_x: msg.ally_infantry_3_x,
      ally_infantry_3_y: msg.ally_infantry_3_y,
      ally_infantry_4_x: msg.ally_infantry_4_x,
      ally_infantry_4_y: msg.ally_infantry_4_y,
      ally_aerial_x: msg.ally_aerial_x,
      ally_aerial_y: msg.ally_aerial_y,
      ally_sentry_x: msg.ally_sentry_x,
      ally_sentry_y: msg.ally_sentry_y,
    }
  }
}


// Corresponds to radar_interfaces__msg__RadarDecisionCommand
/// 雷达通过0x0301/0x0121上报的自主决策指令

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub password: std::string::String,

}



impl Default for RadarDecisionCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RadarDecisionCommand::default())
  }
}

impl rosidl_runtime_rs::Message for RadarDecisionCommand {
  type RmwMsg = super::msg::rmw::RadarDecisionCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        sender_id: msg.sender_id,
        receiver_id: msg.receiver_id,
        double_vulnerability_request: msg.double_vulnerability_request,
        password_command_type: msg.password_command_type,
        password: msg.password.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      sender_id: msg.sender_id,
      receiver_id: msg.receiver_id,
      double_vulnerability_request: msg.double_vulnerability_request,
      password_command_type: msg.password_command_type,
        password: msg.password.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      sender_id: msg.sender_id,
      receiver_id: msg.receiver_id,
      double_vulnerability_request: msg.double_vulnerability_request,
      password_command_type: msg.password_command_type,
      password: msg.password.to_string(),
    }
  }
}


