
#include <iostream>
#include <iomanip>
using namespace std;

class Student {
protected:
    int roll;
    char name[25];
public:
    void getdata() {
        cout << "\nEnter Roll No.: ";
        cin >> roll;
        cout << "Enter Student Name: ";
        cin >> name;
    }
    void putdata() {
        cout << "\n********** Student Marklist **********";
        cout << "\nRoll No.: " << roll;
        cout << "\nStudent Name: " << name << endl;
    }
};

class StudentExam : public Student {
protected:
    int sub1, sub2, sub3, sub4, sub5, sub6;
public:
    void accept_data() {
        getdata();
        cout << "Enter Marks for Subject 1: "; cin >> sub1;
        cout << "Enter Marks for Subject 2: "; cin >> sub2;
        cout << "Enter Marks for Subject 3: "; cin >> sub3;
        cout << "Enter Marks for Subject 4: "; cin >> sub4;
        cout << "Enter Marks for Subject 5: "; cin >> sub5;
        cout << "Enter Marks for Subject 6: "; cin >> sub6;
    }
    void display_data() {
        putdata();
        cout << "Marks of Subject 1: " << sub1 << endl;
        cout << "Marks of Subject 2: " << sub2 << endl;
        cout << "Marks of Subject 3: " << sub3 << endl;
        cout << "Marks of Subject 4: " << sub4 << endl;
        cout << "Marks of Subject 5: " << sub5 << endl;
        cout << "Marks of Subject 6: " << sub6 << endl;
    }
};

class StudentResult : public StudentExam {
private:
    float per;
public:
    void calculate() {
        per = (sub1 + sub2 + sub3 + sub4 + sub5 + sub6) / 6.0;
        cout << fixed << setprecision(2);
        cout << "Total Percentage: " << per << "%" << endl;
    }
};

int main() {


    StudentResult student;
    student.accept_data();
    cout << "\n-------------------------------------------------------------\n";
    student.display_data();
    student.calculate();
    
    return 0;
}

