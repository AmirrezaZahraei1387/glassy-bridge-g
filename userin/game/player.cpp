//
// Created by KAVOSH on 8/14/2023.
//
#include "../../info.h"
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

    Player::Status Player::check() {

        // it means that the player have already passed the way
        if (m_currPoint.glassPairNumber >= info::BRIDGE_SIZE_LENGTH)
            return Status::WIN;

        // meaning the glass can not hold the player
        if (m_bridge.checkGlass(m_currPoint) == gb::GlassPair::GlassType::FLIMSY) {
            m_live -= 1;
            if (m_live <= 0)
                return Status::DIE;
            return Status::FAIL;
        }

        return Status::PASS;
    }

    std::ostream &operator<<(std::ostream &out, Player &player) {

        for(int index{info::BRIDGE_SIZE_LENGTH - 1}; index>=0; --index){
            if(index == player.m_currPoint.glassPairNumber){
                if(player.m_currPoint.which == gb::GlassPair::WhichGlass::first)
                    out<<index<<"<-"<<"0|0"<<"|_|"<<std::endl;
                else
                    out<<index<<"<-"<<"|_|"<<"0|0"<<std::endl;
            }
            out<<index<<"<-"<<"|_|"<<"|_|"<<std::endl;
        }

        out<<"lives: ";
        for (int index{0}; index < player.m_live; ++index) {
            out << "<3" << ' ';
        }

        out<<std::endl;
        return out;
    }
}