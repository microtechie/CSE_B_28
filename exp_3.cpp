#include <iostream>
using namespace std;


class SavingAccount {
private:
    string accountHolderName;  //data members
    int accountNumber;
    double balance;
    double interestRate;

public:
	// can create as many as const in a class 
	// Default constructor
	SavingAccount()
    {
    	cout<<"Enter customer details: ";
    	cin>>accountHolderName;
    	cin>>accountNumber;
    	cin>>balance;
    	cin>>interestRate;
	}
	
	//Parameterized constructor
    SavingAccount(string name, int accNumber, double initialBalance, double rate) //spl func- constructor
	{
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        interestRate = rate;


    }

    void deposit(double amount) //normal member func
	{
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ₹" << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ₹" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Applied: ₹" << interest << endl;
    }

    void display() {
        cout << "\n[Savings Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ₹" << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


class CheckingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    CheckingAccount(string name, int accNumber, double initialBalance, double fee) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ₹" << amount << endl;
        }
    }

    void withdraw(double amount) {
        double total = amount + transactionFee;
        if (amount > 0 && total <= balance) {
            balance -= total;
            cout << "Withdrawn: ₹" << amount << " (Fee: ₹" << transactionFee << " applied)" << endl;
        } else {
            cout << "Insufficient balance for withdrawal + fee" << endl;
        }
    }

    void display() {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ₹" << balance << endl;
        cout << "Transaction Fee: ₹" << transactionFee << endl;
    }
};


int main()
 {
    // s1 - object - variable of class
    SavingAccount s1("Rahul", 101, 5000, 5.0); // it calls parameterized const
    s1.display();
    s1.deposit(1000);
    s1.withdraw(2000);
    s1.applyInterest();
    s1.display();
    // in a object ..only one time we can call const

    
    CheckingAccount c1("Amit", 201, 10000, 50);
    c1.display();
    c1.deposit(2000);
    c1.withdraw(3000);
    c1.display();

    SavingAccount s2; // it calls default const
    s2.display();
    return 0;
}
