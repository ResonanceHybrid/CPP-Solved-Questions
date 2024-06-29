#include <iostream>
#include <cmath>
using namespace std;

class overload{
	public:
		
		// Function to calculate the cube of a int
		int cube(int num) {
			return pow(num,3);
		}
		
		// Function to calculate the cube of a float
		float cube(float num) {
			return pow(num,3);
		}
		
		// Function to calculate the cube of a double
		double cube(double num) {
		    return pow(num,3);
		}
};

int main(){
	overload s;
	
    int integer_number = 5;
    float float_number = 2.5;
    double double_number = 1.75;

    cout<<"Cube of "<<integer_number<< " is: "<<s.cube(integer_number)<<endl;
    cout<<"Cube of "<<float_number<< " is: "<<s.cube(float_number)<<endl;
    cout<<"Cube of "<<double_number<<" is: "<<s.cube(double_number)<<endl;

    return 0;
}

