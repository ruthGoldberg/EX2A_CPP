#include "player.hpp"
#pragma once
namespace ariel{
class Game
{
private:
    Player p1;
    Player p2;
public:
    Game(Player p1 , Player p2){
        this->p1 = p1;
        this->p2 = p2;
    }

    void playTurn(){}
    void printLastTurn(){}
    void playAll(){}
    void printWiner(){}
    void printLog(){} // prints all the turns played one line per turn (same format as game.printLastTurn())
    void printStats(){}
};
}

