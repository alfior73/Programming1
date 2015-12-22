// File Name: gradingSystem.cpp (named raymonda31.cpp for C Programming class)
// Written by: Alfio Raymond
// Description: write a grading program that uses an if/else chain statement
// Challenges: none at creation of program
// Copyright:Â©2015 Alfio Raymond 
// Time Spent: 30 minutes
//
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1) 89.6							Percentage: 89.60% Grade A Points: 4.00
// 2) 78.4							Percentage: 78.40% Grade C Points: 2.00
// 3) 55.3							Percentage: 55.30% Grade F Points: 0.00
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)

//input output stream
#include <iostream>
//manipilating of values to show 2 precision points
#include <iomanip>
//allows use of round function
#include <cmath>
//used for testing and mapping of characters
#include <ctype.h>

//tells where std library is located
using namespace std;


int main() {
	
	//declare variable percentage as a double and I would have set it to 0 but found it got by if statements when a char is entered.
	double percentage = 0.00;
	char grade;
	int points = 0;
	
	//Output program title
	cout << "\n\t\tWelcome to the Programming I grading system" << endl;
	
	//Create a nice straight line across the screen to seperate tile from what comes next
	for(int i=0; i<80;i++) {
		cout << "_";
	}
	
	//Ask for input from the user by outputting a statement of "Enter a grade"
	cout << "\nEnter a grade: ";
	
	//value entered by user is put into percentage variable
	cin >> percentage;
	
	//test if the value entered is within parameters specified
	if ((percentage < 0) || (percentage > 100) ) {
		
		// if statement is false then it enters into this error statement
		cout << "\n The grade you entered is not within the parameters of the grading system. Please re-enter updated grade." << endl;
	}
	else {
		//Set fixed position and precision for output stream. These are the ostream methods
		cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);
		
		//create a new line
		cout << "\n";
		
		//create a look for program to seperate the user input from the processed output
		//A for loop; create a counter called i and set it to 0, test if i is less than 80(length of screen), for each iteration add one
		for(int i=0; i<80;i++) {
			//output an underline 
			cout << "_";
		}
		
		//round percentage depending on point value .5 and above: round up .4 and below: round down
		//check to see if percentage is greater than 90; if true then enter if block
		if (round(percentage) >= 90) 
		{
			//Set grade to A and points to 4
			grade = 'A';
			points = 4;
		}
		//if percentage didn't meet condition above for greater than 90 then come into this if block
		else if (round(percentage) >= 80)
		{
			//Set grade to B and points to 3
			grade = 'B';
			points = 3;
		}
		//if percentage didn't meet condition above for greater than 80 then come into this if block
		else if (round(percentage) >= 70)
		{
			//Set grade to C and points to 2
			grade = 'C';
			points = 2;
		}
		//if percentage didn't meet condition above for greater than 70 then come into this if block
		else if (round(percentage) >= 60)
		{
			//Set grade to D and points to 1
			grade = 'D';
			points = 1;
		}
		//if percentage didn't meet any condition above then come into this if block
		else if (round(percentage) < 60 && round(percentage) > 1 ) 
		{
			//Set grade to F and points to 0
			grade = 'F';
			points = 0;
		}
		else {

		}
		
		cout << "\n\tPercentage: " << percentage << "%\tGrade: "<< grade <<"\tPoints: " << points << ".00" << endl; 
		
		//A for loop; create a counter called i and set it to 0, test if i is less than 80(length of screen), for each iteration add one
		for(int i=0; i<80;i++) {
			//output an underline
			cout << "_";
		}
		//Tried to center string on screen; Just a notification the it's the end of the communication
		cout << "\n\t\t\t\tEND OF LINE" << endl;
		
		//A for loop; create a counter called i and set it to 0, test if i is less than 80(length of screen), for each iteration add one
		for(int i=0; i<80;i++) {
			//output an underline
			cout << "_";
		}
	}
	
	//Program has completed.
	return 0;
}
