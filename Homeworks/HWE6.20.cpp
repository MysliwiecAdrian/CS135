//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E6.20
//
//
//
//
//
//vector merge

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b){
    vector<int> c;
    
    for(int i = 0; i < a.size(); i++){
        c.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        c.push_back(b[i]);
    }
    sort(c.begin(), c.end());
    return c;
}
