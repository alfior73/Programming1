/*******************************

Filename: valueControlledLoop.cpp
Written by: Alfio Raymond
Created on: 
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {
	//Declare variables and constants
	int sum = 0, score;
	const int MAX_VAL = 600;
	
	//Loop while the sum < 600
	while(sum < MAX_VAL)
	{
		//prompt for a score
		cout << "Please enter a score: ";
		cin >> score;
		
		//add the score to the sum
		sum += score;
	}
	
	//end loop
	
	//display the sum
	cout << "The sum of the values you entered is " << sum << endl;
	
	
	
cout << endl << endl << endl;
return 0;
}
