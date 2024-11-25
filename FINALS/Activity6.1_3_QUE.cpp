#include<iostream>
using namespace std;

float dollarsToPesos(float dollars, float exchangeRate)
{
	return dollars*exchangeRate;
}

float pesosToDollars(float pesos, float exchangeRate)
{
	return pesos/exchangeRate;
}

int main()
{
	float amount;
	int choice;
	float exchangeRate = 58.95;
	
	cout << "What type of conversion do you want to use?" << endl;
	cout << "1. Dollars to Pesos." << endl;
	cout << "2. Pesos to Dollars." << endl;
	cout << endl;
	cout << "Enter (1/2): ";
	cin >> choice;
	
	if (choice == 1) 
	{
		cout << "Enter the Dollar amount: ";
		cin >> amount;
		cout << endl;
		cout << "Amount in Pesos: " << dollarsToPesos(amount, exchangeRate) << "php" << endl;
	} 
	else if (choice == 2)
	{
		cout << "Enter the Pesos amount: ";
		cin >> amount;
		cout << endl;
		cout << "Amount in Dollars: " << pesosToDollars(amount, exchangeRate) << "$" << endl;
	}
	else
	{
			cout << "Error! Please input either (1/2).";
	}
	return 0;
}
