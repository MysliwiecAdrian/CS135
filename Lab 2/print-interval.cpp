//Author: Adrian Mysliwiec
//Course: CSCI-136
//Instructor: Minh Nguyen
//Assignment: Lab2B
//
//Prints all the integers in an interval.
//Filler line

#include <iostream>
using namespace std;

int main()
{
    int lownum, highnum;
    cout << "Please enter L: ";
    cin >> lownum;
    cout << "Please enter U: ";
    cin >> highnum;

    for (int i = lownum; i < highnum; i++)
    {
        cout << i << " ";
    }
}