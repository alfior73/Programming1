/*******************************

Filename: numberSquareCube.cpp
Written by: Alfio Raymond
Created on: 29 March 2016
Description: 


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {
	//Declare variables and constants
	int number = 0, square = 0, cube = 0;

	cout << "Number\tSquare\tCube\n";

	//Loop while count less than the # of scores
	for(int i = 0; i < 11; i++)
		cout << i << "\t" << i*i << "\t" << i*i*i << endl;
	
	
	cout << endl << endl << endl;
	return 0;
}
