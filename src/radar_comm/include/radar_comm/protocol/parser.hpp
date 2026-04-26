#pragma once
#include <optional>
#include <vector>

#include "radar_comm/protocol/frame.hpp"
#include "radar_comm/protocol/types.hpp"

namespace radar_comm {

class ProtocolParser {
public:
    std::optional<ProtocolData> input(uint8_t byte);

private:
    enum class State {
        WAIT_SOF,
        READ_HEADER,
        READ_BODY
    };

    State state_ = State::WAIT_SOF;

    std::vector<uint8_t> buffer_;
    uint16_t expected_len_ = 0;
    static constexpr uint16_t kMaxPayloadLength = 256;

    void reset();
};

} // namespace radar_comm
