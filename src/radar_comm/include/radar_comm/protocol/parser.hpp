#pragma once
#include <chrono>
#include <cstdint>
#include <functional>
#include <vector>

#include "radar_comm/protocol/decode_result.hpp"
#include "radar_comm/protocol/frame.hpp"
#include "radar_comm/protocol/types.hpp"

namespace radar_comm {

class ProtocolParser {
public:
    struct Statistics {
        uint64_t rx_bytes{0};
        uint64_t rx_frames{0};
        uint64_t crc8_failures{0};
        uint64_t crc16_failures{0};
        uint64_t oversize_frames{0};
        uint64_t timeout_drops{0};
        uint64_t sync_recoveries{0};
        uint64_t decode_failures{0};
        uint64_t unknown_cmd_count{0};
    };

    struct ParsedFrame {
        uint16_t cmd_id{0};
        ProtocolData data{};
    };

    using FrameHandler = std::function<void(ParsedFrame &&)>;

    void process(const uint8_t *data, std::size_t size, const FrameHandler &handler);
    void set_frame_timeout(std::chrono::milliseconds timeout);
    Statistics statistics() const;
    void reset();

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
    std::chrono::milliseconds frame_timeout_{std::chrono::milliseconds(100)};
    std::chrono::steady_clock::time_point last_progress_{};
    Statistics stats_{};

    void recover_frame_sync(const FrameHandler &handler);
    void check_timeout();
    void consume_byte(uint8_t byte, const FrameHandler &handler);
};

} // namespace radar_comm
