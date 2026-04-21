#pragma once
#include <cstdint>

enum class CmdID : uint16_t {
    EnemyRobotPosition   = 0x0A01,
    EnemyRobotHP         = 0x0A02,
    EnemyRemainingAmmo   = 0x0A03,
    EnemyTeamMacroStatus = 0x0A04,
    EnemyRobotBuffs      = 0x0A05,
    EnemyInterferenceKey = 0x0A06
};
