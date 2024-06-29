#include <iostream>
using namespace std;

class length {
    float meter, centimeter;
public:
    length() {
        meter = 0.0;
        centimeter = 0.0;
    }
    
    length(float m1, float c1) {
        meter = m1;
        centimeter = c1;
    }
    
    void display() {
        cout << "Sum is: " << meter << " meters and " << centimeter << " centimeters.";
    }
    
    length operator +(length L) {
        length temp;
        temp.meter = meter + L.meter;
        temp.centimeter = centimeter + L.centimeter;
        
        if (temp.centimeter >= 100) {
            float extraMeters = temp.centimeter / 100;
            temp.meter += extraMeters;
            temp.centimeter = temp.centimeter % 100;
        }
        
        return temp;
    }
};

int main() {
    length l1(1, 200), l2(1, 100), l3;
    l3 = l1 + l2;
    l3.display();
    return 0;
}

