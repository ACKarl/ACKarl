#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H
#include <string>
class Player{
public:
Player();
std::string getMove();
virtual void makeMove()=0;
protected:
std::string move;
};
#endif