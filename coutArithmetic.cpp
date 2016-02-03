/***********************************

Name: Alfio Raymond
Date 2 February 2016

filename: coutArithmetic.cpp

************************************/
#include <iostream>

using namespace std;

int main()
{
	cout << endl << endl;
	int amount = 1;
	int m = 50;
	int n = 10;
	int p = 5;
	int total = 0;
	
	cout << 10.0 + 15 / 2 + 4.3 << endl << endl;
	cout << 3.0 * 4 / 6 + 6 << endl << endl;
	cout << 20.0 - 2 / 6 + 3 << endl << endl;
	cout << 10 + 17 / 3.0 + 4 << endl << endl;
	cout << 10 + 17 % 3 + 4 << endl << endl;
	
	total = m / p + n - 10 * amount; // page 56 of A First Book of C++ #5a
	
	cout << total;
	
	cout << endl << endl;
	 
	total = amount / 5; // page 56 of A First Book of C++ #5d
	
	cout << total;
	
	
	return 0;
}
