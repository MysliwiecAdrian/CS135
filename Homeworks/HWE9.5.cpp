//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E9.5
//
//
//
//
//
//simulating a circuit for hallway lights

#include <iostream>
using namespace std;

class Rectangle{
private:
    double width;
    double height;

public:
    Rectangle(double input_w, double input_h){
        width = input_w;
        height = input_h;
    }

    double get_perimeter(){
        return (width * 2) + (height * 2);
    }

    double get_area(){
        return width * height;
    }

    void resize(double factor){
        width *= factor;
        height *= factor;
    }
};