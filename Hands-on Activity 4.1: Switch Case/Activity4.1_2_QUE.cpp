#include <iostream>
using namespace std;

int main() {
    int physics, chemistry, biology, math, computer;
    float percentage;
    char grade;

    cout << "Enter marks for Physics: ";
    cin >> physics;
    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;
    cout << "Enter marks for Biology: ";
    cin >> biology;
    cout << "Enter marks for Math: ";
    cin >> math;
    cout << "Enter marks for Computer: ";
    cin >> computer;
    
    percentage = (physics + chemistry + biology + math + computer) / 5.0;

	if (percentage >= 90) {
		grade = 'A';
	} else if (percentage >= 80) {
    	grade = 'B';
    } if (percentage >= 70) {
    	grade = 'C';
	} else if (percentage >= 60) {
		grade = 'D';
	} if (percentage >= 50) {
		grade = 'F';
	} else {
		grade = 'E';
	}

    cout << "Average is : " << percentage <<"%"<< endl;
    cout << "Grade Level: " << grade << endl;

    return 0;
}
