/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: LAB1C

The program checks if a year is a common year or leap year
Filler line
*/

#include <iostream>
using namespace std;

int main()
{
    int year;
    
    cout << "Enter year: ";
    cin >> year;

    if (year % 4 != 0)
    {
        cout << "Common year";
    }
    else if (year % 100 != 0)
    {
        cout << "Leap year";
    }
    else if (year % 400 != 0)
    {
        cout << "Common year";
    }
    else
    {
        cout << "Leap year";
    }
}