#ifndef ZOO_PLAYER_H
#define ZOO_PLAYER_H
#include <string>


class Player {
private:
   std::string name;
public:
    virtual int get_move();
    virtual void get_name(std::string name);
};


#endif //ZOO_PLAYER_H
