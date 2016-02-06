/****************************************************************************** 
    Filename: raymonda_2B.cpp
    Written by: Alfio Raymond
    Created on: 5 February 2016
    Description: compute sum and average of three numbers
    Challenges: none
    Copyright: ©2016 Alfio Raymond
    Time Spent: 5 minutes
       
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
	
	double firstnum = 105.62;
	double secnum = 89.352;
	double thirdnum = 98.67;
	double sum = 0.00;
	double average = 0.00;
	
	cout << endl << endl;
	
	sum = firstnum + secnum + thirdnum;
	average = sum / 3;
	
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << average << endl;
	
	return 0; 
	
}
