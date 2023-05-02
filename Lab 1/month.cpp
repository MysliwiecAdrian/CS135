/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: LAB1D

The program prints out the number of days in a certain month within a certain year.
Filler line
*/

#include <iostream> //includes library
using namespace std;

int main()
{
    int year;
    int month;

    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;

    if (year % 4 != 0) //normal year
    {
        if (month == 2)
        {
            cout << "28 days";
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << "31 days";
        }
        else
        {
            cout << "30 days";
        }
    }
    else if (year % 100 != 0) //leap year
    {
        if (month == 2)
        {
            cout << "29 days";
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << "31 days";
        }
        else
        {
            cout << "30 days";
        }
    }
    else if (year % 400 != 0) //normal year
    {
        if (month == 2)
        {
            cout << "28 days";
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << "31 days";
        }
        else
        {
            cout << "30 days";
        }
    }
    else //leap year
    {
        if (month == 2)
        {
            cout << "29 days";
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << "31 days";
        }
        else
        {
            cout << "30 days";
        }
    }
}