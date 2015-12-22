// File Name: accumulator.cpp
// Written by: Alfio Raymond
// Description: Outputs my name
// Challenges: none
// Time Spent: 15 minutes
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1)2.50, 2.50,2.50				7.5								
// 2)3.99, 4.50, 250								
// 3)								
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)

#include <iostream>

using namespace std;

int main () {
	double price;
	double priceTotal;
	cout << "Enter a price: ";
	
	cin >> price;
	
	priceTotal += price;
	
	cout << "\nEnter a price: ";
	
	cin >> price;
	priceTotal += price;
	
	cout << "\nEnter a price: ";
	
	cin >> price;
	priceTotal += price;
	
	cout << "\nEnter a price: ";
	
	cin >> price;
	priceTotal += price;
	
	cout << "\nTotal amount spent today: " << priceTotal << endl;
	
	for(int i = 0; i < 80; i++) {
		cout << "_";
	}
	
	cout << "\n\t\t\tEND OF LINE" << endl;
	 
	return 0;
}
