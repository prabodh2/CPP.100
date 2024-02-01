//Calculate the sum of elements in the main diagonal of a 2D array.
#include <iostream>
using namespace std;

int main() {
    // Define a 2D array
    int arr[3][3] ={{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};                                                                                      
    int sum = 0;
    int n;
    cout << "Enter a value of n : ";
    cin >> n;
    // Calculate the sum of elements in the main diagonal
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }                  
    // Output the sum
    cout << "Sum of elements in the main diagonal: " << sum << endl;                                                                            
    return 0;
}
