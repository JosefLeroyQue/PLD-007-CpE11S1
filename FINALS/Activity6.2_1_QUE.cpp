#include <iostream>
using namespace std;

double cubeArea(double side) 
{
	return side * side * side;
}

int main() {
    double side;
    cout << "Enter the side length of the cube: ";
    cin >> side;
    cout << "The area of the cube is: " << cubeArea(side) << endl;
    return 0;
}