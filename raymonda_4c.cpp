/*******************************

Filename: raymonda_4c.cpp
Written by: Alfio Raymond
Created on: 
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {

	//variables
	int code, capacity;
	
	//Asking user for code to differentiate disc size
	cout << "Enter the specific code for the disc(1-4): ";
	//User input
	cin >> code;
	
	//Switch statement which would make this easier than a switch because you can change disc size as sizes get bigger
	switch(code)
	{
		case 1:
			capacity = 2;
			break;
			
		case 2:
			capacity = 4;
			break;
			
		case 3:
			capacity = 16;
			break;
			
		case 4:
			capacity = 32;
			
		default:;
		
	}
	
	//Show user what they enter and the capacity of drive
	cout << "Storage Drive Capacity: "<< capacity << "GB";	 
	cout << endl << endl << endl;
	return 0;
}
