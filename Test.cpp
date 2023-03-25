
#include "doctest.h"

#include <iostream>

#include "sources/card.hpp"
#include "sources/game.hpp"
#include "sources/player.hpp"

using namespace ariel;
using namespace doctest;

Player p1("Alice");
Player p2("Bob");
Game game (p1,p2);

TEST_CASE("new game state"){
    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
    CHECK_THROWS(game.printLastTurn());
    CHECK_THROWS(game.printLog());
    CHECK_THROWS(game.printStats());
    CHECK_THROWS(game.printWiner());

}

TEST_CASE("play one turn"){
     game.playTurn();
     CHECK_NOTHROW(game.printLastTurn());
     CHECK_NOTHROW(game.printLog());
     CHECK_NOTHROW(game.printStats());
     CHECK_NOTHROW(game.printWiner());
}

TEST_CASE("playing until the end of cards"){
    game.playAll();
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK(p1.cardesTaken() >= 0);
    CHECK(p2.cardesTaken() >= 0);
    CHECK_THROWS(game.playTurn());
    CHECK_THROWS(game.playAll());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
}


