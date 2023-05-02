//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E7.18
//
//
//
//
//
//computes a triangle

#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    double x;
    double y;
};

struct Triangle{
    Point one;
    Point two;
    Point three;
};

double distance(Point a, Point b){
    sqrt(pow(b.x - a.x,2) + pow(b.y - a.y,2));
}

double perimeter(Triangle x){
    return distance(x.one, x.two) + distance(x.one, x.three) + distance(x.two, x.three);
}

