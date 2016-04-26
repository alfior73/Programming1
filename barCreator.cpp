Enter file contents here#include <iostream>
#include <iomanip>

using namespace std;

string barCreator(char);

int main()
{
	string entry;
	 cout << "Please enter digits: ";
	 getline(cin, entry);
	 
	 for (int i = 0; i < 5; i++)
	 {
	 	cout << barCreator(entry.at(i));
	 }
	 
	 int sum = 0;
	 
	 for(int i= 0; i < 5; i++)
	 
	 {
	 	sum += (entry.at(i) + '0');
	 }
	 cout << sum << endl;
	 
	 cout << endl << endl << endl;
	 
	 return 0;
}

string barCreator(char digit)
{
	string bars;
	switch(digit)
	{
		case '0': 
			bars = "||:::";
			break;
		case '1': 
			bars = ":::||";
			break;
		case '2': 
			bars = "::|:|";
			break;
		case '3': 
			bars = "::||:";
			break;
		case '4': 
			bars = ":|::|";
			break;
		case '5': 
			bars = ":|:|:";
			break;
		case '6': 
			bars = ":||::";
			break;
		case '7': 
			bars = "|:::|";
			break;
		case '8': 
			bars = "|::|:";
			break;
		case '9': 
			bars = "|:|::";
			break;
		
	}
	
	return bars;
}
