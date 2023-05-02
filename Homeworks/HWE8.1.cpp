//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: HW E8.1
//
//
//
//
//
//Creates a file and writes in it.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
   fstream newfile;
   newfile.open("hello.txt",ios::out); 
      newfile<<"Hello, World!";
      newfile.close();
   newfile.open("hello.txt",ios::in);
      string stuff;
      while(getline(newfile, stuff))
      {
         cout << stuff << "\n";  
      }
      newfile.close();  
   }
