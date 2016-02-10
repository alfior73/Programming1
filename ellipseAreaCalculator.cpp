/****************************************************************************** 
    Filename: ellipseAreaCalculator.cpp
    Written by: Alfio Raymond
    Created on: 9 February 2016
    Description: Ellipse Area Calculator
    Challenges: none
    Copyright: ©2016 Alfio Raymond
    
       
********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double a = 10;	
	double b = 20;
	double area = 0;
	
	cout << endl << endl;
	cout << setprecision(3) << fixed;
	
 	area = M_PI * a * b;

	cout << "Area is: " << area << endl;
	
	
	return 0;
}
