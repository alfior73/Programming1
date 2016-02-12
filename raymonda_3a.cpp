
/****************************************************************************** 
    Filename: raymonda_3a.cpp 
    Written by: Alfio Raymond
    Created on: 11 February 2016
    Description: compute area and perimeter
    Challenges: none
    Copyright: ©2016 Alfio Raymond
    
       
********************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    cout << fixed << setprecision(2);
    
    double elapsedTime, totalDistance, averageSpeed;
    
    averageSpeed = 58;
    totalDistance = 183.67;
    
    elapsedTime = totalDistance / averageSpeed;
    
    cout << "The total elapsed time for a distance of 183.67 miles is " << elapsedTime << " hrs." <<endl;
    return 0;
}
