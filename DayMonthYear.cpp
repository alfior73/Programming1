/*******************************

Filename: DayMonthYear.cpp
Written by: Alfio Raymond
Created on: 1 March 2016
Description: On Board...


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	//Declare variables and constants:
	int dayFlag, monthFlag, yearFlag, day, month, year;
	string monthName;
	
	//Prompt the user for day, month, and year
	cout << "Please enter the numeric value for day of the month(1-31): ";
	cin >> day;
	cout << "Please enter the numeric value for month of the year (1-12): ";
	cin >> month;
	cout << "Please enter the year: ";
	cin >> year;
	//decide if day is a valid value
	if (day >=1 && day <= 31)
	{
		//if yes, display valid message
		dayFlag = true;
	}
	else
	{
		//if no, display invalid message
		dayFlag = false;
	}
	
	//Decide if month is a valid value
	if (month >=1 && month <= 12)
	{
		//if yes, display valid message
			monthFlag = true;
		
	}
	else
	{
		//if no, display invalid message
			monthFlag = false;
	}
	//Decide if year is a valid value
	if (year >=1 && year <= 9999)
	{
		//if yes, display valid message
			yearFlag = true;
	}
	else
	{
		//if no, display invalid message
		yearFlag = false;
	}
			
	if (dayFlag == true && monthFlag == true && yearFlag == true)
	{
		switch(month)
		{
			case 1:
				monthName = "January";
				break;
				
			case 2:
				monthName = "February";
				break;
				
			case 3:
				monthName = "March";
				break;
				
			case 4:
				monthName = "April";
				break;
				
			case 5:
				monthName = "May";
				break;
				
			case 6:
				monthName = "June";
				break;
				
			case 7: 
				monthName = "July";
				break;
				
			case 8:
				monthName = "August";
				break;
				
			case 9:
				monthName = "September";
				break;
				
			case 10:
				monthName = "October";
				break;
				
			case 11:
				monthName = "November";
				break;
				
			case 12:
				monthName = "December";
				break;
			
			default:;
				
		}
		cout << "You entered in " << day << " " << monthName << " " << year;
	}
	
	cout << endl << endl << endl;
	return 0;
}
