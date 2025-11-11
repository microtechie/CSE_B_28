#include <iostream>
#include <string> // Added for std::string usage

// Using std namespace as in the original file
using namespace std;

// Saving Account Class
class SavingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:
    // Constructor to initialize the account details
    SavingAccount(string name, int accNumber, double initialBalance, double rate) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance; // Corrected assignment
        interestRate = rate;      // Corrected assignment
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount; // Corrected logic
            cout << "Deposited: " << amount << endl;
        }
    }

    // Function to withdraw an amount
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount; // Corrected logic
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Function to apply interest to the balance
    void applyInterest() {
        // This logic was outside the function body in the original document
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Applied: " << interest << endl;
    }

    // Function to display account details
    void display() {
        cout << "\n[Savings Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

// Checking Account Class
class CheckingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee; // Corrected ':' to ';'

public:
    // Constructor to initialize the account details
    CheckingAccount(string name, int accNumber, double initialBalance, double fee) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance; // Corrected assignment
        transactionFee = fee;
    }

    // Function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount; // Corrected logic
            cout << "Deposited: " << amount << endl;
        }
    }

    // Function to withdraw an amount, including a fee
    void withdraw(double amount) {
        double total = amount + transactionFee; // Corrected variable declaration
        if (total <= balance) {
            balance -= total; // Corrected logic
            cout << "Withdrawn: " << amount << " (" << transactionFee << " fee applied)" << endl;
        } else {
            cout << "Insufficient balance for withdrawal + fee!" << endl;
        }
    }

    // Function to display account details
    void display() { // Corrected function signature
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction Fee: " << transactionFee << endl;
    }
}; // Added missing closing brace and semicolon for the class

// Main Function
int main() { 
    cout<<"Name: Madhumita Dhairyashil Salokhe"<<endl;
		cout<<"Roll No:28 SY S2"<<endl;  
        // Corrected opening brace
    // Create instances of SavingAccount and CheckingAccount
    SavingAccount savings("Alice", 1001, 5000.0, 3.0);
    CheckingAccount checking("Bob", 1002, 3000.0, 20.0); // Corrected class name typo

    // Operations on Savings Account
    cout << "--- Savings Account Transactions ---" << endl;
    savings.display();
    savings.deposit(1000);
    savings.withdraw(2000);
    savings.applyInterest();
    savings.display();

    cout << "\n--- Checking Account Transactions ---" << endl;
    // Operations on Checking Account
    checking.display();
    checking.deposit(1500);
    checking.withdraw(1000);
    checking.display();

    return 0;
} // Added missing closing brace for main
