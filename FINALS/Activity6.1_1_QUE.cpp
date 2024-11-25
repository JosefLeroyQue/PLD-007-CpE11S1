#include<iostream>
using namespace std;

	int addition(int a, int b) 
	{
		return a+b;
	}
	
	int subtraction(int a, int b)
	{
		return a-b;
	}
	
	int multiplication(int a, int b)
	{
		return a*b;
	}
	
	float division(int a, int b) 
	{
		if (b != 0) {
			return (float) a/b;
		} 
		else
		{
			cout << "Error! Division by zero." << endl;
			return 0;
		}
	}
	
int main() 
{
	int num1, num2;
	
	cout << "Enter the first integer: ";
	cin >> num1;
	
	cout << "Enter the second integer: ";
	cin >> num2;
	
	cout << "Addition: " << addition(num1, num2) << endl;
	cout << "Subtraction: " << subtraction(num1, num2) << endl;
	cout << "Multiplication: " << multiplication(num1, num2) << endl;
	cout << "Division: " << division(num1, num2) << endl;
	
	return 0;
}

