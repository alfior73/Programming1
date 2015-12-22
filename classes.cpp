// File Name: classes.cpp
// Written by: Alfio Raymond
// Description: Showcase what classes I'm taking
// Challenges: Lining things up for formatting
// Time Spent: 30 minutes in total to write and format program.
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
using namespace std;

int main()
{
	for(int i=0; i<80;i++)
	{
		cout << "*";
	}
	
	cout << "Course #\tTitle\t\t\t\tDays\t\tTime" << endl;
	cout << "***********\t**********\t\t\t********\t********\n";
	cout << "CSC 151\t\tProgramming 1\t\t\tMon/Weds\t11am - 12:50pm\n";
	cout << "MAT 165\t\tTrigonometry for Eng/Sci\tMon/Weds\t9:30am - 10:50am\n";
	
	return 0;
}
