//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 9A
//
//
//
//
//
//length and distance in 3d space

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D{
public:
    double x,y,z;
};

double length(Coord3D *p){
    return sqrt(pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2));
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if(length(p1) > length(p2)){
        return p1;
    }
    else{
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    (*ppos).x = (*ppos).x + (*pvel).x * dt;
    (*ppos).y = (*ppos).y + (*pvel).y * dt;
    (*ppos).z = (*ppos).z + (*pvel).z * dt;
}

Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *ppos = new Coord3D;
    *ppos = {x,y,z};
    return ppos;
}

void deleteCoord3D(Coord3D *p){
    delete p;
    p = nullptr;
}

int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}