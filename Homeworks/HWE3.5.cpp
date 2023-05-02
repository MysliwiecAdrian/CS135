//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E3.5
//
//Reads 3 integers and prints increasing, decreasing or neither

#include <iostream>

using namespace std;

int main()
{
    int numOne, numTwo, numThree;

    cout << "Enter the first number: " << endl;
    cin >> numOne;
    cout << "Enter the second number: " << endl;
    cin >> numTwo;
    cout << "Enter the third number: " << endl;
    cin >> numThree;

    if(numThree > numTwo && numTwo > numOne)
    {
        cout << "Increasing";
    }
    else if(numThree < numTwo && numTwo < numOne)
    {
        cout << "Decreasing";
    }
    else
    {
        cout << "Neither";
    }
}