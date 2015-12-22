// File Name: raymonda22.cpp
// Written by: Alfio Raymond
// Description: calculate area of a triangle
// Challenges: none at creation of program
// Time Spent: 18 minutes in total to write and format program.
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1) base: 17.5 height: 6.1				expected area: 53.375
// 2) base: 5.25 height: 3.4				expected area: 8.925
// 3) base: 3.675 height: 9.5863			expected area: 17.615
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)


//Include input library to take in and put out values from variables
#include <iostream>
//Allow values to be manipulated by how much of the value we want to show. In my situation I wanted 3 places
#include <iomanip>

//Location to find library
using namespace std;

//datatype is integer for function main and basically tells the OS true or false if the program has completed
int main() {
	//Set our two variables that we will use for input and one for our final value...area. All variables use double datatype.
	double base, area, height;
	
	//set constant value for half using double datatype
	const double half = .5;
	
	// This is for layout purposes only
	// Set i equal to 0; then test if i less than 80; if it is add one to i and do what is inside braces.
	// in this case add a dash.
	// This will repeat until i equal 80
	for(int i=0; i<80;i++)
	{
		
		cout << "_";
	}
	
	//Output string you will ask user for input
	cout << "\nEnter the base of the triangle: ";
	
	//Users input will be stored in base variable
	cin >> base;
	
	//Output string to user asking for height of triangle
	cout << "\nEnter the height of the triangle: ";
	//Users input will be stored in height variable
	cin >> height;
	
	//Take the constant value from half(.5) and multiply it by base and height...this will give you area value
	area = half * base * height;
	
	//Set fixed position and precision for output stream. These are the ostream methods
	cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(3);
	
	/* 
		Output string to user plus the value they entered for base. 
		Then the string...and height with value they entered for height. 
		Set width of placement to 5 spaces. Then output the area that was calculated.
		
	*/
	cout << "\nThe area of a triangle with base " << base << " and height " << height << " is " << setw(5) << area << endl;
	
	// This is for layout purposes only
	// Set i equal to 0; then test if i less than 80; if it is add one to i and do what is inside braces.
	// in this case add a dash.
	// This will repeat until i equal 80
	for(int i=0; i<80;i++)
	{
		
		cout << "_";
	}
	
	//Output String END OF LINE denoting end of transmission by the MCP
	cout << "\n\t\t\t\tEND OF LINE" << endl;
	
	// This is for layout purposes only
	// Set i equal to 0; then test if i less than 80; if it is add one to i and do what is inside braces.
	// in this case add a dash.
	// This will repeat until i equal 80
	for(int i=0; i<80;i++)
	{
		
		cout << "_";
	}
	
	//Relay to main that the program is true and that it has completed to operating system
	return 0;	
	
}
