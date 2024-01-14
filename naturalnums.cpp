//Create a program to calculate the sum of natural numbers up to N.
#include <iostream>
using namespace std;

int main() {
    int N;
    int sum = 0;
    cout << "Enter a value of  N : ";
    cin >> N;

    if (N <= 0) {
        cout << " Enter a value " << endl;
        return 1;   // Return 1 to indicate an error.
    }
    for (int i = 1; i <= N; i++) {   // Calculate the sum of int from 1 to 'N'.
        if (i < N) {
            cout << i << " + ";
        } else {
            cout << i << " = ";
        }
        sum = sum + i;
    }
    cout << sum << endl;

    return 0;
}
