/****************************************************************************** 
    Filename: raymonda_2A.cpp
    Written by: Alfio Raymond
    Created on:  February 2016
    Description: compute area and perimeter
    Challenges: none
    Copyright: ©2016 Alfio Raymond
    Time Spent: 5 minutes
       
********************************************************************************/

#include <iostream>

using namespace std;

int main() {
	int length = 10;	
	int width = 5;
	int area = 0;
	int perimeter = 0;
	
	cout << endl << endl;
	area = length * width;
	perimeter = length * 2 + width * 2;
	
	cout << "Area is: " << area << endl;
	cout << "Perimeter is: " << perimeter << endl;
	
	return 0;
}
