/*******************************

Filename: sphereVolume.cpp aka assignment raymonda_6a.cpp
Written by: Alfio Raymond
Created on: 23 April 2016
Description: Calculation of sphere volume

Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
double sphereVolume(double radius);

int main() {
 
	double radius;
	
	cout << fixed << setprecision(2);
	
	cout << "\nPlease enter a radius for the sphere: ";
	cin >> radius;
	cout << endl;
	
	cout << "The sphere\'s volume is: "<< sphereVolume(radius);
 
	cout << endl << endl << endl;
	return 0;
}

double sphereVolume(double r)
{
	double volume;
	const double PI = 3.141592;
	  
	volume = (( PI  * (pow(r, 3) ) ) * (4 / 3));
	
	return volume;
}
