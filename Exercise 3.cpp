#include<iostream>
using namespace std;
 
int main()
{
	float Grade;
	
	cout<<"Input your Percentage Grade:"<<endl;
	cout<<"Percentage Grade:";
	cin>>Grade;

	if(Grade>=94 && Grade <=100)
	{
		cout<<"Your Descriptive Rating is Excellent"<<endl;
	}
	else if(Grade>=88.5 && Grade < 94)
	{
		cout<<"Your Descriptive Rating is Superior"<<endl;
	}
	if(Grade>=83 && Grade < 88.5)
	{
		cout<<"Your Descriptive Rating is Meritorious"<<endl;
	}
	else if(Grade>=77.5 && Grade < 83)
	{
		cout<<"Your Descriptive Rating is Very Good"<<endl;
	}
	if(Grade>=72 && Grade < 77.5)
	{
		cout<<"Your Descriptive Rating is Good"<<endl;
	}
	else if(Grade>=65.5 && Grade < 72)
	{
		cout<<"Your Descriptive Rating is Very Satisfactory"<<endl;
	}
	if(Grade>=61 && Grade < 65.5)
	{
		cout<<"Your Descriptive Rating is Satisfactory"<<endl;
	}
	else if(Grade>=55.5 && Grade < 61)
	{
		cout<<"Your Descriptive Rating is Fair"<<endl;
	}
	if(Grade>=50 && Grade < 55.5)
	{
		cout<<"Your Descriptive Rating is Passing"<<endl;
	}
	else if(Grade>=0 && Grade < 50)
	{
		cout<<"Your Descriptive Rating is Failed"<<endl;
	}

    
	return 0;
}
