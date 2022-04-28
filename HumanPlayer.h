#ifndef ZOO_HUMANPLAYER_H
#define ZOO_HUMANPLAYER_H
#include "Player.h"

class HumanPlayer {
    Player &play;
public:
    HumanPlayer(Player &play);
    void Human();
};


#endif //ZOO_HUMANPLAYER_H
