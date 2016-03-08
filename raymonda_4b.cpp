/*******************************

Filename: raymonda_4b.cpp
Written by: Alfio Raymond
Created on: 
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	
	//Set precision to display in dollar amount
	cout << fixed << setprecision(2); 
	
	//variables
	const int percentile = 100; 
	double tolerance;
	string specStatus;
	
	//Ask user for input
	cout << "Please enter the tolerance percentile (1 - 10000): ";
	//User enters value
	cin >> tolerance;
	  
	 //Tolerance is tolerance divided by the percentile  
	 tolerance = tolerance / percentile;
	 
	//Depending on value processed it will enter the selected if statement.   
	if(tolerance < 0.1)
	{
		specStatus = "Space Exploration";
	}
	else if (tolerance >= 0.1 && tolerance < 1)
	{
		specStatus = "Military Grade";	
	}
	else if (tolerance >= 1 && tolerance < 10)
	{
		specStatus = "Commercial Grade";
	}
	else
	{
		specStatus = "Toy Grade";
	}
	
	//Once the specific if statement is pick it will then exit and output to the user.
	cout << "The tolerance of critical components is of type : " << specStatus; 
	cout << endl << endl << endl;
	return 0;
}
