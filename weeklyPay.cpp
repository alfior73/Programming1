/*******************************

Filename: .cpp
Written by: Alfio Raymond
Created on: 
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	//Set precision to display in dollar amount
	cout << fixed << setprecision(2); 
	
	//variables
	const double hourlyPay = 12.00;
	const double overtimePay = 18.00;
	double weeklyPay;
	int hours, overtimeHours;
	
	//Output to user
	cout << "How many hours worked this week?";
	
	//Input from user
	cin >> hours;
	
	//If hours are less than 40 or equal to 40 then enter first section
	if(hours <= 40)
	{
		//weeklyPay equals hours that were entered by user times the hourlyPay which is 12.00
		weeklyPay = hours * hourlyPay;	
	}
	//Since the hours are greater than 40 we enter here
	else
	{
		//OvertimeHouse equals hours that were enter by user minus the normal 40 hours
		overtimeHours = hours - 40;
		//we first get our normal 40 hour work week pay
		weeklyPay = hours * hourlyPay;
		//then we get our weekly pay by taking the overtime hours times the overtimePay and add it to normal work week pay
		weeklyPay = weeklyPay + overtimeHours * overtimePay;
		
	}
	
	cout << endl << endl << endl;
	//Output to the user their total pay for the week.
	cout << "Your weekly pay this week comes to the total of $" << weeklyPay;
	cout << endl << endl << endl;
	
	return 0;
}
