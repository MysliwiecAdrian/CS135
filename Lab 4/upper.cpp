//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 4E
//
//
//
//
//
//Prints an upper triangle based on input.
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
        for (int h = 1; h < i; h++) 
        {
            cout << " ";
        }
        for(int j = i; j <= length; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}