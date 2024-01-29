#include <iostream>
using namespace std;

const int MAX = 100;
int main() {
    int matrix[MAX][MAX], rows, cols;
    // Input the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Input the elements of the matrix
    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the largest element in each row
    for(int i = 0; i < rows; i++) {
        int maxElement = matrix[i][0];

        for(int j = 1; j < cols; j++) {
            if(matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }

        cout << "The largest element in row " << i+1 << " is: " << maxElement << endl;
    }

    return 0;
}
