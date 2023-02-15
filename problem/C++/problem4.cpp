#include <iostream>

using namespace std;

int main() {
    double A[3][4] = {
        {1, 1, 2, 1},
        {1, 2, -1, -2},
        {1, 3, 1, 5}
    };

    int n = 3, m = 4;

    // forward elimination
    for (int i = 0; i < n; i++) {
        double pivot = A[i][i];
        for (int j = i + 1; j < m; j++) {
            A[i][j] /= pivot;
        }
        A[i][i] /= pivot;
        for (int k = i + 1; k < n; k++) {
            double factor = A[k][i];
            for (int j = i + 1; j < m; j++) {
                A[k][j] -= factor * A[i][j];
            }
            A[k][i] = 0;
        }
    }

    // backward substitution
    double x[3];
    x[2] = A[2][3];
    x[1] = A[1][3] - A[1][2]*x[2];
    x[0] = A[0][3] - A[0][1]*x[1] - A[0][2]*x[2];

    // output result
    cout << "The vector v = [1, -2, 5] can be written as a linear combination of the vectors u1 = [1, 1, 1], u2 = [1, 2, 3], and u3 = [2, -1, 1] as:\n";
    cout << "v = " << x[0] << "*u1 + " << x[1] << "*u2 + " << x[2] << "*u3\n";

    return 0;
}
