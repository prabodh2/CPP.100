#include <iostream>
using namespace std;

double calculateSeriesSum(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= 1.0 / i; // Subtract 1/i if i is even
        } else {
            sum += 1.0 / i; // Add 1/i if i is odd
        }
    }

    return sum;
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;
    double sum = calculateSeriesSum(n);
    cout << "Sum of the series is: " << sum << endl;
    return 0;
}
