/*******************************

Filename: boolFunction.cpp
Written by: Alfio Raymond
Created on: 19 April 2016
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {


cout << endl << endl << endl;
return 0;
}

bool isValidBowlingScore(int score)
{
	
	if(score < 0 || score > 300)
		return false;
	else 
		return true;
		
}
