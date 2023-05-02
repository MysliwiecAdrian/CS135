//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab quiz  string pyramid

#include <iostream> 
#include <string>
using namespace std;

int main ()
{
    string word;
    
    cout << "Enter a word: ";
    getline(cin, word);

    string result = "";
    for(int i = 0; i < word.length() - 1; i++)
    {
        result += word[i];
        cout << result << endl;  
    }

    for(int i = word.length(); i >= 1; i--)
    {
        for(int j = 0; j < i; j++)
        {
            cout << word[j];  
        }        
        cout << endl;
    }
}