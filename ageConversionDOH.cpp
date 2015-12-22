// File Name: ageConversionDOH.cpp
// Written by: Alfio Raymond
// Description: Outputs my name
// Challenges: none
// Time Spent: 15 minutes
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1)42								52, 025, 0x2a
// 2)								
// 3)								
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)


#include <iostream>
#include <iomanip>

using namespace std;

int main () {
	
	int age;
	int ageOctal, octalNumber;
	int ageHex, hexNumber;
	
	
	cout << "Enter your age: ";
	cin >> age;
	
	for(int i = 0; i < 80; i++) {
		cout << "_";
	}
	cout << "\nAccording to our calculations, you are: " << endl;
	
	for(int i = 0; i < 80; i++) {
		cout << "_";
	}
	
	cout << "\nDecimal: " << age << endl;
	
	cout << "Octal(Base 8): " << showbase << oct << age << endl;
	
	cout << "Hexidecimal(Base 16): " << showbase << hex << age << endl;
	
	for(int i = 0; i < 80; i++) {
		cout << "_";
	}
	
	cout << "END OF LINE" << endl;
	
	return 0;
}
