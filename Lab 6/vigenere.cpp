//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 6C
//
//
//
//
//
//
//
//
//
//Vignere cipher

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

string encryptVigenere(string plaintext, string keyword)
{
    string result = "";
    int index = 0, keywordIndex = 0, keywordLength = keyword.length();
    char c;

    while(index < plaintext.length())
    {
        c = plaintext[index];
        if(isalpha(c) || islower(c))
        {
            int shift = keyword[keywordIndex] - 'a';
            result += shiftChar(plaintext[index], shift);
            keywordIndex = (keywordIndex + 1) % keywordLength;
        }
        else
        {
            result += plaintext[index];
        }
        index++;
    }
    return result;
}

int main()
{
    string word, keyword;

    cout << "Enter plaintext: ";
    getline(cin, word);
    cout << "Enter keyword: ";
    cin >> keyword;

    cout << "Ciphertext: " << encryptVigenere(word, keyword);
}