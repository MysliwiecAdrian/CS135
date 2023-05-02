//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab Quiz 12
//
//

#include <iostream>
using namespace std;

class Money{
    public:
        int dollars;
        int cents;
};

Money add_money(Money x, Money y){
    int dol = x.dollars + y.dollars;
    int cent = x.cents + y.cents;

    while (cent >= 100){
        dol += 1;
        cent -= 100;
    }

    Money sum = {dol, cent};
    return sum;
}