/****************************************************************************** 
    Filename: diagonalMathFunction.cpp
    Written by: Alfio Raymond
    Created on: 9 February 2016
    Description: Diagonal Area Calculator
    Challenges: none
    Copyright: ©2016 Alfio Raymond
    
       
********************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double x = 10;	
	double y = 0;
	
	
	cout << endl << endl;
	cout << setprecision(3) << fixed;
	
 	y = pow(x, 2) + pow(x,2);
	y = sqrt(y);
	
	cout << "Diagonal Y is: " << y << endl;
	
	
	return 0;
}
