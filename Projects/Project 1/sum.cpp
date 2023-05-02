/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: Project1A

The program prints the sum of a text file.
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    int total = 0;
    while (cin >> num)
    {
        total += num;
    }
    cout << total;
}