#pragma once
#include <array>
#include <cstdint>
#include <variant>

namespace radar_comm {

// ========================
//  协议 CMD ID 定义
// ========================

// 雷达决策数据（发送给裁判系统 / 下位机）
constexpr uint16_t kRadarDecisionDataCmdId = 0x0121;
// 自定义子命令：发送雷达状态给下位机
constexpr uint16_t kRadarInfoForwardDataCmdId = 0x0122;


// ========================
//  雷达标记进度（布尔状态集合）
// ========================
//  注意：bool 在通信中不能直接发送（需转 uint8_t）
struct RadarMarkProgress {
  bool enemy_hero_marked;        // 敌方英雄已标记
  bool enemy_engineer_marked;    // 敌方工程已标记
  bool enemy_infantry_3_marked;  // 敌方步兵3已标记
  bool enemy_infantry_4_marked;  // 敌方步兵4已标记
  bool enemy_aerial_marked;      // 敌方无人机已标记
  bool enemy_sentry_marked;      // 敌方哨兵已标记

  bool ally_hero_marked;         // 我方英雄已标记
  bool ally_engineer_marked;     // 我方工程已标记
  bool ally_infantry_3_marked;   // 我方步兵3已标记
  bool ally_infantry_4_marked;   // 我方步兵4已标记
  bool ally_aerial_marked;       // 我方无人机已标记
  bool ally_sentry_marked;       // 我方哨兵已标记
};


// ========================
// 雷达状态信息
// ========================
struct RadarInfo {
  uint8_t double_vulnerability_chances;     // 剩余双倍易伤次数
  bool opponent_double_vulnerability_active;// 敌方是否处于双倍易伤
  uint8_t encryption_level;                 // 加密等级
  bool key_change_enabled;                  // 是否允许换密钥
};

// ========================
//  雷达状态下发给下位机
// ========================
struct RadarInfoForward {
  uint16_t robot_id;                    // 下位机机器人ID
  uint8_t encryption_level;             // 己方加密等级/对方干扰波难度等级
};


// ========================
// 地图机器人数据（全场坐标）
// ========================
struct MapRobotData {
  uint16_t opponent_hero_x, opponent_hero_y;
  uint16_t opponent_engineer_x, opponent_engineer_y;
  uint16_t opponent_infantry_3_x, opponent_infantry_3_y;
  uint16_t opponent_infantry_4_x, opponent_infantry_4_y;
  uint16_t opponent_aerial_x, opponent_aerial_y;
  uint16_t opponent_sentry_x, opponent_sentry_y;

  uint16_t ally_hero_x, ally_hero_y;
  uint16_t ally_engineer_x, ally_engineer_y;
  uint16_t ally_infantry_3_x, ally_infantry_3_y;
  uint16_t ally_infantry_4_x, ally_infantry_4_y;
  uint16_t ally_aerial_x, ally_aerial_y;
  uint16_t ally_sentry_x, ally_sentry_y;
};


// ========================
//  雷达决策指令
// ========================
struct RadarDecisionCommand {
  uint16_t sender_id;                   // 发送者ID（本雷达ID）
  uint16_t receiver_id;                 // 接收者ID（裁判系统/其他设备）
  uint8_t double_vulnerability_request; // 请求触发双倍易伤
  uint8_t password_command_type;        // 密码操作类型
  std::array<char, 6> password;         // 6字节密码
};


// ========================
//  0x0A01 敌方机器人位置
// ========================
struct EnemyRobotPosition {
  uint16_t hero_x, hero_y;
  uint16_t engineer_x, engineer_y;
  uint16_t infantry_3_x, infantry_3_y;
  uint16_t infantry_4_x, infantry_4_y;
  uint16_t aerial_x, aerial_y;
  uint16_t sentry_x, sentry_y;
};


// ========================
// 0x0A02 敌方血量
// ========================
struct EnemyRobotHP {
  uint16_t hero_hp;
  uint16_t engineer_hp;
  uint16_t infantry_3_hp;
  uint16_t infantry_4_hp;
  uint16_t reserved;     // 预留字段（保持协议对齐）
  uint16_t sentry_hp;
};


// ========================
//  0x0A03 敌方剩余弹药
// ========================
struct EnemyRemainingAmmo {
  uint16_t hero_ammo;
  uint16_t infantry_3_ammo;
  uint16_t infantry_4_ammo;
  uint16_t aerial_ammo;
  uint16_t sentry_ammo;
};


// ========================
// 0x0A04 战场宏观状态
// ========================
struct EnemyTeamMacroStatus {

    uint16_t remaining_gold;  // 当前剩余金币
    uint16_t total_gold;      // 总金币

    bool enemy_supply_area_occupied;     // 补给区占领
    uint8_t enemy_central_highland_status; // 中央高地状态
    bool enemy_trapezoid_highland_occupied; // 梯形高地占领
    uint8_t enemy_fort_buff_status;      // 前哨buff状态
    uint8_t enemy_outpost_buff_status;   // 据点buff状态
    bool enemy_base_buff_occupied;       // 基地buff占领

    bool enemy_tunnel_pre_jump_occupied; // 敌方跳点前
    bool enemy_tunnel_post_jump_occupied;// 敌方跳点后

    bool ally_side_tunnel_pre_jump_occupied;
    bool ally_side_tunnel_post_jump_occupied;

    bool enemy_highland_upper_occupied;
    bool enemy_jump_upper_occupied;
    bool enemy_road_upper_occupied;
};


// ========================
//  0x0A05 敌方 Buff 状态
// ========================
struct EnemyRobotBuffs {

    // hero
    uint8_t hero_health_regen;     // 回血
    uint16_t hero_cooling_boost;   // 冷却缩减
    uint8_t hero_defense_boost;
    uint8_t hero_defense_debuff;
    uint16_t hero_attack_boost;

    // engineer
    uint8_t engineer_health_regen;
    uint16_t engineer_cooling_boost;
    uint8_t engineer_defense_boost;
    uint8_t engineer_defense_debuff;
    uint16_t engineer_attack_boost;

    // infantry 3
    uint8_t infantry_3_health_regen;
    uint16_t infantry_3_cooling_boost;
    uint8_t infantry_3_defense_boost;
    uint8_t infantry_3_defense_debuff;
    uint16_t infantry_3_attack_boost;

    // infantry 4
    uint8_t infantry_4_health_regen;
    uint16_t infantry_4_cooling_boost;
    uint8_t infantry_4_defense_boost;
    uint8_t infantry_4_defense_debuff;
    uint16_t infantry_4_attack_boost;

    // sentry
    uint8_t sentry_health_regen;
    uint16_t sentry_cooling_boost;
    uint8_t sentry_defense_boost;
    uint8_t sentry_defense_debuff;
    uint16_t sentry_attack_boost;
    uint8_t sentry_posture; // 哨兵姿态（攻击/防御）
};


// ========================
// 0x0A06 干扰密钥
// ========================
struct EnemyInterferenceKey {
    std::array<char, 6> key; // 6字节密钥
};


// ========================
// 统一数据类型（上层使用）
// ========================
// 用于 ROS2 / 内部逻辑
// 不可直接用于串口通信
using ProtocolData =
    std::variant<
        std::monostate,           // 空数据
        RadarMarkProgress,
        RadarInfo,
        RadarInfoForward,
        MapRobotData,
        RadarDecisionCommand,
        EnemyRobotPosition,
        EnemyRobotHP,
        EnemyRemainingAmmo,
        EnemyTeamMacroStatus,
        EnemyRobotBuffs,
        EnemyInterferenceKey>;

} // namespace radar_comm
