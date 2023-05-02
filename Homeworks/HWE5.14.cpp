//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E5.14
//
//
//
//
//
//Swaps the numbers based on values.

#include <iostream>
using namespace std;

void sort2(int& a, int& b)
{
    int temp;
    if(a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
}

int main()
{
    int c,d;

    cout << "Enter number one: ";
    cin >> c;
    cout << "Enter number two: ";
    cin >> d;

    sort2(c,d);
}