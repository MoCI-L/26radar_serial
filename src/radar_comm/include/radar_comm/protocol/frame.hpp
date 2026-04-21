#pragma once
#include <cstdint>
#include <vector>

namespace radar_comm
{

struct FrameHeader
{
    uint8_t sof;         // 0xA5
    uint16_t data_len;   // payload长度
    uint8_t seq;
    uint8_t crc8;
};

struct Frame
{
    FrameHeader header;
    uint16_t cmd_id;
    std::vector<uint8_t> data;
    uint16_t crc16;
};

}
