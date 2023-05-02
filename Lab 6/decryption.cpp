//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 6D
//
//
//
//
//
//
//
//
//
//Decryption

#include <iostream>
using namespace std;

char shiftChar(char c, int rshift) //
{
    if(isupper(c))
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

string encryptCaesar(string plaintext, int rshift) //
{
    string word = "";

    for(int i = 0; i < plaintext.length(); i++)
    {
        word += shiftChar(plaintext[i], rshift);
    }
    return word;
}

string encryptVigenere(string plaintext, string keyword) //
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
            result += plaintext[index]; //
        }
        index++;
    }
    return result;
}

char shiftCaesar(char c, int rshift) //
{
    if(isupper(c))
    {
        if(c - rshift < 65) //
        {
            return(91 - (rshift - (c - 65)));
        }
        else
        {
            return(c - rshift);
        }
    }
    else if(islower(c)) //
    {
        if(c - rshift < 97) //
        {
            return(123 - (rshift - (c - 97)));
        }
        else
        {
            return(c - rshift);
        }    
    }
    return(c);
}

char shiftVigenere(char c, int rshift)//
{   
    if(isalpha(rshift))
    {  
        rshift = tolower(rshift);
        rshift = int(rshift - 97);
    }
    else
    {
        return(c);
    }
    if(isupper(c))
    {
        if(c - rshift < 65)
        {
            return(91 - (rshift - (c - 65)));
        }
        else
        {
            return(c - rshift);
        }
    }
    else if(islower(c))
    {
        if(c - rshift < 97)//
        {
            return(123 - (rshift - (c - 97)));
        }
        else
        {
            return(c - rshift);
        }    
    }
    return(c);
}

string decryptCaesar(string plaintext,int lshift) //
{
    string word = "";

    for(int i = 0; i < plaintext.length(); i++)
    {
            word += shiftCaesar(plaintext[i], lshift);
    }
    return word; 
}

string decryptVigenere(string plaintext, string keyword)
{
    int keyLength = keyword.length(), count = 0;
    string temp, result;

    for(int i = 0; i < plaintext.length(); i++)
    {
        if(count >= keyLength)
        {
            count = 0;
        }
        if(isalpha(plaintext[i]))
        {    
            temp += keyword[count];
            count += 1;
        }
        else{
            temp += '-';
        }
    }

    for(int i = 0; i < plaintext.length(); i++)
    {
        result += shiftVigenere(plaintext[i], temp[i]);   
    }
    return result;
}

int main()
{
    string text, keyword;
    int shift;

    cout << "Enter plaintext: ";
    getline(cin, text);
    cout << endl;
    
    cout << "= Caesar =" << endl;
    cout << "Enter shift: ";
    cin >> shift;

    cout << "Ciphertext: " << encryptCaesar(text, shift) << endl;
    cout << "Decrypted: " << decryptCaesar(text, shift) << endl;
    cout << endl;

    cout << "= Vigenere =" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;

    cout << "Ciphertext: " << encryptVigenere(text, keyword) << endl;
    cout << "Decrypted: " << decryptVigenere(text, keyword) << endl;
}