#pragma once
#include <cstddef>
#include <cstdint>
#include <optional>

namespace radar_comm {

enum class CmdID : uint16_t {
  RobotInteraction = 0x0301,
  MapRobotData = 0x0305,
  RadarMarkProgress = 0x020C,
  RadarInfo = 0x020E,
  EnemyRobotPosition = 0x0A01,
  EnemyRobotHP = 0x0A02,
  EnemyRemainingAmmo = 0x0A03,
  EnemyTeamMacroStatus = 0x0A04,
  EnemyRobotBuffs = 0x0A05,
  EnemyInterferenceKey = 0x0A06,
};

constexpr uint16_t to_uint16(CmdID cmd_id) noexcept {
  return static_cast<uint16_t>(cmd_id);
}

inline std::optional<CmdID> cmd_id_from_uint16(uint16_t value) noexcept {
  switch (value) {
  case to_uint16(CmdID::RobotInteraction):
    return CmdID::RobotInteraction;
  case to_uint16(CmdID::MapRobotData):
    return CmdID::MapRobotData;
  case to_uint16(CmdID::RadarMarkProgress):
    return CmdID::RadarMarkProgress;
  case to_uint16(CmdID::RadarInfo):
    return CmdID::RadarInfo;
  case to_uint16(CmdID::EnemyRobotPosition):
    return CmdID::EnemyRobotPosition;
  case to_uint16(CmdID::EnemyRobotHP):
    return CmdID::EnemyRobotHP;
  case to_uint16(CmdID::EnemyRemainingAmmo):
    return CmdID::EnemyRemainingAmmo;
  case to_uint16(CmdID::EnemyTeamMacroStatus):
    return CmdID::EnemyTeamMacroStatus;
  case to_uint16(CmdID::EnemyRobotBuffs):
    return CmdID::EnemyRobotBuffs;
  case to_uint16(CmdID::EnemyInterferenceKey):
    return CmdID::EnemyInterferenceKey;
  default:
    return std::nullopt;
  }
}

constexpr std::size_t expected_payload_length(CmdID cmd_id) noexcept {
  switch (cmd_id) {
  case CmdID::RobotInteraction:
    return 0;
  case CmdID::MapRobotData:
    return 48;
  case CmdID::RadarMarkProgress:
    return 2;
  case CmdID::RadarInfo:
    return 1;
  case CmdID::EnemyRobotPosition:
    return 24;
  case CmdID::EnemyRobotHP:
    return 12;
  case CmdID::EnemyRemainingAmmo:
    return 10;
  case CmdID::EnemyTeamMacroStatus:
    return 8;
  case CmdID::EnemyRobotBuffs:
    return 36;
  case CmdID::EnemyInterferenceKey:
    return 6;
  }

  return 0;
}

} // namespace radar_comm
