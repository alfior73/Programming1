/*******************************

Filename: timesCalledFunction.cpp
Written by: Alfio Raymond
Created on: 19 April 2016
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int timesCalled();

int main() {

for(int i = 0; i < 10; i++)
{
	cout << "Times called Returns..." << timesCalled() << endl;
}

cout << "Encore.." << timesCalled() << endl;


cout << endl << endl << endl;
return 0;
}
int timesCalled() {
	
	static int count = 0;
	
	count++;
	return count;
	
}
