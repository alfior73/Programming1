/*************************

Filename: passingGrade.cpp
Name: Alfio Raymond
Date: 23 February 2016

Description: Prompt the user for their numeric grade on a recent assignment. 
			The program will decide whether the grade is passing or failing and display a message.

	
	
*****************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	//declare variables
	int grade;
	
	//get user input - number grade
	cout << "Please enter your numeric grade: ";
	cin >> grade;
	
	//decide on passing / failing grade
	if(grade >= 60)
	{
		cout << "You passed. \n";
	}
	else
	{
		cout << "You failed.\n";
	}
	
	cout << endl << endl << endl;
	return 0;
}
