#include<iostream>
#include<cstdlib>
#include <string>
using namespace std;

int main() 
{
	string str = "123";
	int num = atoi(str.c_str()); // Convert string to integer
	cout << "Converted number:" << num << endl;
	return 0;
}
