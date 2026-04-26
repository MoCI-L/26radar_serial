#pragma once

#include <optional>
#include <vector>

#include "radar_comm/protocol/cmd_id.hpp"
#include "radar_comm/protocol/types.hpp"

namespace radar_comm {

std::optional<CmdID> cmd_id_for_data(const ProtocolData& data);

std::vector<uint8_t> encode_payload(const RadarMarkProgress& data);
std::vector<uint8_t> encode_payload(const RadarInfo& data);
std::vector<uint8_t> encode_payload(const MapRobotData& data);
std::vector<uint8_t> encode_payload(const RadarDecisionCommand& data);
std::vector<uint8_t> encode_payload(const EnemyRobotPosition& data);
std::vector<uint8_t> encode_payload(const EnemyRobotHP& data);
std::vector<uint8_t> encode_payload(const EnemyRemainingAmmo& data);
std::vector<uint8_t> encode_payload(const EnemyTeamMacroStatus& data);
std::vector<uint8_t> encode_payload(const EnemyRobotBuffs& data);
std::vector<uint8_t> encode_payload(const EnemyInterferenceKey& data);
std::vector<uint8_t> encode_payload(const ProtocolData& data);

std::vector<uint8_t> encode_frame(CmdID cmd_id,
                                  const std::vector<uint8_t>& payload,
                                  uint8_t seq = 0);
std::optional<std::vector<uint8_t>> encode_frame(const ProtocolData& data,
                                                 uint8_t seq = 0);

} // namespace radar_comm
