#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    bool operator==(const MyClass& other) const {
        return this->value == other.value;
    }

    bool operator!=(const MyClass& other) const {
        return !(*this == other); 
    }

    bool operator<(const MyClass& other) const {
        return this->value < other.value;
    }

    bool operator>(const MyClass& other) const {
        return this->value > other.value;
    }

    bool operator<=(const MyClass& other) const {
        return !(*this > other); 
    }

    bool operator>=(const MyClass& other) const {
        return !(*this < other); 
    }
};

int main() {
    
    MyClass obj1(20);
    MyClass obj2(20);
    MyClass obj3(30);

    if (obj1 == obj2) {
        cout << "obj1 is equal to obj2" << endl;
    }

    if (obj1 != obj3) {
        cout << "obj1 is not equal to obj3" << endl;
    }

    if (obj1 < obj3) {
        cout << "obj1 is less than obj3" << endl;
    }

    if (obj3 > obj1) {
        cout << "obj3 is greater than obj1" << endl;
    }
    
    if (obj1 <= obj2) {
        cout << "obj1 is less than or equal to obj2" << endl;
    }
    
    if (obj3 >= obj1) {
        cout << "obj3 is greater than or equal to obj1" << endl;
    }

    return 0;
}
