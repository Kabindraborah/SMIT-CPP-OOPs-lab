#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
    string accountHolderName;
    long long accountNumber;
    string accountType;
    double balance;
    static int numTransactions;

public:
    // Constructor to initialize data members
    Bank(string name, long long accNum, string type, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNum;
        accountType = type;
        balance = initialBalance;
        numTransactions = 0;  // Initialize the transaction count to zero
    }

    // Member function to read inputs
    void readInputs() {
        cout << "Enter account holder's name: ";
        cin >> accountHolderName;
        cout << "Enter account number: ";
        cin >> accountNumber;
        cout << "Enter account type: ";
        cin >> accountType;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        balance += amount;
        numTransactions++;
        cout << "Deposited " << amount << " successfully." << endl;
    }

    // Member function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            numTransactions++;
            cout << "Withdrawn " << amount << " successfully." << endl;
        } else {
            cout << "Insufficient balance for withdrawal." << endl;
        }
    }

    // Static member function to display the number of transactions
    static void displayNumTransactions() {
        cout << "Total number of transactions: " << numTransactions << endl;
    }
};

int Bank::numTransactions = 0;  // Initialize the static member outside the class

int main() {
    // Create an instance of the Bank class
    Bank account("", 0, "", 0.0); // Initialize with default values

    // Read inputs
    account.readInputs();

    // Deposit and withdraw
    double depositAmount, withdrawAmount;
    cout << "Enter the amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    cout << "Enter the amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    // Display the number of transactions
    Bank::displayNumTransactions();

    return 0;
}