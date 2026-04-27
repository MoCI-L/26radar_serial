#pragma once

#include <cstddef>
#include <cstdint>

#include "radar_comm/protocol/types.hpp"

namespace radar_comm {

enum class DecodeStatus : uint8_t {
  Ok = 0,
  UnknownCmd,
  InvalidPayloadLength,
  InvalidSubcommand
};

struct DecodeResult {
  DecodeStatus status{DecodeStatus::UnknownCmd};
  uint16_t cmd_id{0};
  std::size_t expected_length{0};
  std::size_t actual_length{0};
  ProtocolData data{};
};

} // namespace radar_comm
