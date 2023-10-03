
#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int N;

    // Taking input from user
    cout << "Enter the value of N: ";
    cin >> N;

    double sum = 0;

    // Calculating the sum of the series
    for (int i = 1; i <= N; i++) {
        int fact_i = factorial(i);
        sum += static_cast<double>(i) / fact_i;
    }

    // Displaying the result
    cout << "Sum of the series is: " << sum << endl;

    return 0;
}