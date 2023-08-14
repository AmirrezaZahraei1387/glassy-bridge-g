#include <iostream>
#include "bridge/bri/bridge.h"
#include "userin/game/player.h"

int main() {
    gb::Bridge b{};
    user::Player p{b};
    p.move(user::inputType::D_JUMP_LEFT);
    std::cout<<p;
    p.move(user::inputType::A_JUMP_RIGHT);
    std::cout<<p;

    return 0;
}
