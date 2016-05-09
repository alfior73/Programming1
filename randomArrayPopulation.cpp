/***************************************
Filename: RandomArrayPopulation.cpp
 Created By: Alfio Raymond
 Created On: 8 May 2016
  
Description: 
 * RandomArray - Write a program that populates an integer array of size 100 with random numbers.  
 * The user should be prompted to choose the low and high numbers (inclusive) in the random number range.  
 * The program should display the contents of the array separated by a hyphen(-).  
 * Example Output: 32 - 12 - 43 - 11...
 * Note: Your program should contain two separate loops: one loop for input and one for output.

Copyright: ©2016 Alfio Raymond
****************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int SIZE = 100;
    
    int i, lowStart, highEnd, randomArray[SIZE];
    
    cout << "Please enter a starting low value: ";
    cin >> lowStart;
    cout << endl;
    
    cout << "Please enter a ending high value: ";
    cin >> highEnd;
    cout << endl;
    
    srand(time(NULL));
    
    for (i = 0; i < SIZE; i++)
    {
        randomArray[i] = lowStart + rand() % (highEnd + 1 - lowStart);
    }
    
    cout << endl;
    
    cout << "The values selected for the array are: ";
    for(i = 0; i < SIZE; i++)
    {
        if(i % 10 == 0)
        {    
            cout << endl;
        }
   
        cout << randomArray[i] << " - ";
        
    }
    
    cout << endl << endl << endl;
    
    return 0;
}
