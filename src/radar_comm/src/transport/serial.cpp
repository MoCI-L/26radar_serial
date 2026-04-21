#include "radar_comm/transport/serial.hpp"

SerialPort::SerialPort(const std::string& port, int baud)
    : ser_(port, baud, serial::Timeout::simpleTimeout(100)) {}

size_t SerialPort::read(uint8_t* buffer, size_t size) {
    return ser_.read(buffer, size);
}
