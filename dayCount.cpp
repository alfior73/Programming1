/******************************
Filename: dayCount.cpp
Created by: Alfio Raymond
Created on: 26 April 2016

*******************************/

#include <iostream>
#include <iomanip>

using namespace std;
int dayCount(int, int, int);

int main()
{
    int day = 1;
    int month = 1;
    int year = 2000;
    
    cout << "Please enter a day(1-30): ";
    cin >> day;
    cout << endl;
    
    cout << "Please enter a month(1-12): ";
    cin >> month;
    cout << endl;
    
    cout << "Please enter a year(Greater than 2000): ";
    cin >> year;
    cout << endl;
      
    cout << "There are " << dayCount(day, month, year) << " day/s.";
    
    cout << endl << endl << endl;
    return 0;
}

int dayCount(int day, int month, int year)
{
    int days = 1;
    int months = 0;
    int years = 0;
    
    if(month > 1)
    {
        months = month * 30;
    }
    
    if (year > 2000)
    {
       year = year - 2000;
        years = year * 365; 
    }
    
    days = day + months + years;
    
    return days;
}
