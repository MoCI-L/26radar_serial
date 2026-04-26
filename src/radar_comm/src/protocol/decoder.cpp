#include <cstring>
#include <vector>

#include "radar_comm/protocol/decoder.hpp"

namespace radar_comm {

template <typename T>
T read(const std::vector<uint8_t>& buf, size_t offset) {
    T value{};
    std::memcpy(&value, buf.data() + offset, sizeof(T));
    return value;
}

ProtocolData decode(uint16_t cmd_id, const std::vector<uint8_t>& p) {
    const auto typed_cmd_id = cmd_id_from_uint16(cmd_id);
    if (!typed_cmd_id.has_value()) {
        return std::monostate{};
    }

    return decode(*typed_cmd_id, p);
}

ProtocolData decode(CmdID cmd_id, const std::vector<uint8_t>& p) {
    if (cmd_id == CmdID::RobotInteraction) {
        if (p.size() != 14) {
            return std::monostate{};
        }

        const uint16_t data_cmd_id = read<uint16_t>(p, 0);
        if (data_cmd_id != kRadarDecisionDataCmdId) {
            return std::monostate{};
        }

        RadarDecisionCommand d{};
        d.sender_id = read<uint16_t>(p, 2);
        d.receiver_id = read<uint16_t>(p, 4);
        d.double_vulnerability_request = p[6];
        d.password_command_type = p[7];
        std::memcpy(d.password.data(), p.data() + 8, d.password.size());
        return d;
    }

    if (p.size() != expected_payload_length(cmd_id)) {
        return std::monostate{};
    }

    switch (cmd_id) {
    case CmdID::MapRobotData: {
        MapRobotData d{};
        d.opponent_hero_x = read<uint16_t>(p, 0);
        d.opponent_hero_y = read<uint16_t>(p, 2);
        d.opponent_engineer_x = read<uint16_t>(p, 4);
        d.opponent_engineer_y = read<uint16_t>(p, 6);
        d.opponent_infantry_3_x = read<uint16_t>(p, 8);
        d.opponent_infantry_3_y = read<uint16_t>(p, 10);
        d.opponent_infantry_4_x = read<uint16_t>(p, 12);
        d.opponent_infantry_4_y = read<uint16_t>(p, 14);
        d.opponent_aerial_x = read<uint16_t>(p, 16);
        d.opponent_aerial_y = read<uint16_t>(p, 18);
        d.opponent_sentry_x = read<uint16_t>(p, 20);
        d.opponent_sentry_y = read<uint16_t>(p, 22);
        d.ally_hero_x = read<uint16_t>(p, 24);
        d.ally_hero_y = read<uint16_t>(p, 26);
        d.ally_engineer_x = read<uint16_t>(p, 28);
        d.ally_engineer_y = read<uint16_t>(p, 30);
        d.ally_infantry_3_x = read<uint16_t>(p, 32);
        d.ally_infantry_3_y = read<uint16_t>(p, 34);
        d.ally_infantry_4_x = read<uint16_t>(p, 36);
        d.ally_infantry_4_y = read<uint16_t>(p, 38);
        d.ally_aerial_x = read<uint16_t>(p, 40);
        d.ally_aerial_y = read<uint16_t>(p, 42);
        d.ally_sentry_x = read<uint16_t>(p, 44);
        d.ally_sentry_y = read<uint16_t>(p, 46);
        return d;
    }

    case CmdID::RadarMarkProgress: {
        RadarMarkProgress d{};
        const uint16_t bits = read<uint16_t>(p, 0);
        d.enemy_hero_marked = bits & (1u << 0);
        d.enemy_engineer_marked = bits & (1u << 1);
        d.enemy_infantry_3_marked = bits & (1u << 2);
        d.enemy_infantry_4_marked = bits & (1u << 3);
        d.enemy_aerial_marked = bits & (1u << 4);
        d.enemy_sentry_marked = bits & (1u << 5);
        d.ally_hero_marked = bits & (1u << 6);
        d.ally_engineer_marked = bits & (1u << 7);
        d.ally_infantry_3_marked = bits & (1u << 8);
        d.ally_infantry_4_marked = bits & (1u << 9);
        d.ally_aerial_marked = bits & (1u << 10);
        d.ally_sentry_marked = bits & (1u << 11);
        return d;
    }

    case CmdID::RadarInfo: {
        RadarInfo d{};
        const uint8_t bits = p[0];
        d.double_vulnerability_chances = bits & 0x3u;
        d.opponent_double_vulnerability_active = bits & (1u << 2);
        d.encryption_level = (bits >> 3) & 0x3u;
        d.key_change_enabled = bits & (1u << 5);
        return d;
    }

    case CmdID::EnemyRobotPosition: {
        EnemyRobotPosition d{};
        d.hero_x = read<uint16_t>(p,0);
        d.hero_y = read<uint16_t>(p,2);
        d.engineer_x = read<uint16_t>(p,4);
        d.engineer_y = read<uint16_t>(p,6);
        d.infantry_3_x = read<uint16_t>(p,8);
        d.infantry_3_y = read<uint16_t>(p,10);
        d.infantry_4_x = read<uint16_t>(p,12);
        d.infantry_4_y = read<uint16_t>(p,14);
        d.aerial_x = read<uint16_t>(p,16);
        d.aerial_y = read<uint16_t>(p,18);
        d.sentry_x = read<uint16_t>(p,20);
        d.sentry_y = read<uint16_t>(p,22);
        return d;
    }

    case CmdID::EnemyRobotHP: {
        EnemyRobotHP d{};
        d.hero_hp = read<uint16_t>(p,0);
        d.engineer_hp = read<uint16_t>(p,2);
        d.infantry_3_hp = read<uint16_t>(p,4);
        d.infantry_4_hp = read<uint16_t>(p,6);
        d.reserved = read<uint16_t>(p,8);
        d.sentry_hp = read<uint16_t>(p,10);
        return d;
    }

    case CmdID::EnemyRemainingAmmo: {
        EnemyRemainingAmmo d{};
        d.hero_ammo = read<uint16_t>(p,0);
        d.infantry_3_ammo = read<uint16_t>(p,2);
        d.infantry_4_ammo = read<uint16_t>(p,4);
        d.aerial_ammo = read<uint16_t>(p,6);
        d.sentry_ammo = read<uint16_t>(p,8);
        return d;
    }

    case CmdID::EnemyTeamMacroStatus: {
        EnemyTeamMacroStatus d{};
        const uint32_t bits = read<uint32_t>(p,4);
        d.remaining_gold = read<uint16_t>(p,0);
        d.total_gold = read<uint16_t>(p,2);
        d.enemy_supply_area_occupied = bits & (1u << 0);
        d.enemy_central_highland_status = (bits >> 1) & 0x3u;
        d.enemy_trapezoid_highland_occupied = bits & (1u << 3);
        d.enemy_fort_buff_status = (bits >> 4) & 0x3u;
        d.enemy_outpost_buff_status = (bits >> 6) & 0x3u;
        d.enemy_base_buff_occupied = bits & (1u << 8);
        d.enemy_tunnel_pre_jump_occupied = bits & (1u << 9);
        d.enemy_tunnel_post_jump_occupied = bits & (1u << 10);
        d.ally_side_tunnel_pre_jump_occupied = bits & (1u << 11);
        d.ally_side_tunnel_post_jump_occupied = bits & (1u << 12);
        d.enemy_highland_upper_occupied = bits & (1u << 13);
        d.enemy_jump_upper_occupied = bits & (1u << 14);
        d.enemy_road_upper_occupied = bits & (1u << 15);
        return d;
    }

    case CmdID::EnemyRobotBuffs: {
        EnemyRobotBuffs d{};
        d.hero_health_regen = p[0];
        d.hero_cooling_boost = read<uint16_t>(p,1);
        d.hero_defense_boost = p[3];
        d.hero_defense_debuff = p[4];
        d.hero_attack_boost = read<uint16_t>(p,5);

        d.engineer_health_regen = p[7];
        d.engineer_cooling_boost = read<uint16_t>(p,8);
        d.engineer_defense_boost = p[10];
        d.engineer_defense_debuff = p[11];
        d.engineer_attack_boost = read<uint16_t>(p,12);

        d.infantry_3_health_regen = p[14];
        d.infantry_3_cooling_boost = read<uint16_t>(p,15);
        d.infantry_3_defense_boost = p[17];
        d.infantry_3_defense_debuff = p[18];
        d.infantry_3_attack_boost = read<uint16_t>(p,19);

        d.infantry_4_health_regen = p[21];
        d.infantry_4_cooling_boost = read<uint16_t>(p,22);
        d.infantry_4_defense_boost = p[24];
        d.infantry_4_defense_debuff = p[25];
        d.infantry_4_attack_boost = read<uint16_t>(p,26);

        d.sentry_health_regen = p[28];
        d.sentry_cooling_boost = read<uint16_t>(p,29);
        d.sentry_defense_boost = p[31];
        d.sentry_defense_debuff = p[32];
        d.sentry_attack_boost = read<uint16_t>(p,33);
        d.sentry_posture = p[35];
        return d;
    }

    case CmdID::EnemyInterferenceKey: {
        EnemyInterferenceKey d{};
        std::memcpy(d.key.data(), p.data(), 6);
        return d;
    }

    default:
        return std::monostate{};
    }
}

} // namespace radar_comm
