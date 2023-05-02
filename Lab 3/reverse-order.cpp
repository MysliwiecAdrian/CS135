//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 3D
//
//Prints the west elevation backwards.

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    ifstream fin("C:/Users/adria/Desktop/cs135proj/Current_Reservoir_Levels.tsv");
    if (fin.fail())
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file

    string inputOne, inputTwo, date, dateArray[365];
    double eastSt, eastEl, westSt, westEl, storeArray[365];
    int count = 0;
    cout << "Enter earlier date: ";
    cin >> inputOne;
    cout << "Enter later date: ";
    cin >> inputTwo;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
    { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 
    
        if(date >= inputOne && date <= inputTwo)
        {
            dateArray[count] = date;
            storeArray[count] = westEl;
            count++;
        }
    }
    for(int i = count; i >= 0; i--)
    {
        cout << dateArray[i] << " " << storeArray[i] << " ft" << endl;
    }
    fin.close();
}