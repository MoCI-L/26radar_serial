#pragma once
#include <array>
#include <cstdint>
#include <variant>

namespace radar_comm {

constexpr uint16_t kRadarDecisionDataCmdId = 0x0121;

struct RadarMarkProgress {
  bool enemy_hero_marked;
  bool enemy_engineer_marked;
  bool enemy_infantry_3_marked;
  bool enemy_infantry_4_marked;
  bool enemy_aerial_marked;
  bool enemy_sentry_marked;
  bool ally_hero_marked;
  bool ally_engineer_marked;
  bool ally_infantry_3_marked;
  bool ally_infantry_4_marked;
  bool ally_aerial_marked;
  bool ally_sentry_marked;
};

struct RadarInfo {
  uint8_t double_vulnerability_chances;
  bool opponent_double_vulnerability_active;
  uint8_t encryption_level;
  bool key_change_enabled;
};

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

struct RadarDecisionCommand {
  uint16_t sender_id;
  uint16_t receiver_id;
  uint8_t double_vulnerability_request;
  uint8_t password_command_type;
  std::array<char, 6> password;
};

// 0x0A01
struct EnemyRobotPosition {
  uint16_t hero_x, hero_y;
  uint16_t engineer_x, engineer_y;
  uint16_t infantry_3_x, infantry_3_y;
  uint16_t infantry_4_x, infantry_4_y;
  uint16_t aerial_x, aerial_y;
  uint16_t sentry_x, sentry_y;
};

// 0x0A02
struct EnemyRobotHP {
  uint16_t hero_hp;
  uint16_t engineer_hp;
  uint16_t infantry_3_hp;
  uint16_t infantry_4_hp;
  uint16_t reserved;
  uint16_t sentry_hp;
};

// 0x0A03
struct EnemyRemainingAmmo {
  uint16_t hero_ammo;
  uint16_t infantry_3_ammo;
  uint16_t infantry_4_ammo;
  uint16_t aerial_ammo;
  uint16_t sentry_ammo;
};

// 0x0A04
struct EnemyTeamMacroStatus {
    uint16_t remaining_gold;
    uint16_t total_gold;

    bool enemy_supply_area_occupied;
    uint8_t enemy_central_highland_status;
    bool enemy_trapezoid_highland_occupied;
    uint8_t enemy_fort_buff_status;
    uint8_t enemy_outpost_buff_status;
    bool enemy_base_buff_occupied;
    bool enemy_tunnel_pre_jump_occupied;
    bool enemy_tunnel_post_jump_occupied;
    bool ally_side_tunnel_pre_jump_occupied;
    bool ally_side_tunnel_post_jump_occupied;
    bool enemy_highland_upper_occupied;
    bool enemy_jump_upper_occupied;
    bool enemy_road_upper_occupied;
};


// 0x0A05
struct EnemyRobotBuffs {

    uint8_t hero_health_regen;
    uint16_t hero_cooling_boost;
    uint8_t hero_defense_boost;
    uint8_t hero_defense_debuff;
    uint16_t hero_attack_boost;

    uint8_t engineer_health_regen;
    uint16_t engineer_cooling_boost;
    uint8_t engineer_defense_boost;
    uint8_t engineer_defense_debuff;
    uint16_t engineer_attack_boost;

    uint8_t infantry_3_health_regen;
    uint16_t infantry_3_cooling_boost;
    uint8_t infantry_3_defense_boost;
    uint8_t infantry_3_defense_debuff;
    uint16_t infantry_3_attack_boost;

    uint8_t infantry_4_health_regen;
    uint16_t infantry_4_cooling_boost;
    uint8_t infantry_4_defense_boost;
    uint8_t infantry_4_defense_debuff;
    uint16_t infantry_4_attack_boost;

    uint8_t sentry_health_regen;
    uint16_t sentry_cooling_boost;
    uint8_t sentry_defense_boost;
    uint8_t sentry_defense_debuff;
    uint16_t sentry_attack_boost;
    uint8_t sentry_posture;
};

// 0x0A06
struct EnemyInterferenceKey {
    std::array<char, 6> key;
};


// Variant统一类型
using ProtocolData =
    std::variant<std::monostate, RadarMarkProgress, RadarInfo, MapRobotData,
                 RadarDecisionCommand, EnemyRobotPosition, EnemyRobotHP,
                 EnemyRemainingAmmo, EnemyTeamMacroStatus, EnemyRobotBuffs,
                 EnemyInterferenceKey>;

} // namespace radar_comm
