#pragma once
#include <vector>
#include <optional>
#include <cstdint>
#include "decoder.hpp"
#include "frame.hpp"

class ProtocolParser
{
public:
    std::optional<ProtocolData> input(uint8_t byte);

private:
    enum class State
    {
        WAIT_SOF,
        READ_HEADER,
        READ_CMD_ID,
        READ_DATA,
        READ_CRC16
    };

    State state_ = State::WAIT_SOF;

    std::vector<uint8_t> buffer_;
    uint16_t expected_length_ = 0;
};
