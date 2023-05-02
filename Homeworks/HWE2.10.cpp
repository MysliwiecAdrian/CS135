/*
Author: Adrian Mysliwiec
Course: CSCI-136
Instructor: Minh Nguyen
Assignment: HWE2.10

This program prints the cost per 100 miles and how far a car can go
*/

#include <iostream>
using namespace std;

int main()
{
    float gal;
    float eff;
    float price;
    float cost;

    cout << "Enter the number of gallons of gas in the tank." << endl;
    cin >> gal;
    cout << "Enter the fuel efficiency." << endl;
    cin >> eff;
    cout << "Enter the price of gas per gallon." << endl;
    cin >> price;

    cout << "The cost per 100 miles is $" << (100 * price) / eff << endl;
    cout << "The car can go " << gal * eff << " miles" << endl;

    return 0;
}