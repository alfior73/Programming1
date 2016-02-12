/****************************************************************************** 
    Filename: raymonda_3b.cpp
    Written by: Alfio Raymond
    Created on: 11 February 2016
    Description: compute radius of a circle
    Challenges: none
    Copyright: ©2016 Alfio Raymond
       
********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    cout << fixed << setprecision(3);
    
    const double PI = 3.1416;
    
    cout << "Enter the radius of a circle: ";
    cin >> radius;
    cout << endl;
    
    area = PI * pow(radius,2);
    
    cout << "The area of a circle is " << area << "." <<endl;
    
    return 0;
}
