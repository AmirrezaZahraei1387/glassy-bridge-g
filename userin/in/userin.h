//
// Created by KAVOSH on 8/14/2023.
//

#ifndef GLASSY_BRIDGE_G_USERIN_H
#define GLASSY_BRIDGE_G_USERIN_H

namespace user{

    enum class inputType{
        A_JUMP_RIGHT,
        D_JUMP_LEFT,
        ERROR_INPUT,
    };

    inputType check(char input);

    inputType getInput();
}

#endif //GLASSY_BRIDGE_G_USERIN_H
