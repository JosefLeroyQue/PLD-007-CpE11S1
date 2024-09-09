#include<iostream>
 using namespace std;

int main() 
{
  int x=0,y=0;
  int sum=0,difference=0,product=0,remainder=0;
  float quotient=0;

  cout<<"Enter two integers"<<endl;
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of y:";
  cin>>y;
  
  sum=x+y;
  difference=x-y;
  product=x*y;
  quotient=x/y;
  remainder=x%y;

  cout<<"Sum:"<<sum<<endl;
  cout<<"Difference:"<<difference<<endl;
  cout<<"Product:"<<product<<endl;
  cout<<"Qoutient:"<<quotient<<endl;
  cout<<"Remainder:"<<remainder<<endl;
  
  return 0;
  
}
