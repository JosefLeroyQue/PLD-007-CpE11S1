/*START
  PROMPT user for weight
  IF weight <= 300 THEN
    cost = 5.00
  ELSE IF weight <= 1000 THEN
    additional_weight = weight - 300
    cost = 5.00 + 2.00 * CEILING(additional_weight / 100.0)
  ELSE
    PRINT "Weight exceeds limit."
    EXIT program
  ENDIF

  PRINT cost
END*/

#include <iostream>
using namespace std;

int main() {
    int weight;
    double cost = 0;

    cout << "Enter weight of parcel (g): ";
    cin >> weight;

    if (weight <= 300) {
        cost = 5.00;
    } else if (weight <= 1000) {
        cost = 5.00 + 2.00 * ((weight - 300) / 100.0);
    } else {
        cout << "Weight exceeds limit." << endl;
        return 1;
    }

    cout << "Cost of sending parcel: " << cost << endl;
    return 0;
}
