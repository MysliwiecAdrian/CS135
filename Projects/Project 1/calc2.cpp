/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: Project1C

The program performs multiple calculations from the text file.
Filler line
Filler line
*/

#include <iostream>
using namespace std;

int main()
{
    char expression;
    int num, total = 0;

    cin >> num;
    total += num;
    while (cin >> expression)
    {
        cin >> num;
        if (expression == ';')
        {
            cout << total << endl;
            total = num;
        }
        if (expression == '+')
        {
            total += num;
        }
        else if (expression == '-')
        {
            total -= num;
        }
    }
}