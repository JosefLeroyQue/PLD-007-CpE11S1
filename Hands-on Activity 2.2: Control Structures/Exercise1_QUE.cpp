#include <iostream>

using namespace std;

int main() {
    int total = 0;      
    int grade;          
    int gradeCounter = 1; 
    const int numStudents = 10; 

    while (gradeCounter <= numStudents) {
        cout << "Enter grade for student " << gradeCounter << " (0-100): ";
        cin >> grade;

        while (grade < 0 || grade > 100) {
            cout << "Invalid grade. Please enter a grade between 0 and 100: ";
            cin >> grade;
        }
        total += grade;
        gradeCounter++;
    }
    float classAverage =(total) / numStudents;

    cout << "Class average is: " << classAverage << endl;

    return 0; 
}
