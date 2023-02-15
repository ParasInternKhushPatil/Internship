#include <iostream>
#include <iomanip>

using namespace std;

const int ROW1 = 3;
const int COL1 = 2;
const int ROW2 = 2;
const int COL2 = 4;

int main() {
    double matrix1[ROW1][COL1] = {{1.2, 1.6}, {0.3, 0.4}, {0.5, 0.5}};
    double matrix2[ROW2][COL2] = {{3, 8, 6, 9}, {6, 2, 4, 3}};
    double result[ROW1][COL2];

    // Multiply the two matrices
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < ROW2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    // Print the result matrix with named rows and columns
    cout << "Result Matrix: " << endl;
    cout << setw(12) << " " << setw(12) << "  Q1" << setw(14) << "  Q2" << setw(12) << "  Q3" << setw(14) << "  Q4" << endl;
    cout << "Raw Components" << setw(4);
    for (int j = 0; j < COL2; j++) {
        cout << setw(12) << fixed << setprecision(2) << result[0][j] << " ";
    }
    cout << endl;
    cout << "Labour        " << setw(4);
    for (int j = 0; j < COL2; j++) {
        cout << setw(12) << fixed << setprecision(2) << result[1][j] << " ";
    }
    cout << endl;
    cout << "Misc.         " << setw(3);
    for (int j = 0; j < COL2; j++) {
        cout << setw(12) << fixed << setprecision(2) << result[2][j] << " ";
    }
    cout << endl;

    return 0;
}
