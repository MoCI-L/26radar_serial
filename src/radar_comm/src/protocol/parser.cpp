#include "radar_comm/protocol/parser.hpp"

#include <algorithm>

#include "radar_comm/protocol/crc.hpp"
#include "radar_comm/protocol/decoder.hpp"

namespace radar_comm {

void ProtocolParser::reset() {
  buffer_.clear();
  expected_len_ = 0;
  state_ = State::WAIT_SOF;
  last_progress_ = std::chrono::steady_clock::time_point{};
}

void ProtocolParser::set_frame_timeout(std::chrono::milliseconds timeout) {
  frame_timeout_ = timeout;
}

ProtocolParser::Statistics ProtocolParser::statistics() const { return stats_; }

void ProtocolParser::recover_frame_sync(const FrameHandler &handler) {
  const auto next_sof = std::find(buffer_.begin() + 1, buffer_.end(), kFrameSof);
  if (next_sof == buffer_.end()) {
    reset();
    return;
  }

  std::vector<uint8_t> recovered(next_sof, buffer_.end());
  stats_.sync_recoveries++;
  reset();
  for (const auto byte : recovered) {
    consume_byte(byte, handler);
  }
}

void ProtocolParser::check_timeout() {
  if (state_ == State::WAIT_SOF || last_progress_ == std::chrono::steady_clock::time_point{}) {
    return;
  }

  const auto now = std::chrono::steady_clock::now();
  if (now - last_progress_ <= frame_timeout_) {
    return;
  }

  stats_.timeout_drops++;
  reset();
}

void ProtocolParser::consume_byte(uint8_t byte, const FrameHandler &handler) {
  stats_.rx_bytes++;
  last_progress_ = std::chrono::steady_clock::now();

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
        stats_.crc8_failures++;
        recover_frame_sync(handler);
        return;
      }

      const uint16_t len = buffer_[1] | (buffer_[2] << 8);
      if (len > kMaxPayloadLength) {
        stats_.oversize_frames++;
        recover_frame_sync(handler);
        return;
      }

      expected_len_ = 5 + 2 + len + 2;
      state_ = State::READ_BODY;
    }
    break;

  case State::READ_BODY:
    buffer_.push_back(byte);

    if (buffer_.size() == expected_len_) {
      if (!verify_crc16(buffer_.data(), expected_len_)) {
        stats_.crc16_failures++;
        recover_frame_sync(handler);
        return;
      }

      const uint16_t cmd_id = buffer_[5] | (buffer_[6] << 8);
      const auto payload_len = static_cast<std::size_t>(expected_len_ - 5 - 2 - 2);
      const auto result = decode(cmd_id, buffer_.data() + 7, payload_len);
      if (result.status == DecodeStatus::Ok) {
        stats_.rx_frames++;
        handler(ParsedFrame{result.cmd_id, result.data});
      } else {
        stats_.decode_failures++;
        if (result.status == DecodeStatus::UnknownCmd) {
          stats_.unknown_cmd_count++;
        }
      }
      reset();
    }
    break;
  }
}

void ProtocolParser::process(const uint8_t *data, std::size_t size, const FrameHandler &handler) {
  if (data == nullptr || size == 0) {
    return;
  }

  check_timeout();
  for (std::size_t i = 0; i < size; ++i) {
    consume_byte(data[i], handler);
  }
}

} // namespace radar_comm
