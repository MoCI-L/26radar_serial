#pragma once
#include <cstdint>

#pragma pack(push, 1)


//0x0A01 对方机器人的位置坐标
struct EnemyRobotPosition {
    uint16_t hero_x;
    uint16_t hero_y;
    uint16_t engineer_x;
    uint16_t engineer_y;
    uint16_t infantry_3_x;
    uint16_t infantry_3_y;
    uint16_t infantry_4_x;
    uint16_t infantry_4_y;
    uint16_t aerial_x;
    uint16_t aerial_y;
    uint16_t sentry_x;
    uint16_t sentry_y;
};

#pragma pack(pop)

static_assert(sizeof(EnemyRobotPosition) == 24);
