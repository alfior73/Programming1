/****************************************************************************** 
    Filename: raymonda_3c.cpp
    Written by: Alfio Raymond
    Created on: 11 February 2016
    Description: Perimeter, surface area and volume of in-ground pool
    Challenges: none
    Copyright: ©2016 Alfio Raymond
       
********************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    double length, width, averageDepth, perimeter, volume, ugSurfaceArea;

    cout << fixed << setprecision(2);

    cout << "Enter the length of your in-ground pool: ";
    cin >> length;
    cout << endl;

    cout << "Enter the width of your in-ground pool: ";
    cin >> width;
    cout << endl;

    cout << "Enter the average depth of your in-ground pool: ";
    cin >> averageDepth;
    cout << endl;
    
    perimeter = (length + width) * 2;

    volume = (length * width)* averageDepth;

    ugSurfaceArea= 2 * (length + width) * averageDepth + length * width;

    return 0;
}
