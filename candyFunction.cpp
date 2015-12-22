// Filename: candyFunction.cpp
// Written by: Alfio Raymond
// Created on: Nov 9, 2015
// Description: creation of functions
// Challenges: none really
// Copyright: Â©2015 Alfio Raymond
// Time Spent: 30 minutes
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

void candy(int candyBars);

int main()
{
	int candyBars;
	
		do
		{
			cout << "How many candybars? ";
			cin >> candyBars;
			cout << endl;
			
			candy(candyBars);
			
		}while(candyBars != 0);
		
		return 0;
		
}

void candy(int candyBars)
{
	static int candybar;
	
	candybar += candyBars;
	
	cout << candybar;
	
	return;
}
