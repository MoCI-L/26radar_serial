#pragma once
#include <variant>
#include <vector>
#include <cstdint>
#include <optional>

#include "structs.hpp"
// 后面继续加

using ProtocolData = std::variant<
    EnemyRobotPosition
    // 后面继续加
>;

std::optional<ProtocolData> decode(
    uint16_t cmd_id,
    const std::vector<uint8_t>& data);
