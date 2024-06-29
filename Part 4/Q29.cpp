#include <iostream>

using namespace std;

template <typename T>
class ArithmeticOperations {
private:
    T value;

public:
    ArithmeticOperations(T val) : value(val) {}

    T getValue() {
        return value;
    }

    void setValue(T val) {
        value = val;
    }
};

// Function to add two objects
template <typename T>
ArithmeticOperations<T> add(ArithmeticOperations<T> &obj1, ArithmeticOperations<T> &obj2) {
    return ArithmeticOperations<T>(obj1.getValue() + obj2.getValue());
}

// Function to subtract two objects
template <typename T>
ArithmeticOperations<T> subtract(ArithmeticOperations<T> &obj1, ArithmeticOperations<T> &obj2) {
    return ArithmeticOperations<T>(obj1.getValue() - obj2.getValue());
}

// Function to multiply two objects
template <typename T>
ArithmeticOperations<T> multiply(ArithmeticOperations<T> &obj1, ArithmeticOperations<T> &obj2) {
    return ArithmeticOperations<T>(obj1.getValue() * obj2.getValue());
}

// Function to divide two objects
template <typename T>
ArithmeticOperations<T> divide(ArithmeticOperations<T> &obj1, ArithmeticOperations<T> &obj2) {
    if (obj2.getValue() == 0) {
        cerr << "Error: Division by zero!" << endl;
        exit(1);
    }
    return ArithmeticOperations<T>(obj1.getValue() / obj2.getValue());
}

int main() {
    // Create objects using different data types
    ArithmeticOperations<int> intObj1(10);
    ArithmeticOperations<int> intObj2(5);

    ArithmeticOperations<double> doubleObj1(7.5);
    ArithmeticOperations<double> doubleObj2(2.5);

    // Perform operations and display results
    cout << "Integer addition: " << add(intObj1, intObj2).getValue() << endl;
    cout << "Double subtraction: " << subtract(doubleObj1, doubleObj2).getValue() << endl;
    cout << "Integer multiplication: " << multiply(intObj1, intObj2).getValue() << endl;
    cout << "Double division: " << divide(doubleObj1, doubleObj2).getValue() << endl;

    return 0;
}
