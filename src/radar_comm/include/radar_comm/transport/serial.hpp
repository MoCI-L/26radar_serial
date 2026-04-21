#pragma once
#include <serial/serial.h>

class SerialPort {
public:
    SerialPort(const std::string& port, int baud);

    size_t read(uint8_t* buffer, size_t size);

private:
    serial::Serial ser_;
};
