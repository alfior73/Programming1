/********************************************
Filename: arrayTemps.cpp
Created By: Alfio Raymond
Created On: 3 May 2016




***********************************************/

#include <iostream>
#include <string>

using namespace std;

double findMeanDBL(double[], int);

int main()
{
	const int SIZE = 12;
	string months[SIZE] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	double avgTemp[SIZE] = {45.5,48.3,51.2,55.6,61.5,67.6,72.9,72.4,68.5,61,52,45.9};
	double avgPrec[SIZE] = {4.7,4.1,3.5,1.8,0.8,0.3,0.1,0.2,0.5,1.3,3,4};

	cout << findMeanDBL(avgTemp, SIZE) << endl;
	cout << findMeanDBL(avgPrec, SIZE) << endl;

	cout << endl << endl << endl;
	return 0;
}

double findMeanDBL(double a[], int LENGTH)
{
	double sum = 0;
	
	for(int i = 0; i < LENGTH; i++)
		sum += a[i];
		
	return sum / LENGTH;
}
