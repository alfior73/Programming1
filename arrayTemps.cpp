#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 12;
	double avgTemp[SIZE] = {45.5,48.3,51.2,55.6,61.5,67.6,72.9,72.4,68.5,61,52,45.9};
	double avgPrec[SIZE] = {4.7,4.1,3.5,1.8,0.8,0.3,0.1,0.2,0.5,1.3,3,4};
	
	double average,average2, sum = 0, sum2=0;
	
	for(int i= 0; i < SIZE; i++)
	{
		sum += avgTemp[i];
		sum2 += avgPrec[i];
	}
	
	average = sum / SIZE;
	average2 = sum2 / SIZE;
	
	cout << "The average temp for the year is: "<< average << endl;
	cout << "The average precipatation for the year is: " << average2 << endl;
	
	cout << endl << endl << endl;
	return 0;
}
