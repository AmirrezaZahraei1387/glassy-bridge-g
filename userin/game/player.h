//
// Created by KAVOSH on 8/14/2023.
//

#ifndef GLASSY_BRIDGE_G_PLAYER_H
#define GLASSY_BRIDGE_G_PLAYER_H

#include "../in/userin.h"
#include "../../info.h"
#include "../../bridge/bri/bridge.h"

namespace user{

    class Player{

    public:

        explicit Player(gb::Bridge& bridge):m_bridge{bridge}{};
        void move(user::inputType input);

        friend class gb::Bridge;
    private:

        gb::Bridge::PointBridge m_currPoint{-1};
        gb::Bridge& m_bridge;
        int live{info::NUMBER_USER_PLAY};
    };

}
#endif //GLASSY_BRIDGE_G_PLAYER_H
