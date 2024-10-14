#include <iostream>
using namespace std;

int main() {
    int physics, chemistry, biology, math, computer;
    int percentage;
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

    switch(percentage){
        case 90 ... 100:
        	grade = 'A';
		case 80 ... 89:
			grade = 'B';
		case 70 ... 79:
			grade = 'C';
		case 60 ... 69 :
			grade = 'D';
		case 50 ... 59 :
			grade = 'F';
		case 0 ... 49:
			grade = 'E';
		}

    cout << "Average is : " << percentage << "%" << endl;
    cout << "Grade Level: " << grade << endl;

    return 0;
}
