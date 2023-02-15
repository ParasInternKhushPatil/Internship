#include <iostream>
#include <iomanip>

using namespace std;

const int ROW1 = 4;
const int COL1 = 3;
const int ROW2 = 3;
const int COL2 = 1;
const int ROW3 = 4;
const int COL3 = 1;
const int ROW4 = 4;
const int COL4 = 1;


int main() {
    double matrix1[ROW1][COL1] = {{1.0, 0, 0.5}, {1.0, 1.0, 0.5}, {1.5, 0, 0.5}, {2.0, 1.5, 1.0}};
    double matrix2[ROW2][COL2] = {350, 500, 950};
    double result[ROW3][COL3] = {825.00, 1325.00, 1000.00, 4000.00};
    double result1[ROW4][COL4];

    // Multiply the two matrices
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < ROW2; k++) {
                result1[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the result matrix
    cout << "Result Matrix: " << endl;
    for (int i = 0; i < ROW1; i++) {
        cout << "R" << i+1 << " ";
        for (int j = 0; j < COL2; j++) {
            cout << "C" << j+1 << ": " << fixed << setprecision(2) << result1[i][j] << " ";
        }
        cout << endl;
    }
	
    bool match = false;
    for (int i = 0; i < ROW3; i++) {
        for (int j = 0; j < COL3; j++) {
            if (result1[i+1][j+1] == result[i][j]) {
                match = true;
                break;
            }
        }
    }

    // output result
    if (match) {
        cout << "Matrices match.\n";
    } else {
        cout << "Matrices do not match.\n";
    }

    return 0;
}
   
