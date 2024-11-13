#include <iostream>
using namespace std;

struct numberInfo
{
	unsigned int num, x;
	
	void checkMultiple() 
	{
		if (num % x == 0)
		{
			cout << num << " is a multiple of " << x;
		} 
		else 
		{
			cout << num << " is a multiple of " << x;
		}
	}
};

int main() {
	numberInfo number;
	
	cout << "   MULTIPLE OF AN INTEGER TESTER   " << endl;
	cout << "===================================" << endl;
    cout << "Enter an integer: ";
    cin >> number.num;

    cout << "Enter integer x: ";
    cin >> number.x;
	
	number.checkMultiple();
	
    return 0;
}
