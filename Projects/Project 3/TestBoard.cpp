//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Project 3 Task A

#include <iostream>
using namespace std;


int main()
{
    Board game; //create a default Board object game
    game.print(); //test print method of game

    Board game2(4);
       //create a Board object with four rows
       //and four columns
    game2.print(); //test print methd of game2

    Board game3(3, 4);
       //create a Board object with three rows
       //and four columns
    game3.print(); //test print methd of game3

    return 0;
}
