// File Name: baseExponentCalculations.cpp
// Written by: Alfio Raymond
// Description: Outputs my name
// Challenges: none
// Time Spent: 15 minutes
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1)
// 2)
// 3)								
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	int base, exponent;
	
	cout << "Enter a base: ";
	cin >> base;
	
	cout << "\nEnter an exponent: ";
	cin >> exponent;
	
	cout << "\nThe amounts you enter evaluates to: " << pow(base, exponent) << endl;
	
	for(int i = 0; i < 80; i++) {
		cout << "_";
	}
	
	cout << "END OF LINE" << endl;
	
	return 0;
}
