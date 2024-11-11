#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    // Data Members
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    // Member Function to assign initial values
    void initializeAccount(const string& name, int accNum, const string& type, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
        cout << "Account initialized successfully.\n";
    }

    // Member Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Member Function to withdraw an amount after checking
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal not possible.\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully. Remaining Balance: " << balance << endl;
        }
    }

    // Function to display account information
    void displayAccountInfo() const {
        cout << "\nAccount Information:\n";
        cout << "Name of Depositor: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Type of Account: " << accountType << endl;
        cout << "Balance Amount: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    string name;
    int accNum;
    string type;
    double initialBalance;

    // Get initial details from the user
    cout << "Enter name of depositor: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNum;
    cout << "Enter type of account: ";
    cin >> type;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Initialize the account
    account.initializeAccount(name, accNum, type, initialBalance);

    int choice;
    double amount;

    do {
        // Display menu
        cout << "\nBank Account Operations:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account Information\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
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
                account.displayAccountInfo();
                break;
            case 4:
                cout << "Exiting program. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please select again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
