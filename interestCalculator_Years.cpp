/************
Filename: interestCalculator_Years.cpp
Created by: Alfio Raymond

Desc: The user enters a starting balance and a # of years to invest their money. 
The program uses a loop to calculate how much money their investment will return.
******/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	const double RATE = 3.25;
	int years;
	double sBalance, eBalance = 0;
	
	cout << "Welcome to the interest calculator ... \n\n";
	cout << "Please enter your starting account balance: ";
	cin >> sBalance;
	cout << endl << endl;
	cout << "Please enter your desired ending account balance: ";
	cin >> eBalance;
	
		cout << fixed << setprecision(2);
	
	while(sBalance < eBalance)
	{
		years++;
		
		//eBalance = (eBalance + (eBalance * (RATE / 100)));
		//eBalance = eBalance * (1 + RATE / 100);
		
		sBalance *= (1 + (RATE / 100 ));
		
		cout << years << " - " << sBalance << endl;
	}
	

	
	cout << "Your current accou;nt balance is: $" << eBalance << endl;
	cout << "Your money was invested for: " << years << endl;
	cout << endl << endl << endl;
	return 0;
	
}
