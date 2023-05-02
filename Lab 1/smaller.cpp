/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: LAB1A

The program finds the smaller of two integers.
Filler line
*/

#include <iostream>
using namespace std;

int main()
{
    int numberOne;
    int numberTwo;

    cout << "Enter the first number: ";
    cin >> numberOne;
    cout << "Enter the second number: ";
    cin >> numberTwo;

    if (numberOne > numberTwo)
    {
        cout << "The smaller of the two is " << numberTwo;
    }
    else
    {
        cout << "The smaller of the two is " << numberOne;
    }
}