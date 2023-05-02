//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E6.18
//
//
//
//
//
//vector append

#include <iostream>
#include <vector>
using namespace std;

vector<int> append(vector<int> a, vector<int> b){
    vector<int> c;
    c.insert(c.begin(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    return(c);
}