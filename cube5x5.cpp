// Filename: cube5x5.cpp
// Written by: Alfio Raymond
// Created on: Nov. 4th, 2015
// Description: create a 5x5 cube
// Challenges: none
// Copyright: Â©2015 Alfio Raymond
// Time Spent: 15 minutes
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
	
	int rows = 1;
	
	while(rows <= 5)
	{
		cout << endl;
		
		int count = 1;
		
		while(count <= 5)
		{
			cout << "* ";
			count++;
		}
		
		rows++;
	}
	
	return 0;
}
