//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 7B
//
//
//
//
//
//add indents

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

int countChar(string line, char c){
    int count = 0;

    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            count ++;
        }
    }
    return count;
}

int main(){
    string line;
    int tab, op = 0, cl = 0, temp = 0;

    while(getline(cin, line)){
        line = removeLeadingSpaces(line);
        tab = temp;
        if(line[0] == '}'){
            tab = temp - 1;
        }
        for(int i = 0; i < tab; i++){
            cout << "\t";
        }

        op = countChar(line, '{');
        cl = countChar(line, '}');
        temp = temp + (op - cl);
        cout << line << endl;
    }
}


