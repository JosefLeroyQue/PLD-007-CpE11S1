#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	char lower[] = {'p','P','5','!'};
	cout << "According to islower: " << endl;
	for (int i=0; i < 4; i++)
	{
		if (islower(lower[i]))
		{
			cout << lower[i] << " is a lowercase letter" << endl;
		}
		else
		{
			cout << lower[i] << " is not a lowercase letter" << endl;
		}
	}
	
	cout << endl;
	
	char upper[] = {'D','d','8','&'};
	cout <<  "According to isupper: " << endl;
	for (int i = 0; i < 4; i++)
	{
		if (isupper(upper[i]))
		{
			cout << upper[i] << " is an uppercase letter" << endl;
		}
		else 
		{
			cout << upper[i] << " is not an uppercase letter" << endl;
		}
	}
	
	 cout << endl;
	 
	 cout << "u converted to uppercase is " << static_cast<char>(toupper('u')) << endl;
	 cout << "7 converted to uppercase is " << static_cast<char>(toupper('7')) << endl;
	 cout << "$ converted to uppercase is " << static_cast<char>(toupper('&')) << endl;
	 cout << "L converted to lowercase is " << static_cast<char>(tolower('L')) << endl;
		return 0;
}
