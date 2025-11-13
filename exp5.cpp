#include <iostream>
using namespace std;

// Function prototypes
int area(int);          // Square
int area(int, int);     // Rectangle
float area(float);      // Circle
float area(float, float); // Triangle

int main() {
    
    
    int s, l, b;
    float r, bs, ht;

    cout << "Enter side of a square: ";
    cin >> s;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter base and height of triangle: ";
    cin >> bs >> ht;

    cout << "\nCalculated Areas:\n";
    cout << "Area of Square: " << area(s) << endl;
    cout << "Area of Rectangle: " << area(l, b) << endl;
    cout << "Area of Circle: " << area(r) << endl;
    cout << "Area of Triangle: " << area(bs, ht) << endl;

   

    return 0;
}

// Function definitions
int area(int s) {
    return s * s;
}

int area(int l, int b) {
    return l * b;
}

float area(float r) {
    return 3.14 * r * r;
}

float area(float bs, float ht) {
    return (bs * ht) / 2;
}

