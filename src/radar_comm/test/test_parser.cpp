#include "radar_comm/protocol/encoder.hpp"
#include "radar_comm/protocol/parser.hpp"

#include <iostream>

namespace {

template <typename T, typename Checker>
bool round_trip(const radar_comm::ProtocolData& data,
                const T& expected,
                const Checker& check) {
  radar_comm::ProtocolParser parser;
  const auto frame = radar_comm::encode_frame(data, 7);
  if (!frame.has_value()) {
    return false;
  }

  for (const auto byte : *frame) {
    auto result = parser.input(byte);
    if (!result.has_value()) {
      continue;
    }

    if (const auto* decoded = std::get_if<T>(&result.value()); decoded != nullptr) {
      (void)expected;
      return check(*decoded);
    }

    return false;
  }

  return false;
}

} // namespace

int main() {
  const radar_comm::EnemyRobotPosition position{
      100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
  if (!round_trip<radar_comm::EnemyRobotPosition>(
          position, position,
          [&](const radar_comm::EnemyRobotPosition& decoded) {
            return decoded.hero_x == position.hero_x &&
                   decoded.sentry_y == position.sentry_y;
          })) {
    std::cerr << "EnemyRobotPosition round trip failed\n";
    return 1;
  }

  const radar_comm::RadarMarkProgress mark_progress{
      true, false, true, false, true, false,
      true, true, false, false, true, true};
  if (!round_trip<radar_comm::RadarMarkProgress>(
          mark_progress, mark_progress,
          [&](const radar_comm::RadarMarkProgress& decoded) {
            return decoded.enemy_hero_marked == mark_progress.enemy_hero_marked &&
                   decoded.enemy_aerial_marked == mark_progress.enemy_aerial_marked &&
                   decoded.ally_sentry_marked == mark_progress.ally_sentry_marked;
          })) {
    std::cerr << "RadarMarkProgress round trip failed\n";
    return 1;
  }

  const radar_comm::RadarInfo radar_info{2, true, 3, true};
  if (!round_trip<radar_comm::RadarInfo>(
          radar_info, radar_info,
          [&](const radar_comm::RadarInfo& decoded) {
            return decoded.double_vulnerability_chances == radar_info.double_vulnerability_chances &&
                   decoded.opponent_double_vulnerability_active == radar_info.opponent_double_vulnerability_active &&
                   decoded.encryption_level == radar_info.encryption_level &&
                   decoded.key_change_enabled == radar_info.key_change_enabled;
          })) {
    std::cerr << "RadarInfo round trip failed\n";
    return 1;
  }

  const radar_comm::MapRobotData map_data{
      10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120,
      130, 140, 150, 160, 170, 180, 190, 200, 210, 220, 230, 240};
  if (!round_trip<radar_comm::MapRobotData>(
          map_data, map_data,
          [&](const radar_comm::MapRobotData& decoded) {
            return decoded.opponent_hero_x == map_data.opponent_hero_x &&
                   decoded.opponent_sentry_y == map_data.opponent_sentry_y &&
                   decoded.ally_sentry_y == map_data.ally_sentry_y;
          })) {
    std::cerr << "MapRobotData round trip failed\n";
    return 1;
  }

  const radar_comm::RadarDecisionCommand decision_command{
      109, 0x8080, 2, 1, {'A', '1', 'B', '2', 'C', '3'}};
  if (!round_trip<radar_comm::RadarDecisionCommand>(
          decision_command, decision_command,
          [&](const radar_comm::RadarDecisionCommand& decoded) {
            return decoded.sender_id == decision_command.sender_id &&
                   decoded.receiver_id == decision_command.receiver_id &&
                   decoded.double_vulnerability_request ==
                       decision_command.double_vulnerability_request &&
                   decoded.password_command_type ==
                       decision_command.password_command_type &&
                   decoded.password == decision_command.password;
          })) {
    std::cerr << "RadarDecisionCommand round trip failed\n";
    return 1;
  }

  std::cout << "Parser OK\n";
  return 0;
}
