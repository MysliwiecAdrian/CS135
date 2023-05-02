//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 4C
//
//
//
//
//
//Prints the a cross based on input.

#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Input size: ";
    cin >> size;
    cout << endl;
    cout << "Shape: " << endl;

    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= size; j++)
        {
            if(j == i || j == (size + 1 - i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}