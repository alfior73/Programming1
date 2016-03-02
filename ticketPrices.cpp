/*******************************

Filename: ticketPrices.cpp
Written by: Alfio Raymond
Created on: 23 February 2016
Description: prompt the user for their age and number of tickets they would like to purchase.
			 If they are less than 65 years old, the price per ticket is $12.50. 
			 If they are 65 or older, the price per ticket is $8.


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	//set cout
	cout << fixed << setprecision(2);
	
	int numTickets, age;
	const double regTicket = 12.5;
	const double seniorTicket = 8.0;
	double totalCost;
	
	//Prompt the user for age and number of tickets
	cout << "How many tickets would you like to purchase? ";
	cin >> numTickets;
	cout << "How old are you? ";
	cin >> age;
	
	if (age >= 65)
	{
		totalCost = numTickets * seniorTicket;
	}
	else
	{
		totalCost = numTickets * regTicket;	
	}
	
	cout << "Total cost would be " << totalCost << " for " << numTickets;
	cout << endl << endl << endl;
	return 0;
}
