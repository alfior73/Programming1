/************
Filename: quadrants.cpp
Created by: Alfio Raymond


******/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	unsigned short int degrees;
	unsigned short int quadrant;
	
	cout << endl << endl << endl;
	
	cout << "Please enter a positive angle: ";
	cin >> degrees;
	
	
	// Decide what year range the vehicle falls into
	if (degrees < 89){
		quadrant = 1;
	}
	else if (degrees >= 91 && degrees <= 179){
		quadrant = 2;
	}
	else if (degrees >= 181 && degrees <= 269)
	{
		quadrant = 3;
		
	}
	else if (degrees >= 271 && degrees <= 359)// model year is greater than year 2000
	{
		 	quadrant = 4;
	}
	else {
		//if degrees is 0 then say positive y angle
		if(degrees == 0)
		{
			cout << "0 degrees is a positive X axis" << endl;
		}
		else if(degrees == 90)
		{
			cout << "90 degrees is a positive Y axis" << endl;
		}
		else if(degrees == 180)
		{
			cout << "180 degrees is a negative X axis" << endl;
		}
		else {
			cout << "270 degrees is a negative Y axis" << endl;
		}
	}
	
	cout << fixed << setprecision(2);
	if(degrees != 0 && degrees != 90 && degrees != 180 && degrees != 270)
	{
		cout << "The quarant is: " << quadrant << endl;	
	}
	

	  	
	
	cout << endl << endl << endl;
	return 0;
	
}
