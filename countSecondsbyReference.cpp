#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void timeRef(int hours, int minutes, int seconds, int& total);

int main()
{
	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << endl;
	
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	cout << endl;
	
	cout << "Enter the number of seconds: ";
	cin >> seconds;
	cout << endl;
	
	cout << "Total Time: " << timeRef(hours, minutes, seconds, total);
	
	
	return 0;
	
}

void timeRef(int hours, int minutes, int seconds, int& total)
{
	int totalSeconds = 0;
	int totalMinutes = 0;
	int totalHours = 0;
	
	int totalTime = 0;
	
	totalMinutes = ((hours * 60)*60);
	
	totalSeconds = (minutes * 60);
	
	totalTime = totalMinutes + totalSeconds + seconds;
	
	return totalTime;
	
}
