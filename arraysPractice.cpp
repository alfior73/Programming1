#include <iostream>

using namespace std;

int main()
{
	const int numers = 5;
	
	int i;
	int sum=0;
	
	int shoppingCosts[numers];
	
	for(i = 0; i < numers; i++)
	{
		cout << "Enter price: ";
		cin >> shoppingCosts[i];
	}
	
	for (i = 0; i< numers; i++)
	{
		cout << shoppingCosts[i] << " " << endl;
		
		sum +=	shoppingCosts[i];
	}
	
	sum = ((double)sum) /numers;
	
	cout << "Sum: " << sum;
	
	return 0;
}
