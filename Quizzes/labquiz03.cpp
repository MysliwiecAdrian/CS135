//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab Quiz 3
//
//

#include <iostream>
using namespace std;

int main(){
    int x,y;

    cout << "Enter value one: ";
    cin >> x;
    cout << "Enter value two: ";
    cin >> y;

    if(x > y){
        cout << x;
    }
    else{
        cout << y;
    }
}