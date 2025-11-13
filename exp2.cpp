

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float ima;

public:
    // Constructor with default arguments
    Complex(float r = 0, float i = 0) {
        real = r;
        ima = i;
    }

    // Function to input complex number
    void input() {
        cout << "Enter real value: ";
        cin >> real;
        cout << "Enter imaginary value: ";
        cin >> ima;
    }

    // Function to add two complex numbers
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.ima = ima + c.ima;
        return temp;
    }

    // Function to subtract two complex numbers
    Complex subtract(Complex c) {
        Complex temp;
        temp.real = real - c.real;
        temp.ima = ima - c.ima;
        return temp;
    }

    // Function to display complex number
    void display() {
        if (ima >= 0)
            cout << real << " + " << ima << "i" << endl;
        else
            cout << real << " - " << -ima << "i" << endl;
    }
};

// Main function
int main() {
    
   
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);

    cout << "\nAfter Addition: ";
    sum.display();

    cout << "After Subtraction: ";
    diff.display();

    return 0;
}


