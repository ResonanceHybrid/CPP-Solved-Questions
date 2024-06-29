#include <iostream>
#include <string>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;
    int matchesPlayed;

public:
    void readData() {
        cout << "Enter name: ";
        cin.ignore(); // Clear newline character from previous input
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter number of matches played: ";
        cin >> matchesPlayed;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
    }
};

class Bowler : public Cricketer {
private:
    int no_of_wickets;

public:
    void readData() {
        Cricketer::readData();
        cout << "Enter number of wickets: ";
        cin >> no_of_wickets;
    }

    void displayData() {
        Cricketer::displayData();
        cout << "Number of wickets: " << no_of_wickets << endl;
    }
};

class Batsman : public Cricketer {
private:
    int no_of_runs;
    int centuries;

public:
    void readData() {
        Cricketer::readData();
        cout << "Enter number of runs: ";
        cin >> no_of_runs;
        cout << "Enter number of centuries: ";
        cin >> centuries;
    }

    void displayData() {
        Cricketer::displayData();
        cout << "Number of runs: " << no_of_runs << endl;
        cout << "Number of centuries: " << centuries << endl;
    }
};

int main() {
    Bowler bowler;
    Batsman batsman;

    cout << "Enter data for Bowler:" << endl;
    bowler.readData();

    cout << "Enter data for Batsman:" << endl;
    batsman.readData();

    cout << "\nBowler's Data:" << endl;
    bowler.displayData();

    cout << "\nBatsman's Data:" << endl;
    batsman.displayData();

    return 0;
}
