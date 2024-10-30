#include<iostream>
#include<cctype>
using namespace std;

int main() 
{
	char c;
	cout << "Enter a character:";
	cin >> c;
	
	if (islower(c))
	{
		cout << c << " is a lowercase character." << endl; 
	}
	else
	{
		cout << c << " is not a lowercase character." << endl;
	}
	
	if (isupper(c))
	{
		cout << c << " is an uppercase character." << endl;
	}
	else
	{
		cout << c << " is not an uppercase character." << endl;
	}
	
	if (isblank(c))
	{
		cout << c << " is a blank character." << endl;
	}
	else
	{
		cout << c << " is not a blank character." << endl;
	}
	
	if (isdigit(c))
	{
		cout << c << " is a digit." << endl;
	}
	else
	{
		cout << c<< " is not a digit." << endl;
	}
	
	if (isalpha(c))
	{
		cout << c << " is a letter." << endl;
	}
	else 
	{
		cout << c << " is not a letter." << endl;
	}
	
	if (isalnum(c))
	{
		cout << c << " is a digit or a letter." << endl;
	}
	else 
	{
		cout << c << " is not a digit or a letter." << endl;
	}
	
	if (isxdigit(c))
	{
		cout << c << " is a hexadecimal digit." << endl;
	}
	else 
	{
		cout << c << " is not a hexadecimal digit." << endl;
	}
	
	if (isspace(c))
	{
		cout << c << " is a whitespace character." << endl;
	}
	else 
	{
		cout << c << " is not a whitespace character." << endl;
	}
	
	if (isgraph(c))
	{
		cout << c << " is a printing character other than space." << endl;
	}
	else 
	{
		cout << c << " is not a printing character other than space." << endl;
	}
	
	if (iscntrl(c))
	{
		cout << c << " is a control character." << endl;
	}
	else
	{
		cout << c << " is not a control character." << endl;
	}
	
	if (isprint(c))
	{
		cout << c << " is a printing character including a space." << endl;
	}
	else
	{
		cout << c << " is not a printing character including a space." << endl;
	}
	
    if (ispunct(c))
	{
		cout << c << " is a printing character other than a digit, a space, and a letter." << endl;
	}
	else 
	{
		cout << c << " is not a printing character other than a digit, a space, and a letter." << endl;
	}
	
	cout << c << " converted to uppercase is " << static_cast<char>(toupper(c)) << endl;
	cout << c << " converted to uppercase is " << static_cast<char>(tolower(c)) << endl;
	return 0;
}
