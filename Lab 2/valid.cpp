//Author: Adrian Mysliwiec
//Course: CSCI-136
//Instructor: Minh Nguyen
//Assignment: Lab2A
//
//Keeps asking for a value between 0 and 100
//Filler line

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Please enter an integer: ";
    cin >> num;

    while (num <= 0 || num >= 100)
    {
        cout << "Please re-enter: ";
        cin >> num;
    }
    cout << "Number squared is " << num * num;
}
