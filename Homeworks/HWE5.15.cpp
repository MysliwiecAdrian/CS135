//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E5.15
//
//
//
//
//
//Swaps 3 numbers based on values.

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

void sort3(int& a, int& b, int& c)
{
    sort2(a,b);
    sort2(a,c);
    sort2(b,c);
}

int main()
{
    int c,d,e;

    cout << "Enter number one: ";
    cin >> c;
    cout << "Enter number two: ";
    cin >> d;
    cout << "Enter number three: ";
    cin >> e;

    sort3(c,d,e);
}