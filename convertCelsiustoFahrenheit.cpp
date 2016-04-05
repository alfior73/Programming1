/*******************************

Filename: raymonda_5a.cpp
Written by: Alfio Raymond
Created on: 5 Apr 2016
Description: To convert values from Celsius to Fahrenheit and increment those values depending on user input.


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int celsius1 = 0, celsius2 = 0, incrementValue = 1;
	double Fahrenheit = 0;
	
	    cout << fixed << setprecision(1);
	
	cout << "Please enter a starting Celsius value: ";
	cin >> celsius1;
	
	cout << "Please enter an ending Celsius value: ";
	cin >> celsius2;
	
	cout << "Please enter the increment between the two values: ";
	cin >> incrementValue;
	
	cout << "\nDegrees Celsius\t\tDegrees Fahrenheit" << endl;
	cout << "---------------\t\t------------------" << endl;
	
	while(celsius1 != celsius2+incrementValue)
	{
		Fahrenheit = (9.0 / 5.0) * celsius1 + 32;
		cout << "\t" << celsius1 << "\t\t\t" << Fahrenheit << endl;
		
		celsius1 += incrementValue;
		
	}
	
cout << endl << endl << endl;
return 0;
}
