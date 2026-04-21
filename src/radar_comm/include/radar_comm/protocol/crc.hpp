#pragma once
#include <cstdint>

namespace radar_comm
{

uint8_t get_crc8(uint8_t *data, uint32_t len);
bool verify_crc8(uint8_t *data, uint32_t len);

uint16_t get_crc16(uint8_t *data, uint32_t len);
bool verify_crc16(uint8_t *data, uint32_t len);

}
