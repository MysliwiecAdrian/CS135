//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E5.6
//
//
//
//
//
//Prints the middle of a string.

#include <iostream>
using namespace std;

string middle(string str)
{
    int length = str.length();
    if(length % 2 == 0)
    {
        return str.substr((length / 2) - 1, 2);
    }
    else
    {
        return str.substr((length / 2), 1);
    }
}

int main()
{
    string word, result;
    cout << "Enter the word: ";
    cin >> word;

    result = middle(word);
    cout << result << endl;
}