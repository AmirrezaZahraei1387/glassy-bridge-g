//
// Created by KAVOSH on 8/14/2023.
//

#ifndef GLASSY_BRIDGE_G_PLAYER_H
#define GLASSY_BRIDGE_G_PLAYER_H

#include <iostream>
#include "../in/userin.h"
#include "../../info.h"
#include "../../bridge/bri/bridge.h"

namespace user{

    class Player{

    public:
        enum class Status{
            WIN,
            FAIL,
            DIE,
            PASS,
        };

        explicit Player(gb::Bridge& bridge):m_bridge{bridge}{};

        void move(user::inputType input);
        Status check();
        friend std::ostream& operator<< (std::ostream& out, Player& player);

        friend class gb::Bridge;

    private:
        gb::Bridge::PointBridge m_currPoint{-1};
        gb::Bridge& m_bridge;
        int m_live{info::NUMBER_USER_PLAY};
    };

}
#endif //GLASSY_BRIDGE_G_PLAYER_H
