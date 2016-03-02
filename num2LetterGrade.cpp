/*******************************

Filename: Num2LetterGrade.cpp
Written by: Alfio Raymond
Created on: 1 March 2016
Description:


Copyright: ©2016 Alfio Raymond
    
*********************************/
#include <iostream>

using namespace std;

int main() {
	double grade;
	
	cout << "Please enter the numeric grade: ";
	cin >> grade;
		
		if (grade >=90 )
		{
			cout << "Grade is a A\n";
		}
		else if(grade >= 80)
		{
			cout << "Grade is a B\n";
		}
		else if(grade >= 70)
		{
			cout << "Grade is a C\n";
		}
		else if(grade >= 60)
		{
			cout << "Grade is a D\n";
		}
		else
		{
			cout << "Grade is an F\n";
		}
		
	}

cout << endl << endl << endl;
return 0;
}
