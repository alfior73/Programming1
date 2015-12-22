 // File Name: compoundInterest.cpp  (named raymonda41.cpp for C programming class)
// Written by: Alfio Raymond Â©2015 Alfio Raymond
// Description: write a compound interest program where interest grows over 30 years
// Challenges: making sure the formula is correct
// Time Spent: 45 minutes
// Given Input: (3 sets)         Expected Output: (3 corresponding sets)
// --------------------          -------------------------
// 1) 30, 1000.00, .0511			Balance: 1051.10, 1104.81, 1161.27
// 2) 30, 1000.00, .0625			Balance: 1062.50, 1128.91, 1199.46
// 3) 30, 10000.00, .05				Balance: 10500.00, 11025.00, 11576.25
//
// Revision History
// Date:        Revised By:     Action:
// ------------------------------------------------------------------
// mm/dd/yy    (your initials)  (what you did to the code)
// 

//input output stream
#include <iostream>
//manipilating of values to show 2 precision points
#include <iomanip>
//allows use of round function
#include <cmath>

//tells where std library is located
using namespace std;

int main ()
{
	//There's always 1 year...there is never 0 years...maybe adjust for months in future iterations
	int years = 1;
	//Principal I set for 1 dollar because it's a starting point
	double principal = 1.00;
	//interest rate for calculations
	double interestRate = 0.05;
	//my variable that recieves the calculation
	double futureValue = 0.00;
	//used for the for loop since we can't start at 0 because that means no years
	//so started at 1
	int year = 1;
	
	//A little header for the output to make it look presentable
	cout << "\t\t\tWelcome to the New Age Bank" << endl;
	cout << "\t\t*******************************************\n" << endl;
	
	//Asks user how many years and then accepts input and puts a new line to space questions out
	cout << "How many years? ";
	cin >> years; 
	cout << endl;
	
	//Ask user how much they want to put up, accepts input, and puts a new line to space questions out
	cout << "What is the principal? ";
	cin >> principal;
	cout << endl;
	
	//Ask user what is the interest rate for the calculation, accepts input and puts a new line
	cout << "What is the interest rate? ";
	cin >> interestRate;
	cout << endl;
	
	//Welcome to our for loop
	// year is 1 for the first year
	// year is less than years + 1 so whatever they enter adds one for the loop either that or use equal sign
	// just wanted to do something different and add a little diversity
	// year++ adds 1 to the year to increment after the loop has been entered
	for (year = 1; year < years+1; year++)
	{
		// futureValue is where we store our final amount after calculation
		// principla is amount user entered
		// pow is a math function that takes the interest rate plus 1 and year and passes it to the called function
		futureValue = principal * pow(1.0+interestRate/12,year*12);
		
		//set up our precision and set spacing options here
		cout << setiosflags(ios::fixed) << setiosflags(ios::showpoint) << setprecision(2);
		//output year then the increment number ie. year = 1-30 then outputs the string Balance and our value in futureValue
		// at this point the loop has ended and it either returns to increment or if it's finished it exits
		cout << "   Year " << setw(2) << year << "    Balance = " << futureValue << endl;	
	}
	//again just some formatting and looks to make program seem like a real life application
	cout << "\n Expected Returns on Investments at New Age Bank" << endl;
	cout << "\n\n Thank you for your business - New Age Bank" << endl;
	
	return 0;
}
