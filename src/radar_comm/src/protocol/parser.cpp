#include "radar_comm/protocol/parser.hpp"
#include "radar_comm/protocol/crc.hpp"
#include "radar_comm/protocol/decoder.hpp"

std::optional<ProtocolData> ProtocolParser::input(uint8_t byte) {

  if (!radar_comm::verify_crc8(buffer_.data(), 5)) {
    buffer_.clear();
    return std::nullopt;
  }

  if (!radar_comm::verify_crc16(buffer_.data(), expected_length_)) {
    buffer_.clear();
    return std::nullopt;
  }

  switch (state_) {
  case State::WAIT_SOF:
    if (byte == 0xA5) {
      buffer_.clear();
      buffer_.push_back(byte);
      state_ = State::READ_HEADER;
    }
    break;

  case State::READ_HEADER:
    buffer_.push_back(byte);
    if (buffer_.size() == 5) {
      if (!verify_crc8(buffer_.data(), 5)) {
        state_ = State::WAIT_SOF;
        break;
      }

      uint16_t len = buffer_[1] | (buffer_[2] << 8);
      expected_length_ = 5 + 2 + len + 2;

      state_ = State::READ_CMD_ID;
    }
    break;

  case State::READ_CMD_ID:
    buffer_.push_back(byte);
    if (buffer_.size() == 7) {
      state_ = State::READ_DATA;
    }
    break;

  case State::READ_DATA:
    buffer_.push_back(byte);
    if (buffer_.size() == static_cast<size_t>(expected_length_ - 2)) {
      state_ = State::READ_CRC16;
    }
    break;

  case State::READ_CRC16:
    buffer_.push_back(byte);
    if (buffer_.size() == expected_length_) {
      if (!verify_crc16(buffer_.data(), expected_length_)) {
        state_ = State::WAIT_SOF;
        break;
      }

      //  提取 cmd_id + payload
      uint16_t cmd_id = buffer_[5] | (buffer_[6] << 8);

      std::vector<uint8_t> payload(buffer_.begin() + 7, buffer_.end() - 2);

      state_ = State::WAIT_SOF;

      //  交给 decoder
      return decode(cmd_id, payload);
    }
    break;
  }

  return std::nullopt;
}
