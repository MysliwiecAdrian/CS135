//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 7A
//
//
//
//remove indents

#include <iostream> 
#include <string>
using namespace std;

string removeLeadingSpaces(string line){
    int count = 0;
    string result = "";

    while(isspace(line[count])){
        count += 1;
    }
    
    for(int i = count; i < line.length(); i++){
        result += line[i];
    }
    return result;
}

int main(){
    string line;
    
    while(getline(cin, line)){
        cout << removeLeadingSpaces(line) << endl;
    }
}


