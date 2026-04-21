#include "radar_comm/protocol/parser.hpp"
#include <iostream>
#include <variant>

int main()
{
    ProtocolParser parser;

    std::vector<uint8_t> stream = {
        // 你的测试数据
    };

    for (auto b : stream)
    {
        auto result = parser.input(b);

        if (result.has_value())
        {
            std::cout << "Frame OK!" << std::endl;

            // 👉 访问 variant
            std::visit([](auto&& msg)
            {
                using T = std::decay_t<decltype(msg)>;

                if constexpr (std::is_same_v<T, EnemyRobotPosition>)
                {
                    std::cout << "hero_x: " << msg.hero_x << std::endl;
                    std::cout << "hero_y: " << msg.hero_y << std::endl;
                }

            }, result.value());
        }
    }
}
