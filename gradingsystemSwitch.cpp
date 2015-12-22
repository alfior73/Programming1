// File Name: gradingSystem.cpp (named raymonda32.cpp for C programming class)
// Written by: Alfio Raymond
// Description: write a grading program that uses an if/else chain statement
// Challenges: none at creation of program
// Time Spent: 
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1) 
// 2) 
// 3) 
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

//tells where std library is located
using namespace std;


int main() {
	
	//declare variable percentage as a double and I would have set it to 0 but found it got by if statements when a char is entered.
	double percentage;
	
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
		percentage = round(percentage);
		
		//create a variable to use with switch statement, this also allows us to not fiddle too much with variable that accepted user input
		int switchValue = 0;
		
		//take the value of the user input divide it by 10 and enter it into switchValue. 
		//This will save us typing time by not making us type out 100 numbers and instead only 10
		switchValue = percentage/10;
		
		
		switch(switchValue)
		{
			//If the value is between 1-5 then enter this statement block.
			case 1:
			case 2: 
			case 3:
			case 4: 
			case 5:
				//Output string then percentage value then output the string and end the line
				cout << "\n\tPercentage: " << percentage << "%\tGrade: F\tPoints: 0.00" << endl;
				break;
			
			//If the value is 6 then enter this statement block	
			case 6:
				//Output string then percentage value then output the string and end the line
				cout << "\n\tPercentage: "  << percentage << "%\tGrade: D\tPoints: 1.00" << endl;
				break;
			
			//If the value is 7 then enter this statement block
			case 7:
				//Output string then percentage value then output the string and end the line
				cout << "\n\tPercentage: "  << percentage << "%\tGrade: C\tPoints: 2.00" << endl;
				break;
			
			//If the value is 8 then enter this statement block
			case 8:
				//Output string then percentage value then output the string and end the line
				cout << "\n\tPercentage: " << percentage << "%\tGrade: B\tPoints: 3.00" << endl;
				break;
			
			//If the value is 9 or 10 then enter this statement block
			case 9:
			case 10:
				//Output string then percentage value then output the string and end the line
				cout << "\n\tPercentage: " << percentage << "%\tGrade: A\tPoints: 4.00" << endl;
				break;
			
			//If there is any other value then enter this statement block or if there is a 0 
			default:;
		}
		
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
