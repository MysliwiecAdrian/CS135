//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E3.1
//
//Reads an integer and prints whether it is negative, zero, or positive

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter an integer: " << endl;
    cin >> num;

    if(num > 0)
    {
        cout << "Positive";
    }
    else if(num < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "Zero";
    }
}