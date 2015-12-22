// File Name: conversionWhileLoop.cpp  (named raymonda42.cpp for C programming class)
// Written by: Alfio Raymond  Copyright Â©2015 Alfio Raymond
// Description: A while loop that outputs Hex, oct and decimal values depending on user input
// Challenges: check if user enter a low/high number or a high/low number
// Time Spent: 45 minutes
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1) 2a to 30						Increments as expected 
// 2) 30 to 2a						Decrements as expected
// 3) 00 to ff						Increments as expected
//
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)
// 

//input output stream
#include <iostream>
//manipilating of values to show 2 precision points
#include <iomanip>
//allows use of round function
#include <cmath>

//tells where std library is located
using namespace std;

int main ()
{
	//created our two variables for user input
	int num1=0, num2=0;
	
	//Ask user for first value
	cout << "Enter a value(it will be converted to a hex value): ";
	//Value gets inputted and converted to hex
	cin >> hex >> num1;
	
	//Ask user for second value
	cout << "Enter a second value(it will be converted to a hex value): ";
	//Value gets inputed and converted to hex
	cin >> hex >> num2;
	
	//Creates our layout table with spacing
	cout << "\n\tDecimal" << setw(10) << "Octal" << setw(20) << "Hexidecimal" << endl;
	
	//creates a little whitespace to get it away from border of window
	cout << "     ";
	
	//a little generic for loop to add a line under our headers
	// i starts out at 1 and then is tested to see if its less than 45 and incremented once for each loop
	for(int i = 1; i< 45; i++)
	{
		//each loop adds a star
		cout << "*";
	}
	
	//added a new line after the header
	cout << "\n"<< endl;
	
	
	// So added this conditional to cover the reverse input option.
	// wanted to cover my bases
	// checks to see if num2 is less than num1
	if (num2 < num1)
	{
		//if num2 is less than num1 then enter here and execute this while loop
		// while num1 is greater or equal to num2 do a loop...or as some coaches say do a lap
		while (num1 >= num2)
		{
			// Output values depending on their base value with their showbases
			// ie o for octal and ox for hexidecimal
			
			cout << setw(10) << showbase << dec << num1 
				<< setw(15) << showbase << oct << num1 
				<< setw(15) << showbase << hex << num1 << endl;
			
			//when we hit here we decrement since we are starting at a high number and going downwards
			num1--;
		}
		
	}
	// else if num1 is lower than num2 then enter here
	else
	{
		//while num1 is less than or equal to num2 then do a loop.
		while (num1 <= num2)
		{
			//We output with our spacers and showbases
			// O for octal and Ox for Hexidecimal
			cout << setw(10) << showbase << dec << num1 
				<< setw(15) << showbase << oct << num1 
				<< setw(15) << showbase << hex << num1 << endl;
			
			//num1 increments until it is equal to num2
			// once done we are out of here...as in out of the loop
			num1++;
		}
	}
	
	return 0;
}
