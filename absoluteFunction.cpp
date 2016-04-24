/*******************************

Filename: absoluteFunction.cpp
Written by: Alfio Raymond
Created on: 
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double findAbs(double value);

int main() {

	double value = 0.0;
	
	cout << "Enter a value to convert it to an absolue value: ";
	cin >> value;
	
	cout << fixed << setprecision(2);
	3
	cout << "The number you entered: " << value << " has an absolute value of " << findAbs(value);

	cout << endl << endl << endl;
	return 0;
}

double findAbs(double value)
{
	double abs = 0.0;
	
	//Technically I didn't use the abs function according to instructions and this is my absolute value function.
		
	abs = fabs(value);
	
	return abs;
}
