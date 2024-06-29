#include <iostream>
#include <string.h>
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

    friend stringcat operator+(stringcat, stringcat);
};

stringcat operator+(stringcat A, stringcat B) {
    stringcat C;
    strcpy(C.a, A.a);
    strcat(C.a, B.a);
    return C;
}

int main() {
    stringcat A, B, C;
    
    A.stringinput();
    B.stringinput();
    
    C = A + B;
    
    cout << "Concatenated string: ";
    C.display();
    
    return 0;
}
