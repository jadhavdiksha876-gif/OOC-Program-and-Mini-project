#include <iostream>
using namespace std;

class Vehicle {
public:
    Vehicle() { 
        cout << "This is a Vehicle" << endl; 
    }
};

class Car : public Vehicle {
public:
    Car() { 
        cout << "This Vehicle is Car" << endl; 
    }
};

class Bus : public Vehicle {
public:
    Bus() { 
        cout << "This Vehicle is Bus" << endl; 
    }
};

// main function
int main() {
    
    cout << "\nCreating Car object:\n";
    Car obj1;

    cout << "\nCreating Bus object:\n";
    Bus obj2;

    
    return 0;
}

