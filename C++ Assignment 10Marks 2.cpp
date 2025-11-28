#include <iostream>
using namespace std;

// Function prototypes
bool verify_pin(int correct_pin);
void display_menu();
double view_balance(double balance);
double deposit_money(double balance);
double withdraw_money(double balance, double daily_withdrawal_limit);
int reset_pin(int current_pin);

int main() {
    double account_balance = 50000.0;
    const double daily_withdrawal_limit = 20000.0;
    int user_pin = 4321;

    if (!verify_pin(user_pin)) {
        return 0;
    }

    int choice;
    do {
        display_menu();
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                account_balance = view_balance(account_balance);
                break;
            case 2:
                account_balance = deposit_money(account_balance);
                break;
            case 3:
                account_balance = withdraw_money(account_balance, daily_withdrawal_limit);
                break;
            case 4:
                user_pin = reset_pin(user_pin);
                break;

            case 5:
                cout<<"Thank you for using RAZOR's ATM." << endl;
                return 0;

            default:
                cout<<"Invalid choice. Please select a valid menu option." << endl;
        }

        cout<<endl;
    } while (choice != 5);

    return 0;
}

    // SIMPLE verifyPin (ONE while loop, enteredPin inside loop)  
    bool verify_pin(int correct_pin) {
    int attempts = 0; 

    while (attempts < 3) {
        int PIN;
        cout << "Enter your PIN: ";
        cin >> PIN;

        if (PIN == correct_pin) {
            return true;
        }

        attempts++;
        if (attempts < 3) {
            cout << "Incorrect PIN. Try again." << endl;
        }
    }

    cout << "Account Locked. Please contact your bank." << endl;
    return false;
  }

    void display_menu() {
    cout<<"        ATM MENU        \n" 
        <<"1. View Balance \n" 
        <<"2. Deposit Cash \n"
        <<"3. Withdraw Cash \n"
        <<"4. Reset PIN \n"
        <<"5. Exit" << endl;
    }

    double view_balance(double balance) {
    cout<<"Your current balance is: #" <<balance<< endl;
    return balance;
    }

    double deposit_money(double balance) {
    double deposit;
    cout<<"How much do you want to deposit? #";
    cin>>deposit;

    balance = balance + deposit;
    cout<<"Deposit Successful. New Balance: #" <<balance<< endl;
    return balance;
    }

    double withdraw_money(double balance, double daily_withdrawal_limit) {
    double amount;
    cout<<"How much do you want to withdraw? ";
    cin>>amount;

    if (amount > balance) {
        cout<<"Withdrawal failed: Amount exceeds account balance." << endl;
        return balance;
    }

    if (amount > daily_withdrawal_limit) {
        cout<<"Impossible Withdrawal: that amount exceeds daily withdrawal limit." << endl;
        return balance;
    }

    balance = balance - amount;
    cout<<"Please collect your cash." << endl;
    cout<<"Withdrawal Successful. New Balance: #" << balance << endl;
    return balance;
    }

    int reset_pin(int current_pin) {
    int old_pin;
    cout<<"Enter your current PIN: ";
    cin>>old_pin;

    if (old_pin != current_pin) {
        cout<<"Incorrect PIN. Try Again." << endl;
        return current_pin;
    }

    int new_pin;
    cout<< "Enter new PIN (numbers only): ";
    cin>>new_pin;

    cout<<"PIN successfully changed." << endl;
    return new_pin;
}