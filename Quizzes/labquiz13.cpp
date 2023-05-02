//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab Quiz 13
//
//

#include <iostream>
#include <string>
using namespace std;

class Customer {
    private:
        string name;
        string unique_id;
    public:
        Customer(string name, string unique_id);
        Customer();
        string get_name();
        string get_unique_id();
        void set_name(string input_name);
        void set_unique_id(string input_unique_id);
};

Customer::Customer(string name, string unique_id){
    this->name = name;
    this->unique_id = unique_id;
}
Customer::Customer(){
    name = "";
    unique_id = "";
}

string Customer::get_name(){
    return name;
}

string Customer::get_unique_id(){
    return unique_id;
}

void Customer::set_name(string input_name){
    name = input_name;
}

void Customer::set_unique_id(string input_unique_id){
    unique_id = input_unique_id;
}