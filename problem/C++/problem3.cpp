#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define the two column vectors as arrays
    double k = 0;
    double matrix1[4] = {8,4,1,k};// k is initially 0
    double matrix2[4] = {2,-4,k,k};	

    // Calculate the dot product of the two vectors
    double dot_product = matrix1[0] * matrix2[0] + matrix1[1] * matrix2[1] + matrix1[2] * matrix2[2] + matrix1[3] * matrix2[3];

    double a = matrix1[0];
    double b = matrix1[1];
    double c = matrix1[2];
    double d = matrix1[3];
    double e = -dot_product;

    // Solve the system of linear equations using Cramer's rule
    double detA = a * d - b * c;
    // Compute the determinant of the matrix obtained by replacing the first column of the coefficient matrix with the constants
    double detX1 = matrix1[3] * b - matrix2[3] * d;
    // Compute the determinant of the matrix obtained by replacing the second column of the coefficient matrix with the constants
    double detX2 = a * matrix2[3] - c * matrix1[3];
    // Compute the solutions for the variables
    double x1 = detX1 / detA;
    double x2 = detX2 / detA;

    // Print the result
    cout << "The unknown values are k1 = " << x1 << " and k2 = " << x2 << endl;

    // the value of k that makes the vectors orthogonal
    if (dot_product == 0) {
        cout << "The transpose of [8, 4, 1, k] and the transpose of [2, -4, k, k] are orthogonal for k = " << x1 << " and " << x2 << endl;
    }
    else {
        cout << "The transpose of [8, 4, 1, k] and the transpose of [2, -4, k, k] are not orthogonal" << endl;
    }

    return 0;
}


