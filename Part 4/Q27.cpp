#include <iostream>
#include <cstring> // Include this header for using strcpy and strcat
using namespace std;

class stringcat {
    char a[25];

public:
    void stringinput() {
        cout << "Enter string: ";
        cin >> a;
    }

    void display() {
        cout << a;
    }

    // The correct return type for the concatenation operator should be stringcat
    stringcat operator+(stringcat B) {
        stringcat C;
        //strcpy(C.a, a);
        strcat(a, B.a);
        return C;
    }
};

int main() {
    stringcat A, B, C;

    A.stringinput();
    B.stringinput();

    C = A + B;

    cout << "Concatenated string: ";
    C.display();

    return 0;
}

