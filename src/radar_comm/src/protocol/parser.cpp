#include "radar_comm/protocol/parser.hpp"

#include "radar_comm/protocol/crc.hpp"
#include "radar_comm/protocol/decoder.hpp"

namespace radar_comm {

void ProtocolParser::reset() {
  buffer_.clear();
  state_ = State::WAIT_SOF;
}

std::optional<ProtocolData> ProtocolParser::input(uint8_t byte) {
  switch (state_) {
  case State::WAIT_SOF:
    if (byte == kFrameSof) {
      buffer_.clear();
      buffer_.push_back(byte);
      state_ = State::READ_HEADER;
    }
    break;

  case State::READ_HEADER:
    buffer_.push_back(byte);

    if (buffer_.size() == 5) {
      if (!verify_crc8(buffer_.data(), 5)) {
        reset();
        break;
      }

      const uint16_t len = buffer_[1] | (buffer_[2] << 8);
      if (len > kMaxPayloadLength) {
        reset();
        break;
      }

      expected_len_ = 5 + 2 + len + 2;
      state_ = State::READ_BODY;
    }
    break;

  case State::READ_BODY:
    buffer_.push_back(byte);

    if (buffer_.size() == expected_len_) {
      if (!verify_crc16(buffer_.data(), expected_len_)) {
        reset();
        break;
      }

      const uint16_t cmd_id = buffer_[5] | (buffer_[6] << 8);
      std::vector<uint8_t> payload(buffer_.begin() + 7, buffer_.end() - 2);
      auto result = decode(cmd_id, payload);

      reset();
      return result;
    }
    break;
  }

  return std::nullopt;
}

} // namespace radar_comm
