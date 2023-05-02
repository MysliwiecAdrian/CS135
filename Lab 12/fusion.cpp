//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 12
//
//
//
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

vector<int> goodVibes(const vector<int> v){
    vector<int> c;

    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            c.push_back(v[i]);
        }
    }

    return c;
}

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }

    while(vegeta.empty() != true){
        vegeta.pop_back();
    }
}