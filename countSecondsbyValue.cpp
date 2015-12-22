#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int time(int, int, int);

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
	
	cout << "Total Time: " << time(hours, minutes, seconds) << "seconds";
	
	
	return 0;
	
}

int time(int hours, int minutes, int seconds)
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
