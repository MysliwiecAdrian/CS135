//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab Quiz 10
//
//

#include <iostream>
#include <string>
using namespace std;

int unbalanced_brackets(string input){
    int count = 0;
    
    for(int i = 0; i < input.length(); i++){
        if(input[i] == '{'){
            count++;
        }
        else if(input[i] == '}'){
            count--;
        }
    }

    return count;
}