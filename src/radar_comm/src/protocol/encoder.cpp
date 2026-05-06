#include "radar_comm/protocol/encoder.hpp"

#include <cstring>

#include "radar_comm/protocol/crc.hpp"
#include "radar_comm/protocol/frame.hpp"

namespace radar_comm {

namespace {

void push_u8(std::vector<uint8_t>& out, uint8_t value) { out.push_back(value); }

void push_u16(std::vector<uint8_t>& out, uint16_t value) {
  out.push_back(static_cast<uint8_t>(value & 0xFF));
  out.push_back(static_cast<uint8_t>((value >> 8) & 0xFF));
}

void push_u32(std::vector<uint8_t>& out, uint32_t value) {
  out.push_back(static_cast<uint8_t>(value & 0xFF));
  out.push_back(static_cast<uint8_t>((value >> 8) & 0xFF));
  out.push_back(static_cast<uint8_t>((value >> 16) & 0xFF));
  out.push_back(static_cast<uint8_t>((value >> 24) & 0xFF));
}

} // namespace

std::optional<CmdID> cmd_id_for_data(const ProtocolData& data) {
  return std::visit(
      [](auto&& value) -> std::optional<CmdID> {
        using T = std::decay_t<decltype(value)>;
        if constexpr (std::is_same_v<T, RadarMarkProgress>) {
          return CmdID::RadarMarkProgress;
        } else if constexpr (std::is_same_v<T, RadarInfo>) {
          return CmdID::RadarInfo;
        } else if constexpr (std::is_same_v<T, RadarInfoForward>) {
          return CmdID::RobotInteraction;
        } else if constexpr (std::is_same_v<T, MapRobotData>) {
          return CmdID::MapRobotData;
        } else if constexpr (std::is_same_v<T, RadarDecisionCommand>) {
          return CmdID::RobotInteraction;
        } else if constexpr (std::is_same_v<T, EnemyRobotPosition>) {
          return CmdID::EnemyRobotPosition;
        } else if constexpr (std::is_same_v<T, EnemyRobotHP>) {
          return CmdID::EnemyRobotHP;
        } else if constexpr (std::is_same_v<T, EnemyRemainingAmmo>) {
          return CmdID::EnemyRemainingAmmo;
        } else if constexpr (std::is_same_v<T, EnemyTeamMacroStatus>) {
          return CmdID::EnemyTeamMacroStatus;
        } else if constexpr (std::is_same_v<T, EnemyRobotBuffs>) {
          return CmdID::EnemyRobotBuffs;
        } else if constexpr (std::is_same_v<T, EnemyInterferenceKey>) {
          return CmdID::EnemyInterferenceKey;
        } else {
          return std::nullopt;
        }
      },
      data);
}

std::vector<uint8_t> encode_payload(const RadarMarkProgress& data) {
  std::vector<uint8_t> out;
  out.reserve(expected_payload_length(CmdID::RadarMarkProgress));

  uint16_t bits = 0;
  bits |= static_cast<uint16_t>(data.enemy_hero_marked) << 0;
  bits |= static_cast<uint16_t>(data.enemy_engineer_marked) << 1;
  bits |= static_cast<uint16_t>(data.enemy_infantry_3_marked) << 2;
  bits |= static_cast<uint16_t>(data.enemy_infantry_4_marked) << 3;
  bits |= static_cast<uint16_t>(data.enemy_aerial_marked) << 4;
  bits |= static_cast<uint16_t>(data.enemy_sentry_marked) << 5;
  bits |= static_cast<uint16_t>(data.ally_hero_marked) << 6;
  bits |= static_cast<uint16_t>(data.ally_engineer_marked) << 7;
  bits |= static_cast<uint16_t>(data.ally_infantry_3_marked) << 8;
  bits |= static_cast<uint16_t>(data.ally_infantry_4_marked) << 9;
  bits |= static_cast<uint16_t>(data.ally_aerial_marked) << 10;
  bits |= static_cast<uint16_t>(data.ally_sentry_marked) << 11;

  push_u16(out, bits);
  return out;
}

std::vector<uint8_t> encode_payload(const RadarInfo& data) {
  std::vector<uint8_t> out;
  out.reserve(expected_payload_length(CmdID::RadarInfo));

  uint8_t bits = 0;
  bits |= data.double_vulnerability_chances & 0x3u;
  bits |= static_cast<uint8_t>(data.opponent_double_vulnerability_active) << 2;
  bits |= (data.encryption_level & 0x3u) << 3;
  bits |= static_cast<uint8_t>(data.key_change_enabled) << 5;
  push_u8(out, bits);
  return out;
}

std::vector<uint8_t> encode_payload(const RadarInfoForward& data) {
  std::vector<uint8_t> out;
  out.reserve(5);

  push_u16(out, kRadarInfoForwardDataCmdId);
  push_u16(out, data.robot_id);
  push_u8(out, data.encryption_level & 0x3u);
  return out;
}

std::vector<uint8_t> encode_payload(const MapRobotData& data) {
  std::vector<uint8_t> out;
  out.reserve(expected_payload_length(CmdID::MapRobotData));

  push_u16(out, data.opponent_hero_x);
  push_u16(out, data.opponent_hero_y);
  push_u16(out, data.opponent_engineer_x);
  push_u16(out, data.opponent_engineer_y);
  push_u16(out, data.opponent_infantry_3_x);
  push_u16(out, data.opponent_infantry_3_y);
  push_u16(out, data.opponent_infantry_4_x);
  push_u16(out, data.opponent_infantry_4_y);
  push_u16(out, data.opponent_aerial_x);
  push_u16(out, data.opponent_aerial_y);
  push_u16(out, data.opponent_sentry_x);
  push_u16(out, data.opponent_sentry_y);
  push_u16(out, data.ally_hero_x);
  push_u16(out, data.ally_hero_y);
  push_u16(out, data.ally_engineer_x);
  push_u16(out, data.ally_engineer_y);
  push_u16(out, data.ally_infantry_3_x);
  push_u16(out, data.ally_infantry_3_y);
  push_u16(out, data.ally_infantry_4_x);
  push_u16(out, data.ally_infantry_4_y);
  push_u16(out, data.ally_aerial_x);
  push_u16(out, data.ally_aerial_y);
  push_u16(out, data.ally_sentry_x);
  push_u16(out, data.ally_sentry_y);
  return out;
}

std::vector<uint8_t> encode_payload(const RadarDecisionCommand& data) {
  std::vector<uint8_t> out;
  out.reserve(14);

  push_u16(out, kRadarDecisionDataCmdId);
  push_u16(out, data.sender_id);
  push_u16(out, data.receiver_id);
  push_u8(out, data.double_vulnerability_request);
  push_u8(out, data.password_command_type);
  out.insert(out.end(), data.password.begin(), data.password.end());
  return out;
}

std::vector<uint8_t> encode_payload(const EnemyRobotPosition& data) {
  std::vector<uint8_t> out;
  out.reserve(expected_payload_length(CmdID::EnemyRobotPosition));
  push_u16(out, data.hero_x);
  push_u16(out, data.hero_y);
  push_u16(out, data.engineer_x);
  push_u16(out, data.engineer_y);
  push_u16(out, data.infantry_3_x);
  push_u16(out, data.infantry_3_y);
  push_u16(out, data.infantry_4_x);
  push_u16(out, data.infantry_4_y);
  push_u16(out, data.aerial_x);
  push_u16(out, data.aerial_y);
  push_u16(out, data.sentry_x);
  push_u16(out, data.sentry_y);
  return out;
}

std::vector<uint8_t> encode_payload(const EnemyRobotHP& data) {
  std::vector<uint8_t> out;
  out.reserve(expected_payload_length(CmdID::EnemyRobotHP));
  push_u16(out, data.hero_hp);
  push_u16(out, data.engineer_hp);
  push_u16(out, data.infantry_3_hp);
  push_u16(out, data.infantry_4_hp);
  push_u16(out, data.reserved);
  push_u16(out, data.sentry_hp);
  return out;
}

std::vector<uint8_t> encode_payload(const EnemyRemainingAmmo& data) {
  std::vector<uint8_t> out;
  out.reserve(expected_payload_length(CmdID::EnemyRemainingAmmo));
  push_u16(out, data.hero_ammo);
  push_u16(out, data.infantry_3_ammo);
  push_u16(out, data.infantry_4_ammo);
  push_u16(out, data.aerial_ammo);
  push_u16(out, data.sentry_ammo);
  return out;
}

std::vector<uint8_t> encode_payload(const EnemyTeamMacroStatus& data) {
  std::vector<uint8_t> out;
  out.reserve(expected_payload_length(CmdID::EnemyTeamMacroStatus));

  uint32_t bits = 0;
  bits |= static_cast<uint32_t>(data.enemy_supply_area_occupied) << 0;
  bits |= static_cast<uint32_t>(data.enemy_central_highland_status & 0x3u) << 1;
  bits |= static_cast<uint32_t>(data.enemy_trapezoid_highland_occupied) << 3;
  bits |= static_cast<uint32_t>(data.enemy_fort_buff_status & 0x3u) << 4;
  bits |= static_cast<uint32_t>(data.enemy_outpost_buff_status & 0x3u) << 6;
  bits |= static_cast<uint32_t>(data.enemy_base_buff_occupied) << 8;
  bits |= static_cast<uint32_t>(data.enemy_tunnel_pre_jump_occupied) << 9;
  bits |= static_cast<uint32_t>(data.enemy_tunnel_post_jump_occupied) << 10;
  bits |= static_cast<uint32_t>(data.ally_side_tunnel_pre_jump_occupied) << 11;
  bits |= static_cast<uint32_t>(data.ally_side_tunnel_post_jump_occupied) << 12;
  bits |= static_cast<uint32_t>(data.enemy_highland_upper_occupied) << 13;
  bits |= static_cast<uint32_t>(data.enemy_jump_upper_occupied) << 14;
  bits |= static_cast<uint32_t>(data.enemy_road_upper_occupied) << 15;

  push_u16(out, data.remaining_gold);
  push_u16(out, data.total_gold);
  push_u32(out, bits);
  return out;
}

std::vector<uint8_t> encode_payload(const EnemyRobotBuffs& data) {
  std::vector<uint8_t> out;
  out.reserve(expected_payload_length(CmdID::EnemyRobotBuffs));

  push_u8(out, data.hero_health_regen);
  push_u16(out, data.hero_cooling_boost);
  push_u8(out, data.hero_defense_boost);
  push_u8(out, data.hero_defense_debuff);
  push_u16(out, data.hero_attack_boost);

  push_u8(out, data.engineer_health_regen);
  push_u16(out, data.engineer_cooling_boost);
  push_u8(out, data.engineer_defense_boost);
  push_u8(out, data.engineer_defense_debuff);
  push_u16(out, data.engineer_attack_boost);

  push_u8(out, data.infantry_3_health_regen);
  push_u16(out, data.infantry_3_cooling_boost);
  push_u8(out, data.infantry_3_defense_boost);
  push_u8(out, data.infantry_3_defense_debuff);
  push_u16(out, data.infantry_3_attack_boost);

  push_u8(out, data.infantry_4_health_regen);
  push_u16(out, data.infantry_4_cooling_boost);
  push_u8(out, data.infantry_4_defense_boost);
  push_u8(out, data.infantry_4_defense_debuff);
  push_u16(out, data.infantry_4_attack_boost);

  push_u8(out, data.sentry_health_regen);
  push_u16(out, data.sentry_cooling_boost);
  push_u8(out, data.sentry_defense_boost);
  push_u8(out, data.sentry_defense_debuff);
  push_u16(out, data.sentry_attack_boost);
  push_u8(out, data.sentry_posture);

  return out;
}

std::vector<uint8_t> encode_payload(const EnemyInterferenceKey& data) {
  return std::vector<uint8_t>(data.key.begin(), data.key.end());
}

std::vector<uint8_t> encode_payload(const ProtocolData& data) {
  return std::visit(
      [](auto&& value) -> std::vector<uint8_t> {
        using T = std::decay_t<decltype(value)>;
        if constexpr (std::is_same_v<T, std::monostate>) {
          return {};
        } else {
          return encode_payload(value);
        }
      },
      data);
}

std::vector<uint8_t> encode_frame(CmdID cmd_id,
                                  const std::vector<uint8_t>& payload,
                                  uint8_t seq) {
  std::vector<uint8_t> frame;
  frame.reserve(kFrameOverhead + payload.size());

  frame.push_back(kFrameSof);
  push_u16(frame, static_cast<uint16_t>(payload.size()));
  frame.push_back(seq);
  frame.push_back(0);
  frame[4] = get_crc8(frame.data(), static_cast<uint32_t>(frame.size() - 1));

  push_u16(frame, to_uint16(cmd_id));
  frame.insert(frame.end(), payload.begin(), payload.end());

  const uint16_t crc16 = get_crc16(frame.data(), static_cast<uint32_t>(frame.size()));
  push_u16(frame, crc16);
  return frame;
}

std::optional<std::vector<uint8_t>> encode_frame(const ProtocolData& data,
                                                 uint8_t seq) {
  const auto cmd_id = cmd_id_for_data(data);
  if (!cmd_id.has_value()) {
    return std::nullopt;
  }

  return encode_frame(*cmd_id, encode_payload(data), seq);
}

} // namespace radar_comm
