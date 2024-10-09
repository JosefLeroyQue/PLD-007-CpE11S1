/*START
  total_mpg = 0
  count = 0
  WHILE TRUE DO
    PROMPT user for gallons used
    IF gallons used is -1 THEN
      BREAK
    ENDIF
    PROMPT user for miles driven

    CALCULATE mpg = miles driven / gallons used
    PRINT mpg

    ADD mpg to total_mpg
    INCREMENT count
  ENDWHILE

  IF count > 0 THEN
    PRINT overall average mpg = total_mpg / count
  ENDIF
END*/

#include <iostream>
using namespace std;

int main() {
    double gallons_used, miles_driven, mpg;
    double total_mpg = 0;
    int count = 0;

    while (true) {
        cout << "Enter gallons used (-1 to end): ";
        cin >> gallons_used;
        if (gallons_used == -1) {
            break;
        }

        cout << "Enter miles driven: ";
        cin >> miles_driven;

        mpg = miles_driven / gallons_used;
        cout << "Miles per gallon: " << mpg << endl;
        
        total_mpg += mpg;
        count++;
    }

    if (count > 0) {
        cout << "Overall average miles/gallon: " << (total_mpg / count) << endl;
    }
    return 0;
}

