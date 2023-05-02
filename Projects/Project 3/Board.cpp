//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Project 3 Task A

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include "Board.hpp"
using namespace std;

/*
Board::Board(){
    numRows = 3, numCols = 3, max = 0, target = 32;
    panel = new int*[3];
    for(int i = 0; i < 3; i++){
        panel[i] = new int[3];
    }
}

Board::Board(int m){
    if(m >= 1){
        numRows = m, numCols = m;
    }
    else{
        numRows, numCols = 3, 3;
    }
    panel = new int*[numRows];
    for(int i = 0; i < 3; i++){
        panel[i] = new int[numCols];
    }
    max = 0, target = 32;
}

Board::Board(int m, int n){
    if (m >= 1) {numRows = m;}
	else {numRows = 3;}
	if (n >= 1) {numCols = n;}
	else {numCols = 3;}

    panel = new int*[numRows];
    for(int i = 0; i < 3; i++){
        panel[i] = new int[numCols];
    }
    max = 0, target = 32;
}
*/  

Board::~Board(){
    for(int i = 0; i < sizeof(panel); i++){
		delete panel[i];
    }
	delete[] panel;
    panel = nullptr;
}

void Board::print() const{
    for(int row = 0; row < numRows; row++){
        for (int i = 0; i < numCols; i++){
			cout << "+----";
        }
		cout << "+" << endl;
        for (int col = 0; col < numCols; col++){
			cout << "|";
			if (panel[row][col] != 0)
				cout << setw(4) << panel[row][col];
			else
				cout << "    ";
		}
        cout << "|" << endl;
    }
    for (int i = 0; i < numCols; i++){
			cout << "+----";
    }
	cout << "+" << endl;
}

void Board::selectRandomCell(int& row, int& col){
    vector<int> zeroes;
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            if(panel[i][j] == 0){
                zeroes.push_back(i*numCols+j);
            }
        }
    }
    if(zeroes.size() > 0){
        int randElem = rand() % zeroes.size(); 
        randElem = zeroes.at(randElem); 
        row = randElem / numCols; 
        col = randElem % numCols; 
        panel[row][col] = 1; 
        Board::print(); 
    }
    if(noAdjacentSameValue() || zeroes.size() == 0){
        cout << "Game over. Try again." << endl;
    }
    
}

bool Board::noAdjacentSameValue() const
{
	for (int i = 0; i < numRows; i++)
	{
		for (int j = 1; j < numCols - 1; j++)
		{
			if (panel[i][j-1] == panel[i][j] || panel[i][j+1] == panel[i][j])
				return false;
		}
	}
	return true;
}


