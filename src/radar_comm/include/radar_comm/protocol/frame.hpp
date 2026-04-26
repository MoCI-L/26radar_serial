#pragma once
#include <cstddef>
#include <cstdint>
#include <vector>

namespace radar_comm {

constexpr uint8_t kFrameSof = 0xA5;
constexpr std::size_t kFrameHeaderSize = 5;
constexpr std::size_t kCmdIdSize = 2;
constexpr std::size_t kFrameTailSize = 2;
constexpr std::size_t kFrameOverhead =
    kFrameHeaderSize + kCmdIdSize + kFrameTailSize;

struct FrameHeader {
  uint8_t sof;       // 0xA5
  uint16_t data_len; // payload长度
  uint8_t seq;
  uint8_t crc8;
};

struct Frame {
  FrameHeader header;
  uint16_t cmd_id;
  std::vector<uint8_t> data;
  uint16_t crc16;
};

} // namespace radar_comm
