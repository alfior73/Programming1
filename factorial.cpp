/*******************************

Filename: factorial.cpp
Written by: Alfio Raymond
Created on: 29 March 2016
Description: 


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {
	//Declare variables and constants
	int sum = 1;

	cout << "Enter the number for factorial value: ";
	cin >> sum;
	
	cout << "Factorial: ";

	//Loop while count less than the # of scores
	for(int i = 5; i >= 1; i--)
	{
		sum = sum * i;
	}
		cout << sum << endl;
	
	
	cout << endl << endl << endl;
	return 0;
}
