//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 4F
//
//
//
//
//
//Prints an upside down trapezoid or triangle.

#include <iostream>
using namespace std;

int main()
{
    int height, width, spaces = 0, stars;

    cout << "Input width: ";
    cin >> width;
    stars = width;
    cout << "Input height: ";
    cin >> height;
    cout << endl;
    cout << "Shape: " << endl;

    if(width + 1 - height * 2 < 0)
    {
        cout << "Impossible shape!";
    }
    else
    {
        for(int i = 1; i <= height; i++)
        {
            for(int h = 0; h < spaces; h++)
            {
                cout << " ";
            }
            spaces += 1;
        
            for(int j = 1; j <= stars; j++)
            {  
                cout << "*";
            }
            stars -= 2;
            cout << endl;
        }
    }
}