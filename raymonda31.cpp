// File Name: raymonda31.cpp
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

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double percentage = 0.00;
	
	cout << "\n\t\tWelcome to the Programming I grading system" << endl;
	
	for(int i=0; i<80;i++) {
		cout << "_";
	}
	cout << "\nEnter a grade: ";
	cin >> percentage;
	
	if (percentage < 0 && percentage > 100) {
		cout << "\n The grade you entered is not within the parameters of the grading system. Please re-enter updated grade." << endl;
	}
	
	//Set fixed position and precision for output stream. These are the ostream methods
	cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);
	
	cout << "\n";
	
	for(int i=0; i<80;i++) {
		cout << "_";
	}
	
	if (percentage >= 90) 
	{
		cout << "\n\tPercentage: " << percentage << "%\tGrade: A\tPoints: 4.00" << endl;
	}
	else if (percentage >= 80)
	{
		cout << "\n\tPercentage: " << percentage << "%\tGrade: B\tPoints: 3.00" << endl;
	}
	else if (percentage >= 70)
	{
		cout << "\n\tPercentage: "  << percentage << "%\tGrade: C\tPoints: 2.00" << endl;
	}
	else if (percentage >= 60)
	{
		cout << "\n\tPercentage: "  << percentage << "%\tGrade: D\tPoints: 1.00" << endl;
	}
	else 
	{
		cout << "\n\tPercentage: " << percentage << "%\tGrade: F\tPoints: 0.00" << endl;
	}
	
	for(int i=0; i<80;i++) {
		cout << "_";
	}
	cout << "\n\t\t\t\tEND OF LINE" << endl;
	
	for(int i=0; i<80;i++) {
		cout << "_";
	}
}
