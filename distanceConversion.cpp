/*************************

Filename: distanceConversion.cpp
Name: Alfio Raymond
Date: 23 February 2016

Description: The following application prompts the user for a distance in meters.
The program calculates and display the distance in yards.

	Add conversions for feet and inches...
	
*****************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	cout << setprecision(2) << endl;
	// declaring variables and constants
		double distMeters, distYards, distFeet, distInches, distAtmos;
		
		const double conv_RATE_Yard = 1.09361;
		const double conv_RATE_Meters = 33; 
		
	// get user input - meters
		cout << "Please enter a distance in meters: ";
		cin >> distMeters;
	
	// calculate
		distYards = distMeters * conv_RATE_Yard;
		distFeet = distYards * 3;
		distInches = distYards * 12;
		distAtmos = distMeters / conv_RATE_Meters;
		
		
	//display distance in yards
	cout << "The distance in meters you entered " << distMeters << " is " << distYards << " yards." << endl;
	cout << "The distance in meters you entered " << distMeters << " is " << distFeet << " feet." << endl;
	cout << "The distance in meters you entered " << distMeters << " is " << distInches << " inches." << endl;
	cout << "The distance in meters you entered " << distMeters << " is " << distAtmos << " Atmospheres." << endl;
		
	// end of program
	cout << endl << endl << endl;
	return 0;
}
