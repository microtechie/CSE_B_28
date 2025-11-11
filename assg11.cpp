#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int no;
    string name;

public:
    virtual void salary() {
        cout << "Enter employee number: ";
        cin >> no;
        cout << "Enter employee name: ";
        cin >> name;
    }

    virtual void display() {
        cout << "Employee Number: " << no << endl;
        cout << "Employee Name: " << name << endl;
    }
};

// Derived class for salaried employee
class SalariedEmployee : public Employee {
private:
    double monthlySalary;

public:
    void salary() override {
        Employee::salary();
        cout << "Enter employee monthly salary: ";
        cin >> monthlySalary;
    }

    void display() override {
        cout << "\nSalaried Employee:\n";
        Employee::display();
        cout << "Salary: " << monthlySalary << endl;
    }
};

// Derived class for hourly employee
class HourlyEmployee : public Employee {
private:
    double hours;
    double rate;

public:
    void salary() override {
        Employee::salary();
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }

    void display() override {
        cout << "\nHourly Employee:\n";
        Employee::display();
        cout << "Hours: " << hours << endl;
        cout << "Hourly Rate: " << rate << endl;
        cout << "Salary: " << (rate * hours) << endl;
    }
};

// Derived class for commissioned employee
class CommissionedEmployee : public Employee {
private:
    double salaryAmount;
    int overtime;

public:
    void salary() override {
        Employee::salary();
        cout << "Enter salary: ";
        cin >> salaryAmount;
        cout << "Enter overtime: ";
        cin >> overtime;
    }

    void display() override {
        cout << "\nCommissioned Employee:\n";
        Employee::display();
        cout << "Salary: " << salaryAmount << endl;
        cout << "Overtime: " << overtime << endl;
        cout << "Total Salary: " << (salaryAmount + (overtime * 15)) << endl;
    }
};

// Main function
int main() {
    cout<<"Name: Madhumita Dhairyashil Salokhe"<<endl;
		cout<<"Roll No:28 SY S2"<<endl; 
        
    Employee* employees[3];
    SalariedEmployee se;
    HourlyEmployee he;
    CommissionedEmployee ce;

    employees[0] = &se;
    employees[1] = &he;
    employees[2] = &ce;

    for (int i = 0; i < 3; i++) {
        employees[i]->salary();
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        employees[i]->display();
        cout << endl;
    }

    system("pause");
    return 0;
}

