// File Name: menuChoiceCin.cpp
// Written by: Alfio Raymond
// Description: Outputs my name
// Challenges: none
// Time Spent: 15 minutes
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1)A								You selected menu choice: A Please pay cashier
// 2)B								You selected menu choice: B Please pay cashier
// 3)C								You selected menu choice: C Please pay cashier
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
	double value1=0.00, value2=0.00, result=0.00;
	char operation;
	bool flag = 1;
	
	cout << "Enter Operation(+,-,*,/): ";
	cin >> operation;
	
	cout << "\nEnter two values with 2 decimal places: ";
	cin >> value1 >> value2;
	cout << "\n";
	
	
	switch(operation)
	{
		case '+':
			result = value1 + value2;
			break;
			
		case '-':
			result = value1 - value2;
			break;
		
		case '*':
			result = value1 * value2;
			break;
			
		case '/':
			if( value2 == 0)
				flag = 0;
			else
				result = value1/value2;
			break;	
	}
	
	if(flag != 0)
		cout << value1 << " " << operation << " " << value2 << " equals " << result << endl;
	else
		cout << value1 << " " << operation << " " << value2 << " equals UNDEFINED" << endl;
	
	return 0;
}
