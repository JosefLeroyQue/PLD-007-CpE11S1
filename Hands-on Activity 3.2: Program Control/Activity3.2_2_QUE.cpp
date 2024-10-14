#include<iostream>
using namespace std;

int main() {
	double principal = 1000.00;
	double rate = 0.05;
	for (int year = 1; year <= 10; year++) {
		double amount = principal;
		for (int i = 0;i < year; i++) {
			amount += amount*rate;
		}
		cout<<"Amount after year "<<year<<":$"<<amount<<endl;
	}
	return 0;
}
