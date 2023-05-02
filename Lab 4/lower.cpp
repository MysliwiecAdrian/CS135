//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 4D
//
//
//
//
//
//Prints a lower triangle based on input.

#include <iostream>
using namespace std;

int main()
{
    int length;

    cout << "Input side length: ";
    cin >> length;
    cout << endl;
    cout << "Shape:" << endl;

    for(int i = 1; i <= length; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}