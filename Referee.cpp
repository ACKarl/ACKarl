#include <iostream>
#include "Referee.h"
using namespace std;
Referee::Referee(){
}
Player*Referee::refGame(Player*player1,Player*player2){
const char* player1="p1";
const char* player2="p2";    
player1->makeMove();
player2->makeMove();
string p1_move=player1->getMove();
string p2_move=player2->getMove();

switch (p1_move){ 
case "Rock":
switch (p2_move){
case "Rock":
return player1;
case "Paper":
return player2;
case "Scioors":
return player1;
}
case "Paper":
switch (p2_move){
case "Rock":
return player1;
case "Paper":
return player1;
case "Scioors":
return player2;
}
case "Scissors":
switch (p2_move){
case "Rock":
return player2;
case "Paper":
return player1;
return player2;
case "Paper":
return player1;
case "Scioors":
return player1;
}
}
switch (p1_move){
case "Robot":
switch (p2_move){
case "Robot":
return player1;
case "Monkey":
return player2;
case "Pirate":
return player2;
case "Ninja":
return player1;
case "Zombie":
return player1;
}
case "Monkey":
switch (p2_move){
case "Robot":
return player1;
case "Monkey":
return player1;
case "Pirate":
return player2;
case "Ninja":
return player1;
case "Zombie":
return player2;
}
case "Pirate":
switch (p2_move){
case "Robot":
return player1;
case "Monkey":
return plaver1;
case "Pirate":
return player1;
case "Ninja":
return player2;
case "Zombie":
return player2;
}
case "Ninja":
switch (p2_move){
case "Robot":
return player2;
case "Monkey":
return player2;
case "Pirate":
return player1;
case "Ninja":
return player1;
case "Zombie":
return player1;
}
case "Zombie":
switch (p2_move){
case "Robot":
return player2;
case "Monkey":
return player1;
case "Pirate":
return player1;
case "Ninja":
return player2;
case "Zombie":
return player1;
}
}
std::cout <<"wrong input!"<<std::endl;
player1->makeMove();
player2->makeMove();
string p1_move=player1->getMove();
string p2_move=player2->getMove();
return player1;
}