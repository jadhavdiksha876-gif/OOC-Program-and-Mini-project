#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle(): length(1.0), width(1.0) {}

    // Parameterized constructor
    Rectangle(double len, double wid): length(len), width(wid) {}

    // Destructor
    ~Rectangle() {
        cout << "Rectangle object destroyed." << endl;
    }

    // Getters
    double getLength() const { return length; }
    double getWidth() const { return width; }

    // Setters
    void setLength(double len) { length = len; }
    void setWidth(double wid) { width = wid; }

    // Calculate area
    double calculateArea() const { return length * width; }

    // Calculate perimeter
    double calculatePerimeter() const { return 2 * (length + width); }
};

int main() {

    Rectangle rect(4.0, 40.0);

    cout << "Rectangle properties:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    
    return 0;
}

