/*******************************

Filename: SumCountControlled.cpp
Written by: Alfio Raymond
Created on: 29 March 2016
Description: 


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {
	//Declare variables and constants
	int score, sum = 0;
	int count = 0, numberOfScores;
	
	
	//Prompt the user for the # of scores to be entered	
	cout << "Number of values: ";
	cin >> numberOfScores;

	//Loop while count less than the # of scores
	while(count < numberOfScores)
	{
		//Prompt the user to enter a score
		cout << "Please enter a score: ";
		cin >> score;
		
		//Add the score to the sum
		sum += score;
		
		
		//update the count of score entered
		count++;
		
		//end loop
	}
	//Display sum
	cout << "The total sum of values is " << sum;
cout << endl << endl << endl;
return 0;
}
