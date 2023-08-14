//
// Created by KAVOSH on 8/14/2023.
//

#ifndef GLASSY_BRIDGE_G_RANDOM_H
#define GLASSY_BRIDGE_G_RANDOM_H
#include <random>

namespace random{
    inline std::random_device rd{};
    inline std::mt19937 mt{rd()};
}

#endif //GLASSY_BRIDGE_G_RANDOM_H
