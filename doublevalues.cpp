/*******************************

Filename: raymonda_5b.cpp
Written by: Alfio Raymond
Created on: 5 Apr 2016
Description: incrementing of values. For each day the amount doubles.


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double amount1 = 0.01;
	
	cout << fixed << setprecision(2);
	
	cout << "Day\t\tAmount Owed" << endl;
	cout << "---\t\t-----------" << endl;
	
	
	for (int i = 1;i <= 64; i++)
	{	
		
		
		cout << " " << i << "\t\t   " << amount1 << endl;
		
		amount1 += amount1;
	}
	
cout << endl << endl << endl;
return 0;
}
