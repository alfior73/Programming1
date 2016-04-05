/*******************************

Filename: raymonda_5c.cpp
Written by: Alfio Raymond
Created on: 5 Apr 2016
Description: To input grades and to accumulate those grades and then to get the average.


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double total = 0.0;
	int count = 0, grade = 0;
	
	do 
	{
		cout << "\nEnter a grade(To end program enter 999): ";
		cin >> grade;
	
		if(grade < 0 || grade > 100 && grade != 999)
		{
			cout << "\nThe grade you entered is not compatible with this system\n";
			cout << "Please enter a new grade\n";
			cout << "Enter a grade(To end program enter 999): ";
			cin >> grade;
		}
		
		total += grade;
		
		count++;
		
	} while(grade != 999);
	
	total -= 999;
	count--;
	
	cout << "\nYour total average grade is " << (double)total/count << endl;
	
	cout << endl << endl << endl;
	return 0;
}
