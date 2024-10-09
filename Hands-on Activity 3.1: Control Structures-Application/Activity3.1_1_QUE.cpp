/*START
  WHILE TRUE DO
    PROMPT user for account number
    IF account number is -1 THEN
      BREAK
    ENDIF
    PROMPT user for beginning balance
    PROMPT user for total charges
    PROMPT user for total credits
    PROMPT user for credit limit

    CALCULATE new balance = beginning balance + total charges - total credits

    IF new balance > credit limit THEN
      PRINT account number
      PRINT credit limit
      PRINT new balance
      PRINT "Credit limit exceeded."
    ENDIF
  ENDWHILE
END*/

#include <iostream>
using namespace std;

int main() {
    int account_number;
    double beginning_balance, total_charges, total_credits, credit_limit, new_balance;

    while (1) {
        cout<<"Enter account number (-1 to end): ";
        cin>>account_number;
        if (account_number == -1) {
            break;
        }

        cout<<"Enter beginning balance: ";
        cin>>beginning_balance;
        cout<<"Enter total charges: ";
        cin>>total_charges;
        cout<<"Enter total credits: ";
        cin>>total_credits;
        cout<<"Enter credit limit: ";
        cin>>credit_limit;

        new_balance = beginning_balance + total_charges - total_credits;

        if (new_balance > credit_limit) {
            cout<<"Account: "<<account_number<<endl;
            cout<<"Credit limit: "<<credit_limit<<endl;
            cout<<"Balance: "<<new_balance<<endl;
            cout<<"Credit limit exceeded."<<endl;
        }
    }
    return 0;
}
