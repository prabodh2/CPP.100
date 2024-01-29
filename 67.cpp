#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Get dimensions for the first matrix
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> rows1 >> cols1;

    // Get dimensions for the second matrix
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> rows2 >> cols2;
    // Check if dimensions are compatible for addition
    if (rows1 != rows2 || cols1 != cols2) {
        cout << "Matrices cannot be added. Dimensions are not compatible." << endl;
        return 0;
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols1];

    // Get elements for the first matrix
    cout << "Enter elements for the first matrix:" << endl;
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Get elements for the second matrix
    cout << "Enter elements for the second matrix:" << endl;
    for(int i = 0; i < rows2; i++) {
        for(int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Add the matrices
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the result matrix
    cout << "Resultant matrix after addition:" << endl;
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols1; j++) {
            cout << result[i][j] << " ";
            if(j == cols1 - 1)
                cout << endl;
        }
    }

    return 0;
}
