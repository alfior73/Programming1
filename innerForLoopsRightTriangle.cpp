// Filename: innerForLoopsRightTriangle.cpp
// Written by: Alfio Raymond
// Created on: Nov 4, 2015
// Description: create an upside down right triangle with a right side edge; 
// Challenges: Making alignment and loop counters
// Copyright: Â©2015 Alfio Raymond
// Time Spent: 1 hour
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
	int count = 1;
	
	for(int i=8; i>=1; i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout << "* ";	
		}
		
		cout << endl;
		
		for(int k=1;k<=count;k++)
		{
			cout << "  ";
		}
		 count++;
		
	}
	
	return 0;	
}
