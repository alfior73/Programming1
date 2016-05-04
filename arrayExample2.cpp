#include <iostream>
using namespace std;

int main() {
	int nums[10];
	int i;
	for(i=9; i>=0; i--)
	{
		nums[i] = 5*(i +1);
		cout << nums[i] << " ";
	}
	cout << endl;
	
	for(i=0; i<9; i++)
	{
		
		cout << nums[i] << " ";
	}
	cout << endl;

	for(i=8; i>=0; i--)
	{
		nums[i+1] = nums[i];
		//cout << nums[i] << " ";
	}
	cout << endl;
		for(i=0; i<9; i++)
	{
		//nums[i+1] = nums[i];
		cout << nums[i] << " ";
	}
	cout << endl;
}
