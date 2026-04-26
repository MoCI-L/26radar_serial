#pragma once
#include <cstdint>
#include <vector>

#include "radar_comm/protocol/cmd_id.hpp"
#include "radar_comm/protocol/types.hpp"

namespace radar_comm {

ProtocolData decode(uint16_t cmd_id, const std::vector<uint8_t>& payload);
ProtocolData decode(CmdID cmd_id, const std::vector<uint8_t>& payload);

} // namespace radar_comm
