#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;

    // Input the size of the first matrix
    cout << "Enter rows and columns for first matrix: ";
    cin >> rowsA >> colsA;

    // Input the size of the second matrix
    cout << "Enter rows and columns for second matrix: ";
    cin >> rowsB >> colsB;

    // Check if multiplication is possible
    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible. Number of columns in the first matrix must equal number of rows in the second matrix." << endl;
        return;
    }

    // Declare matrices
    int matrixA[rowsA][colsA], matrixB[rowsB][colsB], product[rowsA][colsB];

    // Input elements of the first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrixA[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrixB[i][j];
        }
    }

    // Initialize the product matrix to 0
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                product[i][j]=product[i][j]+matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    // Display the result
    cout << "Product of the matrices:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
