#include "radar_comm/protocol/encoder.hpp"
#include "radar_comm/protocol/types.hpp"

#include <fcntl.h>
#include <unistd.h>
#include <chrono>
#include <iostream>

int main(int argc, char** argv) {
    const std::string port = argc > 1 ? argv[1] : "/dev/pts/9";

    int fd = open(port.c_str(), O_WRONLY);
    if (fd < 0) {
        perror("open");
        return -1;
    }

    uint8_t seq = 0;
    uint16_t base = 100;

    while (true) {
        radar_comm::EnemyRobotPosition sample{
            static_cast<uint16_t>(base + 0),  static_cast<uint16_t>(base + 10),
            static_cast<uint16_t>(base + 20), static_cast<uint16_t>(base + 30),
            static_cast<uint16_t>(base + 40), static_cast<uint16_t>(base + 50),
            static_cast<uint16_t>(base + 60), static_cast<uint16_t>(base + 70),
            static_cast<uint16_t>(base + 80), static_cast<uint16_t>(base + 90),
            static_cast<uint16_t>(base + 100), static_cast<uint16_t>(base + 110),
        };
        auto frame = radar_comm::encode_frame(
            radar_comm::CmdID::EnemyRobotPosition,
            radar_comm::encode_payload(sample),
            seq++);

        write(fd, frame.data(), frame.size());

        std::cout << "Send RM radar frame to " << port
                  << ", size=" << frame.size()
                  << ", hero=(" << sample.hero_x << ", " << sample.hero_y << ")"
                  << std::endl;

        base += 5;
        usleep(100000); // 10Hz
    }

    close(fd);
    return 0;
}
