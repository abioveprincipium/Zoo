#include "HumanPlayer.h"
#include "Player.h"
#include <iostream>
HumanPlayer::HumanPlayer(Player &play) :play{}
void Human(){
    int what;
    std::cout<<"Choose 1. to play rock, 2. to play paper, 3.to play scissors "<<std::endl;
    std::cin>>what;
    if(what==1){play.get_move()}
    else if(what==2){}
    else if (what==3){}
    else std::cout<<"There is not such option"<<std::endl;
}