/*******************************

Filename: SumSentinalValue.cpp
Written by: Alfio Raymond
Created on: 
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {
	//declare variables and constants
	int score=0, sum = 0;
	
	//Loop while score is not -1
	while(score != -1)
	{
		//Prompt user for a score
		cout << "Please enter a score( -1 to quit): ";
		cin >> score;
		
		//add the score to the sum
		sum = sum + score ;	
		
		
	}
	//end loop
	
	sum +=1;
	
	//display the sum
	cout << "The sum of the total is " << sum << endl;
cout << endl << endl << endl;
return 0;
}
