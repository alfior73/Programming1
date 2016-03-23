/************
Filename: loopingExample.cpp
Created by: Alfio Raymond

Desc: The user enters a starting balance and a # of years to invest their money. 
The program uses a loop to calculate how much money their investment will return.
******/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int rocks, days, sum = 0, count = 0, avg=0;
	
	cout << "How many days are you going to pick up rocks: " ;
	cin >> days;
	
	
	
	while(count < days)
	{
		cout << "How many rocks did you pick up today : ";
		cin >> rocks;
		
		sum += rocks;
		count++;
		
	}
	
	avg = (double)sum/count;
	
	cout << "You picked a total of " << sum << " rocks." << endl;
	cout << "Average number of rocks: " << avg;
	cout << endl << endl << endl;
	return 0;
	
}
