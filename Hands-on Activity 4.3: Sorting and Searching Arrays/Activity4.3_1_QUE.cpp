#include<iostream>
using namespace std;

int main()
{
	int day;
	cout << "7 DAYS OF THE WEEK" << endl;
	cout << "Enter numbers from (0-6): ";
	cin >> day;
	
	string daysOfWeek[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	
	if (day >= 0 && day < 7)
	{
		cout << daysOfWeek[day] << endl;
	} else 
	{
		cout << "Impossible" << endl;
	}
	return 0;
}
