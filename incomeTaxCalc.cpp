/*******************************

Filename: incomeTacCalc.cpp
Written by: Alfio Raymond
Created on: 1 March 2016
Description:
			Prompt the user for their taxable income and 
					return the amount of money they owe in taxes.
					<30000 = 10%
					<50000 = 13%
					<80000 = 15%
					>=80000 = 20%


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {
	
	//Declare variables and constants
	double taxableIncome, taxesOwed, taxRate;
	const double LEVEL1 = 30000;
	const double LEVEL2 = 50000;
	const double LEVEL3 = 80000;
	
	const double BRACKET1 = .10;
	const double BRACKET2 = .13;
	const double BRACKET3 = .15;
	const double BRACKET4 = .20;
	
	//Get user input: taxable income
	cout << "Enter your taxable income: ";
	cin >> taxableIncome;
	
	//if-else chain to determine tax bracket
		//assign rate
	if(taxableIncome < LEVEL1)
	{
		taxRate = BRACKET1;
	}
	else if (taxableIncome < LEVEL2)
	{
		taxRate = BRACKET2;
	}
	else if (taxableIncome < LEVEL3)
	{
		taxRate = BRACKET3;
	}
	else
	{
		taxRate = BRACKET4;
	}
	
	//calculate income tax owed
	taxesOwed = taxableIncome * taxRate;
	
	//display rate and income tax owed
	cout << "The rate you are set at is: " << taxRate * 100 << "%\n";
	cout << " The taxes you owe comes to the total of  " << taxesOwed << " dollars.\n";
	
	//end program
	cout << endl << endl << endl;
	return 0;
}
