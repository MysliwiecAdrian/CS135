//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 3C
//
//Compares the elevations on certain dates.

#include <fstream>
#include <cstdlib>
#include <climits>
#include <iostream>

using namespace std;

int main()
{
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) 
    {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file

    string inputOne, inputTwo;
    string date;
    double eastSt, eastEl, westSt, westEl, maxTemp = 0, minTemp = 100;
    cout << "Enter starting date: ";
    cin >> inputOne;
    cout << "Enter ending date: ";
    cin >> inputTwo;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
    { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 
    
        if (date >= inputOne && date <= inputTwo)
        {
            if(eastEl > westEl)
            {
                cout << date << " East" << endl;
            }
            else if(westEl > eastEl)
            {
                cout << date << " West" << endl;
            }
            else if(eastEl = westEl)
            {
                cout << date << " Equal" << endl;
            }
        }
    }
    fin.close();
}