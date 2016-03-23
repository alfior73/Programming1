/************
Filename: interestCalculator_Count.cpp
Created by: Alfio Raymond

Desc: The user enters a starting balance and a # of years to invest their money. 
The program uses a loop to calculate how much money their investment will return.
******/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	const double RATE = 3.25;
	int years, yCount = 0;
	double sBalance, eBalance = 0;
	
	cout << "Welcome to the interest calculator ... \n\n";
	cout << "Please enter your starting account balance: ";
	cin >> sBalance;
	cout << endl << endl;
	cout << "Please enter the term (in years) of your investment: ";
	cin >> years;
	
	eBalance = sBalance;
	
	while(yCount < years)
	{
		yCount++;
		
		//eBalance = (eBalance + (eBalance * (RATE / 100)));
		//eBalance = eBalance * (1 + RATE / 100);
		
		eBalance *= (1 + (RATE / 100 ));
		
		cout << yCount << " - " << eBalance << endl;
	}
	
	cout << fixed << setprecision(2);
	
	cout << "Your current account balance is: $" << eBalance << endl;
	
	cout << endl << endl << endl;
	return 0;
	
}
