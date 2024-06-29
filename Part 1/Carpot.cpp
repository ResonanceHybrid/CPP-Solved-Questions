#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& n) : name(n) {
        cout << "Person constructor" << endl;
    }

    virtual void displayInfo() const {
        cout << "Person Name: " << name << endl;
    }

    virtual ~Person() {
        cout << "Person destructor" << endl;
    }
};

class Employee : virtual public Person {
protected:
    int employeeID;

public:
    Employee(const string& n, int id) : Person(n), employeeID(id) {
        cout << "Employee constructor" << endl;
    }

    virtual void displayInfo() const override {
        Person::displayInfo();
        cout << "Employee ID: " << employeeID << endl;
    }

    virtual ~Employee() {
        cout << "Employee destructor" << endl;
    }
};

class Student : virtual public Person {
protected:
    int studentID;

public:
    Student(const string& n, int id) : Person(n), studentID(id) {
        cout << "Student constructor" << endl;
    }

    virtual void displayInfo() const override {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
    }

    virtual ~Student() {
        cout << "Student destructor" << endl;
    }
};

class Manager : public Employee, public Student {
protected:
    int managerID;

public:
    Manager(const string& n, int empID, int stuID, int mgrID)
        : Person(n), Employee(n, empID), Student(n, stuID), managerID(mgrID) {
        cout << "Manager constructor" << endl;
    }

    void displayInfo() const override {
        Employee::displayInfo();
        Student::displayInfo();
        cout << "Manager ID: " << managerID << endl;
    }

    ~Manager() {
        cout << "Manager destructor" << endl;
    }
};

int main() {
    Manager manager("John", 101, 201, 301);
    cout << "\nDisplaying Information:" << endl;
    manager.displayInfo();

    return 0;
}

