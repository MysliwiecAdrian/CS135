//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 6B
//
//
//
//
//
//
//
//Caesar cipher

#include <iostream>
using namespace std;

char shiftChar(char c, int rshift)
{
    if(int(c) == 32)
    {
        return c;
    }
    else if(int(c) < 65)
    {
        return c;
    }
    else if(isupper(c))
    {
        if(int(c) + rshift > 90)
        {
            return (int(c) + rshift) - 26;
        }
        else
        {
            return int(c) + rshift;
        }
    }
    else if(islower(c))
    {
        if(int(c) + rshift > 122)
        {
            return (int(c) + rshift) - 26;
        }
        else
        {
            return int(c) + rshift;
        }
    }
    return c;
}

string encryptCaesar(string plaintext, int rshift)
{
    string word = "";

    for(int i = 0; i < plaintext.length(); i++)
    {
        word += shiftChar(plaintext[i], rshift);
    }
    return word;
}

int main()
{
    string word;
    int shift;

    cout << "Enter plaintext: ";
    getline(cin, word);
    cout << "Enter shift: ";
    cin >> shift;

    cout << "Ciphertext: " << encryptCaesar(word, shift);
}