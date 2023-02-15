#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define the two column vectors as arrays
    double k = 0;
    double matrix1[4] = {2, 4, 1, k};// k is initially 0
    double matrix2[4] = {k, 2, 4, 5};	

    // Calculate the dot product of the two vectors
    double dot_product = 0;
    for (int i = 0; i < 4; i++) {
        dot_product += matrix1[i] * matrix2[i];
    }

    // Calculate the coefficients of the system of linear equations
    double a = matrix1[0] * matrix1[0] + matrix1[1] * matrix1[1] + matrix1[2] * matrix1[2] + matrix1[3] * matrix1[3];
    double b = -2 * (matrix1[0] * matrix2[0] + matrix1[1] * matrix2[1] + matrix1[2] * matrix2[2] + matrix1[3] * matrix2[3]);
    double c = matrix2[0] * matrix2[0] + matrix2[1] * matrix2[1] + matrix2[2] * matrix2[2] + matrix2[3] * matrix2[3];

    // Calculate the discriminant of the quadratic equation
    double discriminant = b * b - 4 * a * c;

    // Check if the vectors are orthogonal
    if (dot_product == 0) {
        k = 0;
    } else if (a == 0) {
        cout << "The vectors are linearly dependent" << endl;
        return 0;
    } else if (discriminant < 0) {
        cout << "The vectors are not orthogonal and cannot be made orthogonal by changing the value of k" << endl;
        return 0;
    } else {
        double k1 = (-b + sqrt(discriminant)) / (2 * a);
        double k2 = (-b - sqrt(discriminant)) / (2 * a);

        if (k1 > 0 && k2 > 0) {
            k = min(k1, k2);
        } else {
            k = max(k1, k2);
        }
    }

    // Print the result
    cout << "The unknown value is k = " << k << endl;

     // the value of k that makes the vectors orthogonal
    if (dot_product == 0) {
        cout << "The transpose of [2, 4, 1, k] and the transpose of [k, 2, 4, 5] are orthogonal for k = " << k << endl;
    }
    else {
        cout << "The transpose of [2, 4, 1, k] and the transpose of [k, 2, 4, 5] are not orthogonal" << endl;
    }

}


