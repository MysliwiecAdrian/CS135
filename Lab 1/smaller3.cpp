/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: LAB1B

The program finds the smaller of three integers.
Filler Line
Filler Line
*/

#include <iostream>
using namespace std;

int main()
{
    int numberOne;
    int numberTwo;
    int numberThree;

    cout << "Enter the first number: ";
    cin >> numberOne;
    cout << "Enter the second number: ";
    cin >> numberTwo;
    cout << "Enter the third number: ";
    cin >> numberThree;

    if (numberOne > numberTwo && numberThree > numberTwo)
    {
        cout << "The smaller of the three is " << numberTwo;
    }
    else if(numberOne > numberThree && numberTwo > numberThree)
    {
        cout << "The smaller of the three is " << numberThree;
    }
    else
    {
        cout << "The smaller of the three is " << numberOne;
    }
}