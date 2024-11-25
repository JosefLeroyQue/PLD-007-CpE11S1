#include <iostream>
#include <iomanip>
using namespace std;

// Function definitions
double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    cout << fixed << setprecision(2); // Format output to 2 decimal places

    // Celsius to Fahrenheit Table
    cout << "Celsius to Fahrenheit Conversion:" << endl;
    cout << "Celsius\t\tFahrenheit" << endl;
    for (int c = 0; c <= 100; ++c) {
        cout << c << "\t\t" << fahrenheit(c) << endl;
    }

    cout << endl; // Add space between the two tables

    // Fahrenheit to Celsius Table
    cout << "Fahrenheit to Celsius Conversion:" << endl;
    cout << "Fahrenheit\tCelsius" << endl;
    for (int f = 32; f <= 212; ++f) {
        cout << f << "\t\t" << celsius(f) << endl;
    }

    return 0;
}
