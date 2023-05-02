//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 3B
//
//Prints out hte east basin storage on a certain day

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

    string input;
    string date;
    double eastSt, eastEl, westSt, westEl, maxTemp = 0, minTemp = 100;
    cout << "Enter date: ";
    cin >> input;

    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
    { 
        // this loop reads the file line-by-line
        // extracting 5 values on each iteration 
        
        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                            //ignorring the remaining columns 
    
        // for example, to print the date and East basin storage:
        if (eastSt < minTemp)
        {
            minTemp = eastSt;
        }
        if (eastSt > maxTemp)
        {
            maxTemp = eastSt;
        }
    }
    cout << "minimum storage in East basin: " << minTemp << " billion gallons" << endl;
    cout << "MAXimum storage in East basin: " << maxTemp << " billion gallons" << endl;
    fin.close();
}