#include <iostream>
using namespace std;

int main() {
    float age;
    float fare;
    float studentPayment;
    float seniorPayment;

    cout << "Please enter your age: ";
    cin >> age;

    if (age <= 18) {
        cout << "You have received an 8% fare discount!" << endl;
        cout << "Amount you need to pay: P";
        cin >> fare;
        studentPayment = fare * 0.92;

        cout << "Discounted fare price: P" << studentPayment << endl;
    } 
    else if (age >= 60) {
        cout << "You have received a 10% fare discount!" << endl;
        cout << "Amount you need to pay: P";
        cin >> fare;
        seniorPayment = fare * 0.90;

        cout << "Discounted fare price: P" << seniorPayment << endl;
    } 
    else {
        cout << "Amount you need to pay: P";
        cin >> fare;
        cout << "Fare price: P" << fare << endl; 
    }

    return 0;
}
