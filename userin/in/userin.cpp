//
// Created by KAVOSH on 8/14/2023.
//
#include "userin.h"
#include <limits>
#include <iostream>

namespace user {

    inputType check(char input) {
        switch (input) {
            case 'd':
                return inputType::A_JUMP_RIGHT;

            case 'a':
                return inputType::D_JUMP_LEFT;

            case 'q':
                return inputType::QUIT_GAME;

            default:
                return inputType::ERROR_INPUT;
        }
    }


    inputType getInput() {

        char input{};
        inputType result{};

        while(true){

            std::cout<<"please enter a command: ";
            std::cin>>input;
            result = check(input);

            if(result != inputType::ERROR_INPUT) {
                return result;
            }

            if(! std::cin){
                std::cin.clear();
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout<<"Oops! this move is invalid. Try again!!!(:"<<std::endl;
        }
    }


}