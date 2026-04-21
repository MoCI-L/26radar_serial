#include "radar_comm/protocol/decoder.hpp"
#include <cstring>

std::optional<ProtocolData> decode(
    uint16_t cmd_id,
    const std::vector<uint8_t>& data)
{
    switch (cmd_id)
    {
    case 0x0A01:
    {
        if (data.size() != 24) return std::nullopt;

        EnemyRobotPosition msg;
        std::memcpy(&msg, data.data(), sizeof(msg));
        return msg;
    }

    default:
        return std::nullopt;
    }
}
