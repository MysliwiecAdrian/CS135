//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: LAB 5A
//
//
//
//
//
//
//
//
//
//
//
//Checks a numbers divisibility.

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d)
{
    if(d == 0)
    {
        return false;
    }
    else if(n % d == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isPrime(int n)
{
    bool test = true;
    if(n == 1 || n == 0 || n < 0)
    {  
        test = false;
        return test;
    }
    else
    {
        for(int i = 2; i <= n/2; i++)
        {
            if(isDivisibleBy(n, i))
            {
                test = false;
                break;
            }
        }
    }
    return test;
}

int nextPrime(int n)
{
    if(isPrime(n))
    {
        n++;
    }
    while(isPrime(n) != true)
    {
        n++;
    }
    return n;
}

int countPrimes(int a, int b)
{ 
    int count = 0;
    for(int i = a; i <= b; i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
    return count;
}

bool isTwinPrime(int n)
{
    if(isPrime(n) && (isPrime(n-2) || isPrime(n+2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int nextTwinPrime(int n)
{
    int temp = n + 1;
    while (isTwinPrime(temp) == false)
    {
        temp++;
    }
    return temp;
}

int largestTwinPrime(int a, int b)
{
    for(int i = b; i >= a; i--)
    {
        if(isTwinPrime(i))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x,y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << largestTwinPrime(x,y);
}