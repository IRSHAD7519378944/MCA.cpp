#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    long accountNumber;
    string accountType;
    double balance;

public:
    // Assign initial values
    void setInitialValues(string n, long accNo, string type, double bal) {
        name = n;
        accountNumber = accNo;
        accountType = type;
        balance = bal;
    }

    // Deposit Amount
    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
        cout << "Updated Balance: " << balance << endl;
    }

    // Withdraw Amount
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance! Withdrawal Failed." << endl;
        } else {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!" << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }

    // Display account details
    void display() {
        cout << "\n----- Account Details -----" << endl;
        cout << "Depositor Name   : " << name << endl;
        cout << "Account Number   : " << accountNumber << endl;
        cout << "Account Type     : " << accountType << endl;
        cout << "Current Balance  : " << balance << endl;
    }
};

int main() {
    BankAccount account;
    string name, type;
    long accNo;
    double balance, amount;
    int choice;

    // User input for initial details
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Account Type (Saving/Current): ";
    cin >> type;
    cout << "Enter Initial Balance: ";
    cin >> balance;

    account.setInitialValues(name, accNo, type, balance);

    // Menu-driven actions
    do {
        cout << "\n----- Bank Menu -----" << endl;
        cout << "1. Deposit Amount\n2. Withdraw Amount\n3. Display Account Details\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank you for using the bank system!" << endl;
                break;

            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

