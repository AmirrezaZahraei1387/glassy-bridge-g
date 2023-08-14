//
// Created by KAVOSH on 8/14/2023.

#ifndef GLASSY_BRIDGE_G_INFO_H
#define GLASSY_BRIDGE_G_INFO_H
#include <random>

namespace info{

    inline constexpr int BRIDGE_SIZE_LENGTH{20};
    inline constexpr int NUMBER_USER_PLAY{5};

    inline std::random_device rd{};
    inline std::mt19937 mt{rd()};
}
#endif //GLASSY_BRIDGE_G_INFO_H
