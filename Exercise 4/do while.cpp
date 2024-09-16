#include<iostream>
using namespace std;

int main()
{
	int i=0;
	
	cout<<"Output:"<<endl;
	do
	{
		cout<<"Hello "<<i<<endl;
		i++;
	}
	while(i<=10 && i>=1);
	return 0;
}
