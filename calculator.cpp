#include<iostream>
using namespace std;

int main()
{
	//Create a c++ program that applies a calculator function
	char c;
	double num1,num2;
	double sum,difference,product,quotient;
	
	cout<<"Enter the operator:";
	cin>>c;
	
	switch(c)
	{
		case '+':	
			cout<<"Input num1:";
			cin>>num1;
  			cout<<"Input num2:";
  			cin>>num2;
  			sum=(num1+num2);
  			cout<<"Sum:"<<sum<<endl;
		break;
		
		case '-':
			cout<<"Input num1:";
			cin>>num1;
	  		cout<<"Input num2:";
	  		cin>>num2;
	  		difference=(num1-num2);
	  		cout<<"Difference:"<<difference<<endl;
		break;
		
		case '*':
			cout<<"Input num1:";
			cin>>num1;
  			cout<<"Input num2:";
  			cin>>num2;
  			product=(num1*num2);
  			cout<<"Product:"<<product<<endl;
		break;
		
		case '/':
			cout<<"Input num1:";
			cin>>num1;
  			cout<<"Input num2:";
  			cin>>num2;
  			quotient=(num1/num2);
  			cout<<"Quotient:"<<quotient<<endl;
		break;
	}	
	return 0;
}
