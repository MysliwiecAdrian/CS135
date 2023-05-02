//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E4.8
//
//Prints each letter in a word one by one

#include <iostream>

using namespace std;

int main()
{
    string word;

    cout << "Enter your word: " << endl;
    cin >> word;

    for(int i = 0; i < word.length(); i++)
    {
        cout << word[i] << endl;
    }
}