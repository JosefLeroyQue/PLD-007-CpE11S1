/*START
  WHILE TRUE DO
    PRINT menu options
    PROMPT user for choice
    IF choice not in [1, 2, 3, 4] THEN
      BREAK
    ENDIF

    IF choice == 1 THEN
      PROMPT for radius
      CALCULATE area of circle
    ELSE IF choice == 2 THEN
      PROMPT for length and width
      CALCULATE area of rectangle
    ELSE IF choice == 3 THEN
      PROMPT for base and height
      CALCULATE area of triangle
    ELSE IF choice == 4 THEN
      PROMPT for side length
      CALCULATE area of square
    ENDIF
  ENDWHILE
END*/



#include <iostream>
using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "Menu:\n";
        cout << "1) Area of circle\n";
        cout << "2) Area of rectangle\n";
        cout << "3) Area of triangle\n";
        cout << "4) Area of square\n";
        cout << "Enter choice (1-4 or any other number to exit): ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            break;
        }

        if (choice == 1) {
            float radius;
            const float pi = 3.1415926536;
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area of circle: " << pi * radius * radius << endl;
        } else if (choice == 2) {
            float length, width;
            cout << "Enter length and width: ";
            cin >> length >> width;
            cout << "Area of rectangle: " << length * width << endl;
        } else if (choice == 3) {
            float base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            cout << "Area of triangle: " << 0.5 * base * height << endl;
        } else if (choice == 4) {
            float side;
            cout << "Enter side length: ";
            cin >> side;
            cout << "Area of square: " << side * side << endl;
        }
    }
    return 0;
}
