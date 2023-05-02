/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: Project1D

The program performs multiple calculations from the text file.
Filler line
Filler line
Filler line
Filler line
*/

#include <iostream>
using namespace std;

int main()
{
    int num, temp, total = 0;
    char expression, operation = '+';
    cin >> num;
    total += num;
    while (cin >> expression)
    {
        if(expression == '+')
        {
            operation = '+';
            cin >> num;
            total += num;
        }
        else if (expression == '-')
        {
            operation = '-';
            cin >> num;
            total -= num;
        }
        else if (expression == ';')
        {
            cout << total << endl;
            cin >> num;
            total = num;
            operation = ' ';
        }
        if (expression == '^')
        {
            temp = num;
            num *= num;
            if (operation == '-')
            {
                total += temp;
                total -= num;
            }
            else
            {
                total += num;
                total -= temp;
            }
        }
    }
}