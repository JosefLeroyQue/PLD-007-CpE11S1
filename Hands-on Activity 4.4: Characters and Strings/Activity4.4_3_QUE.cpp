#include<iostream>
#include<string>
using namespace std; 

int main() 
{
	string str[4];
	int sum = 0;
	
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter an integer: ";
		cin >> str[i];
		sum += stoi(str[i]);
	}
	
	cout << "The total of the 4 values is: " << sum << endl;
	return 0;
}
