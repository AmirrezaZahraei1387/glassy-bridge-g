#include "bridge/bri/bridge.h"
#include "userin/game/player.h"
#include "userin/in/userin.h"


int main() {

    user::Player::Status status{};
    user::inputType input{};
    gb::Bridge bridge{};
    user::Player player{bridge};

    std::cout<<"welcome to the glassy-bridge game.:)"<<std::endl;

    while(true){

        std::cout<<player<<std::endl;

        input = user::getInput();

        if(input == user::inputType::QUIT_GAME){
            std::cout<<"miss you! ha ha ha"<<std::endl;
            break;
        }

        player.move(input);
        status = player.check();



        if (status == user::Player::Status::WIN){
                std::cout<<"good job. you passed the game"<<std::endl;
                break;
        }
        else if(status == user::Player::Status::FAIL){
            std::cout<<"do not worry you just failed one round"<<std::endl;
            player.reset();
        }
        else if(status == user::Player::Status::DIE){
            std::cout<<"you dead ha ha ha!!!"<<std::endl;
            break;
        }
        else if(status == user::Player::Status::PASS){
            std::cout<<"oh oh oh just it. keep going"<<std::endl;
        }

    }
    return 0;
}
