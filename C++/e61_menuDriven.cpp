#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
    string accountHolderName;
    long accountNumber;
    string accountType;
    double balance;
    static int numOfTransactions;

public:
    Bank() {
        accountHolderName = "";
        accountNumber = 0;
        accountType = "";
        balance = 0.0;
    }

    void ReadInputs() {
        cout << "Enter Account Holder's Name: ";
        cin.ignore();
        getline(cin, accountHolderName);

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Type: ";
        cin.ignore();
        getline(cin, accountType);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void Deposit(double amount) {
        balance += amount;
        numOfTransactions++;
    }

    void Withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            numOfTransactions++;
            cout << "Withdrawal successful. Current balance: " << balance << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    static void DisplayNumOfTransactions() {
        cout << "Total number of transactions: " << numOfTransactions << endl;
    }
};

int Bank::numOfTransactions = 0;

int main() {
    Bank account;
    int choice;
    double amount;

    cout << "Bank Account Management System" << endl;

    do {
        cout << "\nMenu:\n";
        cout << "1. Read Inputs\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display Number of Transactions\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.ReadInputs();
                break;
            case 2:
                cout << "Enter the deposit amount: ";
                cin >> amount;
                account.Deposit(amount);
                break;
            case 3:
                cout << "Enter the withdrawal amount: ";
                cin >> amount;
                account.Withdraw(amount);
                break;
            case 4:
                Bank::DisplayNumOfTransactions();
                break;
            case 5:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
