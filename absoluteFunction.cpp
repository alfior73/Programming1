/*******************************

Filename: absoluteFunction.cpp
Written by: Alfio Raymond
Created on: 24 April 2016
Description: create a file that output absolute value


Copyright: ©2016 Alfio Raymond
*********************************/

#include <iostream>
#include <iomanip>

using namespace std;

double absValue(double value);

int main()
{
    double userValue;
    
    cout << "Enter a value that you want converted to an absolute value: ";
    cin >> userValue;
    
    cout << fixed << setprecision(2);
    
    cout << "The value you entered is " << userValue << " and the absolute value is " << absValue(userValue);
    
    return 0;
}

double absValue(double value)
{
    double abs;
    
    if(value < 0)
        abs = value * -1;
    else
        abs = value;
    
    return abs;
}
