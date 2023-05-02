/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: HW E.17

Asks user for input and then prints them out on three seperate lines.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string one;
    string two;
    string three;

    cout << "Enter name one.\n";
    cin >> one;
    cout << "Enter name two.\n";
    cin >> two;
    cout << "Enter name three.\n";
    cin >> three;

    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
    return 0;
}