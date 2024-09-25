#include<iostream>
using namespace std;

int main()
{
	//Create a c++ program to determine if the character is either male or female
	char c;
	
	cout<<"Enter the character:";
	cin>>c;
	
	switch(c)
	{
		case 'm':
			cout<<"Male";
		break;
		
		case 'M':
			cout<<"Male";
		break;
		
		case 'f':
			cout<<"Female";
		break;
		
		case 'F':
			cout<<"Female";
		break;
		
		default:
		{
			cout<<"DOES NOT SYMBOLIZES A GENDER";
		}		
	}
	return 0;
}
