#include <iostream>
using namespace std;

int main() {
    int counter = 0; 
    int grade;       
    int total = 0;  
    float average;   

    cout << "Enter a grade (-1 to end): ";
    cin >> grade;

    while (grade != -1) {
        total += grade;
        counter++;

        cout << "Enter a grade (-1 to end): ";
        cin >> grade;
    }
    if (counter != 0) {
        average = (total) / counter;
        cout << "Average grade is: " << average << endl;
    } else {
        cout << "No grades were entered." << endl;
    }

    return 0;
}
