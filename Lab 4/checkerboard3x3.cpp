//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 4G
//
//
//
//
//
//Prints a 3x3 checkerboard based on input

#include <iostream>
using namespace std;

int main()
{
    int width, height;

    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl;
    cout << "Shape:" << endl;
    
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            if((((i % 6) / 3) % 2 == 0) && (((j % 6) / 3) % 2 == 0))
            {
                cout << "*";
            }
            else if((((i % 6) / 3) % 2 != 0) && (((j % 6) / 3) % 2 != 0))
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
//345 91011 151617
//012 678 121314