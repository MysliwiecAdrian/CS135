//Author: Adrian Mysliwiec
//Course: CSCI-136
//Instructor: Minh Nguyen
//Assignment: Lab2C
//
//Creates an array and allows user to edit the elements.
//Filler line
//Filler line
//Filler line

#include <iostream>
using namespace std;

int main()
{
    int myData[10];
    int numOne,numTwo;

    for (int i = 0; i < 10; i++)
    {
        myData[i] = 1;
    }
    do 
    {
        for (int i = 0; i < 10; i++)
        {
            cout << myData[i] << " ";
        }
        cout << "Input index: " << endl;
        cin >> numOne;
        cout << "Input value: " << endl;
        cin >> numTwo;

        if (numOne >= 0 && numOne < 10)
        {
            myData[numOne] = numTwo;
        }
        else
        {
            cout << "Index out of range. Exit";
        }
    } while (numOne >= 0 && numOne < 10);
}