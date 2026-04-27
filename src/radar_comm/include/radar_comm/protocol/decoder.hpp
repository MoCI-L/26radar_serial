#pragma once
#include <cstdint>

#include "radar_comm/protocol/cmd_id.hpp"
#include "radar_comm/protocol/decode_result.hpp"
#include "radar_comm/protocol/types.hpp"

namespace radar_comm {

DecodeResult decode(uint16_t cmd_id, const uint8_t *payload, std::size_t payload_size);
DecodeResult decode(CmdID cmd_id, const uint8_t *payload, std::size_t payload_size);

} // namespace radar_comm
