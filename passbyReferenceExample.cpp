/*******************************

Filename: swapValues.cpp
Written by: Alfio Raymond
Created on: 19 April 2016
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

void swap(int&, int&);

int main() {
		int one = 5, two = 10;
		cout << one << "\t" << two << endl;
		swap(one, two);
		cout << one << "\t" << two << endl;

cout << endl << endl << endl;
return 0;
}

void swap(int &n1, int &n2)
{
	int temp;
	
	temp = n1;
	n1 = n2;
	
	n2 = temp;
}
