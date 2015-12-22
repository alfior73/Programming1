// Filename: innerForLoos.cpp
// Copyright: Â©2015 Alfio Raymond 

#include <iostream>

using namespace std;

int main()
{
//	int userRowNum = 0;
//	int userColNum = 0;
//	
//	cout << "Enter a number of rows: ";
//	cin >> userRowNum;
//	
//	cout << "Enter a number of columns: ";
//	cin >> userColNum;
	
	int rows = 1;
	int j=8;
	int count = 1;
	
	for(int i=8; i>=1; i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout << "* ";
					
		}
		
		cout << endl;
	}
	
	return 0;
}
