//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab Quiz 9
//
//

#include <iostream>
using namespace std;

void remove_e(string& sentence){
    string temp;
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] != 'e'){
            temp += sentence[i];
        }
    }
    sentence = temp;
}