#include <iostream>
#include <string>
using namespace std;

class Lecturer {
protected:
    int ID;
    string name;

public:
    void readdata() {
        cout << "Enter ID: ";
        cin >> ID;
        cout << "Enter name: ";
        cin.ignore(); // Clear newline character from previous input
        getline(cin, name);
    }

    void printdata() {
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;
    }
};

class PartTime : public Lecturer {
private:
    float payperhr;

public:
    void readdata() {
        Lecturer::readdata();
        cout << "Enter pay per hour: ";
        cin >> payperhr;
    }

    void printdata() {
        Lecturer::printdata();
        cout << "Pay per hour: " << payperhr << endl;
    }
};

class FullTime : public Lecturer {
private:
    float paypermonth;

public:
    void readdata() {
        Lecturer::readdata();
        cout << "Enter pay per month: ";
        cin >> paypermonth;
    }

    void printdata() {
        Lecturer::printdata();
        cout << "Pay per month: " << paypermonth << endl;
    }
};

int main() {
    PartTime partTimeLecturer;
    FullTime fullTimeLecturer;

    cout << "Enter data for Part-Time Lecturer:" << endl;
    partTimeLecturer.readdata();

    cout << "Enter data for Full-Time Lecturer:" << endl;
    fullTimeLecturer.readdata();

    cout << "\nPart-Time Lecturer's Data:" << endl;
    partTimeLecturer.printdata();

    cout << "\nFull-Time Lecturer's Data:" << endl;
    fullTimeLecturer.printdata();

    return 0;
}
