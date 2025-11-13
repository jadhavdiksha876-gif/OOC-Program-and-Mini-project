#include <iostream>
#include <cmath>

const double PI = 3.14159;

// Abstract base class
class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    virtual ~Shape() {} // virtual destructor for base class
};

// Circle class
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double rad) : radius(rad) {}

    double calculateArea() const {
        return PI * std::pow(radius, 2);
    }

    double calculatePerimeter() const {
        return 2 * PI * radius;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) : length(len), width(wid) {}

    double calculateArea() const {
        return length * width;
    }

    double calculatePerimeter() const {
        return 2 * (length + width);
    }
};

// Triangle class
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;
public:
    Triangle(double s1, double s2, double s3)
        : side1(s1), side2(s2), side3(s3) {}

    double calculateArea() const {
        double s = (side1 + side2 + side3) / 2;
        return std::sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() const {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(7.0);
    Rectangle rectangle(4.2, 8.0);
}

