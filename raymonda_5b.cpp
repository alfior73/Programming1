#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void linear(double, double, double, double, double&, double&);

int main()
{
	double x1 = 0.00;
	double y1 = 0.00;
	double x2 = 0.00;
	double y2 = 0.00;
	double num5 = 0.00;
	double num6 = 0.00;
	
	do
	{
		cout << "Enter the value of X and Y for point 1: ";
		cin >> x1 >> y1;
		
		cout << "Enter the value of X and Y for point 2: ";
		cin >> x2 >> y2;
		
		if ( x1 == y1)
		{
			cout << "The points you entered are the same! Please re-enter your values.";	
		}
		else if( x2 == y2 )
		{
			cout << "The points you entered are the same! Please re-enter your values.";	
		}
		else
		{
			
			if(x1 == x2)
			{
				cout << "The points you entered define a vertical line: x = n" << endl;
				
			}
			else if(y1 == y2)
			{
				cout << "The points you enetered define a vertical line: x = n" << endl;
				cout << "x = n" << endl;
			}
			else
			{
				linear(x1, y1, x2, y2,num5, num6);
			}
			
		}
		
			
	} while(x1 == 'N' || 
			x1 == 'n' || 
			y1 == 'N' || 
			y1 == 'n' || 
			x2 == 'N' || 
			x2 == 'n' ||
			y2 == 'N' ||
			y2 == 'n' );
	
	return 0;		
}

void linear(double x1, double y1, double x2, double y2, double& num5, double& num6)
{
	double m = 0.00;
	
	cout << "The points you entered define the function: y = mx + b";
	m = (y2-y1)*(x2-x1);
	cout << "Your value is: " << m;
	return;
}
