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
        cout << "Employee number: " << no << endl;
        cout << "Employee name: " << name << endl;
    }

    virtual ~Employee() {} // Virtual destructor
};

class SalariedEmployee : public Employee {
private:
    double monthlySalary;

public:
    void salary() {
        Employee::salary();
        cout << "Enter employee monthly salary: ";
        cin >> monthlySalary;
    }

    void display() {
        cout << endl << "Salaried Employee:" << endl;
        Employee::display();
        cout << "Salary: " << monthlySalary << endl;
    }
};

class HourlyEmployee : public Employee {
private:
    double hours;
    double rate;

public:
    void salary() {
        Employee::salary();
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter hourly rate: ";
        cin >> rate;
    }

    void display() {
        cout << endl << "Hourly Employee:" << endl;
        Employee::display();
        cout << "Hours: " << hours << endl;
        cout << "Hourly rate: " << rate << endl;
        cout << "Salary: " << (rate * hours) << endl;
    }
};

class CommissionedEmployee : public Employee {
private:
    double baseSalary;
    int overtime;

public:
    void salary() {
        Employee::salary();
        cout << "Enter base salary: ";
        cin >> baseSalary;
        cout << "Enter overtime hours: ";
        cin >> overtime;
    }

    void display() {
        cout << endl << "Commissioned Employee:" << endl;
        Employee::display();
        cout << "Base Salary: " << baseSalary << endl;
        cout << "Overtime Hours: " << overtime << endl;
        cout << "Total Salary: " << (baseSalary + (overtime * 15)) << endl;
    }
};

int main() {
    Employee* employees[3];

    SalariedEmployee se;
    HourlyEmployee he;
    CommissionedEmployee ce;

    employees[0] = &se;
    employees[1] = &he;
    employees[2] = &ce;

    for (int i = 0; i < 3; i++) {
        employees[i]->salary();
    }

    for (int i = 0; i < 3; i++) {
        employees[i]->display();
    }

    return 0;
}

