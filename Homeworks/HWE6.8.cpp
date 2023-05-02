//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E6.8
//
//
//
//
//
//Checks two arrays for the same values in the elements.

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{
    bool hold = true;
    if(a_size != b_size)
    {
        hold = false;
        return hold;
    }
    else
    {
        for(int i = 0; i < a_size; i++)
        {
            if(a[i] != b[i])
            {
                hold = false;
            }
        }
    }
    return hold;
}