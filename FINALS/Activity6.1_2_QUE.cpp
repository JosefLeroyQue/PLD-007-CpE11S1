#include<iostream>
using namespace std;

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}
	
int main() 
{
	float temperature;
    int choice;

    cout << "Choose conversion type: " << endl;
    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter choice (1/2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;;
}

