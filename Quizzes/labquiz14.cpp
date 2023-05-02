//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab Quiz 14
//
//

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){
    vector<int> v;

    for(int i = 0; i < n; i++){
        v.push_back(i);
    }
    
    return v;
}