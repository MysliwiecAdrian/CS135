//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E7.1
//
//
//sort values

#include <iostream>
using namespace std;

void sort2(double* p, double* q){
    double temp;

    if(q < p){
        temp = *p;
        *p = *q;
        *q = temp;
    }
}

int main(){
    double x = 5.7;
    double y = 3.2;
    sort2(&x, &y);
    cout << x << " " << y;
}