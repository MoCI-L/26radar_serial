#include "radar_comm/protocol/parser.hpp"
#include "radar_comm/transport/serial_port.hpp"
#include <iostream>
#include <thread>

using namespace radar_comm;

int main() {
    ProtocolParser parser;
    SerialPort serial;

    if (!serial.open("/dev/ttyACM0", 115200)) {
        std::cerr << "Open serial failed\n";
        return -1;
    }

    serial.setCallback([&](uint8_t byte) {

        printf("%02X ", byte);
        fflush(stdout);

        auto result = parser.input(byte);

        if (result) {
            std::cout << "\n[PARSED]\n";

            std::visit([](auto&& data) {
                using T = std::decay_t<decltype(data)>;

                if constexpr (std::is_same_v<T, EnemyRobotPosition>)
                    std::cout << "Position\n";
                else if constexpr (std::is_same_v<T, EnemyRobotHP>)
                    std::cout << "HP\n";
                else if constexpr (std::is_same_v<T, EnemyRemainingAmmo>)
                    std::cout << "Ammo\n";
                else if constexpr (std::is_same_v<T, EnemyTeamMacroStatus>)
                    std::cout << "Macro\n";
                else if constexpr (std::is_same_v<T, EnemyRobotBuffs>)
                    std::cout << "Buff\n";
                else if constexpr (std::is_same_v<T, EnemyInterferenceKey>)
                    std::cout << "Key\n";
                else
                    std::cout << "Unknown\n";

            }, *result);
        }
    });

    serial.start();

    while (true)
        std::this_thread::sleep_for(std::chrono::seconds(1));
}
