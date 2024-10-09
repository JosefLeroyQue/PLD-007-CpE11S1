/*START
  WHILE TRUE DO
    PRINT menu options
    PROMPT user for choice
    IF choice not in [1, 2, 3, 4] THEN
      BREAK
    ENDIF

    PROMPT user for value
    IF choice == 1 THEN
      PRINT value in inches
    ELSE IF choice == 2 THEN
      PRINT value in cm
    ELSE IF choice == 3 THEN
      PRINT value in meters
    ELSE IF choice == 4 THEN
      PRINT value in feet
    ENDIF
  ENDWHILE
END*/




#include <iostream>
using namespace std;

int main() {
    int choice;
    float value;

    while (true) {
        cout << "Menu:\n";
        cout << "1) cm to inches\n";
        cout << "2) inches to cm\n";
        cout << "3) feet to meters\n";
        cout << "4) meters to feet\n";
        cout << "Enter choice (1-4 or any other number to exit): ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            break;
        }

        cout << "Enter value: ";
        cin >> value;

        if (choice == 1) {
            cout << "Result: " << value / 2.54 << " inches\n";
        } else if (choice == 2) {
            cout << "Result: " << value * 2.54 << " cm\n";
        } else if (choice == 3) {
            cout << "Result: " << value / 3.28084 << " meters\n";
        } else if (choice == 4) {
            cout << "Result: " << value * 3.28084 << " feet\n";
        }
    }
    return 0;
}


