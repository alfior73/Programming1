/***************************************
Filename: longJumpArraySortingAverage.cpp
 Created By: Alfio Raymond
 Created On: 8 May 2016
  
Description: 
 * LongJumps - Write a program that uses an array to store 3 jumps taken in a track meet by a Long Jumper (in meters).  
 * Using a loop, prompt the user for the three jump distances.  
 * The program should use another loop to find the longest jump.  
 * The program should use a third loop to find the average jump.  
 * Display the longest jump and average jumps.

Copyright: ©2016 Alfio Raymond
****************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 3;
    
    double longJumps[SIZE], highestJump, averageJump;
    
    int i;
    
    cout << fixed << setprecision(2);
    
    for(i=0; i < SIZE; i++)
    {
        cout << "Enter a jump length in meters: ";
        cin >> longJumps[i];
        cout << endl;
    }
    
    highestJump = longJumps[0];
    averageJump = longJumps[0];
    
    for(i = 1; i < SIZE; i++)
    {
        if(highestJump < longJumps[i])
        {
            highestJump = longJumps[i];
        }
    }
    
    for(i = 1; i < SIZE; i++)
    {
        averageJump += longJumps[i];
    }
        
    averageJump = averageJump / (double)SIZE;
    
    cout << "The highest jump was " << highestJump << endl;
    cout << "The average jump was " << averageJump << endl;
    
    cout << endl << endl << endl;
    return 0;
}
