//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab Quiz 5
//
//

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file;
    string word;

    file.open("data.txt");
    while(getline(file, word)){
        cout << word << endl;
    }
    file.close();
}