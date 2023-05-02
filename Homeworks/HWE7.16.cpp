//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E7.16
//
//
//
//
//
//computes distance from a to b

#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    double x;
    double y;
};

double distance(Point a, Point b){
    sqrt(pow(b.x - a.x,2) + pow(b.y - a.y,2));
}