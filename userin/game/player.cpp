//
// Created by KAVOSH on 8/14/2023.
//
#include "../../bridge/glass-pair/glassp.h"
#include "../in/userin.h"
#include "player.h"

namespace user{

    void Player::move(user::inputType input) {

        switch(input){

            case user::inputType::A_JUMP_RIGHT:

                m_currPoint.glassPairNumber += 1;
                m_currPoint.which = gb::GlassPair::WhichGlass::first;
                break;

            case user::inputType::D_JUMP_LEFT:

                m_currPoint.glassPairNumber += 1;
                m_currPoint.which = gb::GlassPair::WhichGlass::first;
                break;
        }
    }

}