#include<iostream>
using namespace std;

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}
int main() {
    int base, exponent;

    // Taking input from user
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // Calculating power using recursion
    int result = power(base, exponent);

    // Displaying the result
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}
