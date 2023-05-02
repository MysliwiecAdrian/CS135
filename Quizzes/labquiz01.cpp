//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab Quiz 01
//
//Prints I love C++ depending on user input.

#include <iostream>

using namespace std;

int main()
{
    int num;
    
    cout << "Enter the number of times: ";
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cout << "I love C++" << endl;
    }
}