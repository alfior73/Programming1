/************
Filename: weightClass.cpp
Created by: Alfio Raymond
Created on: 22 March 2016

******/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	unsigned short int mYear;
	unsigned short int mWeight;
	
	unsigned short int wClass;
	double rFee;
	
	cout << endl << endl << endl;
	
	cout << "Please enter a model year: ";
	cin >> mYear;
	
	cout << "Please enter a weight in lbs: ";
	cin >> mWeight;
	
	// Decide what year range the vehicle falls into
	if (mYear <= 1990){
		if (mWeight < 2700)
		{	
			wClass = 1;
			rFee = 26.5;
			
		}
		else if (mWeight >= 2700 && mWeight <= 3800)
		{
			wClass = 2;
			rFee = 35.5;
		}
		else // > 3800
		{
			wClass = 3;
			rFee = 36.5;
		}
	}
	else if (mYear <= 1999){
		if (mWeight < 2700)
		{	
			wClass = 4;
			rFee = 35.00;
			
		}
		else if (mWeight >= 2700 && mWeight <= 3800)
		{
			wClass = 5;
			rFee = 45.5;
		}
		else // > 3800
		{
			wClass = 6;
			rFee = 62.5;
		}
	}
	else // model year is greater than year 2000
	{
		if (mWeight < 2700)
		{	
			wClass = 7;
			rFee = 49.5;
			
		}
		else 
		{
			wClass = 8;
			rFee = 62.5;
		}
	}
	
	cout << fixed << setprecision(2);
	
	cout << "Your vehicle's Wight Class is: " << wClass << endl;
	cout << "Your vehicle's registration fee is: $"  << rFee << endl;
	  	ahfohyfiosdhfiodhyiogfhjaioj
	cout << endl << endl << endl;
	return 0;
	
}
