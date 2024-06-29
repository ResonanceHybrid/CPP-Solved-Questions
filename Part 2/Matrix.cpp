#include <iostream>

using namespace std;

class Matrix3x3 {
private:
    int data[3][3];

public:
    Matrix3x3() {
        // Initialize matrix with zeros
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                data[i][j] = 0;
    }

    Matrix3x3(int arr[3][3]) {
        // Initialize matrix with provided array
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                data[i][j] = arr[i][j];
    }

    void display() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j)
                cout << data[i][j] << "\t";
            cout << endl;
        }
    }

    Matrix3x3 operator*(const Matrix3x3& other) const {
        Matrix3x3 result;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < 3; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }
};

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    Matrix3x3 matrix1(arr1);
    Matrix3x3 matrix2(arr2);

    cout << "Matrix 1:" << endl;
    matrix1.display();
    cout << endl;

    cout << "Matrix 2:" << endl;
    matrix2.display();
    cout << endl;

    Matrix3x3 result = matrix1 * matrix2;

    cout << "Matrix 1 * Matrix 2:" << endl;
    result.display();

    return 0;
}
