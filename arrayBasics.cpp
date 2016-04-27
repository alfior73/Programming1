Enter file contents here#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 3;
	
	double numbers[SIZE] = {12.5,36.5,56.23};
	
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "\nPlease enter digits: ";
		cin >> numbers[i];
	}
	
	cout << numbers[0] << " "<< numbers[1] << " " << numbers[2];
	
	
	
	cout << endl << endl << endl;
	
	return 0;
}
