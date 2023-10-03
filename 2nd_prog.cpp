//Implement a program to check if a given number is prime or not.
#include <iostream>
using namespace std;

bool Prime(int n) {   // Function to check if a number is prime
        // Handle special cases for n <= 1
    if (n <= 1) {   
        return false;
    }
    // Check divisors from 2 up to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            // If n is divisible by i, it's not prime
            return false;
        }
    }
    // If no divisors were found, n is prime
    return true;
}
int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

            // Check if 'num' is prime using the 'Prime' function
    if (Prime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    
        // Find and print the factors of 'num'
    for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                cout << i;
                if (i != num) {
                    cout << ", ";

                }
            }
        }
return 0;
}
