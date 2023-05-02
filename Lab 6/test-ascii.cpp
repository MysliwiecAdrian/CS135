//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 6A
//
//
//Prints all characters in a line.

#include <iostream>
using namespace std;

int main()
{
    string input;

    cout << "Input: ";
    getline(cin, input);
    cout << endl;

    for(int i = 0; i < input.length(); i++)
    {
        cout << input[i] << " " << (int)input[i] << endl;
    }
}