/*******************************

Filename: addingChallenge.cpp
Written by: Alfio Raymond
Created on: 29 March 2016
Description: 


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {
	//Declare variables and constants
	int sum = 0, number;

	cout << "Enter a number: ";
	cin >> number;
	

	//Loop while count less than the # of scores
	for(int i = 1; i < number+1; i++)
	{
		sum += i;
		
	}
		cout << sum << endl;
	
	
	cout << endl << endl << endl;
	return 0;
}
