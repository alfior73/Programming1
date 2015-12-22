// File Name: raymonda21.cpp
// Written by: Alfio Raymond
// Description: finds lucky numbers
// Challenges: just getting the right number
// Time Spent: 10 minutes in total to write and format program.
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1) Birthday 5/15/1972		expected output would be 147900
// 2)
// 3)
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)

//include iostream library	
#include <iostream>

//include math library
#include <cmath>

//telling where the library is located
using namespace std;

//datatype is integer for function main 
int main () {
	
	//set up 4 variables for program
	//set variable values for birthday; this is not my birthday just used values for program.
	int lucky, month=5, day=15, year=1972;
	
	//do calculation for lucky number
	lucky = year * month * day;
	
	//output string statement and lucky number variable
	cout << "\n\t\t\tMy lucky number is: " << lucky << endl;
	
	//return true back to operating system
	return 0;
	
}
