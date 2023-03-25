#include <string.h>
using namespace std;
#pragma once
namespace ariel{
class Player
{
private:
    string name;
public:

    Player(){
        this->name = "Annonimus";
    }
    Player(string name){
        this->name = name;
    } 
    int stacksize(){return 0;}
    int cardesTaken(){return 0;}
   


};
}

