//Program-4: to demonstrate the use of range-based for loop in C++

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;  // Declare vector

    // Add elements using push_back (C++98 compatible)
    numbers.push_back(1);
    numbers.push_back(100);
    numbers.push_back(10);
    numbers.push_back(70);
    numbers.push_back(100);

    cout << "Numbers are:";
    for (size_t i = 0; i < numbers.size(); i++) {
        cout << " " << numbers[i];
    }

    cout << endl;
    return 0;
}

