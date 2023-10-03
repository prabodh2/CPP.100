// CPP Program to find whether a Number
// is Prime or Not using Recursion
#include <iostream>
using namespace std;

// Returns true if n is prime, else
// return false.
// i is current divisor to check.
bool isPrime(int n, int i = 2)
{
	// Base cases
	if (n <= 2)
		return (n == 2) ? true : false;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;

	// Check for next divisor
	return isPrime(n, i + 1);
}


int main()
{
	int n;
    cout << "Enter a number: ";
    cin >> n;

	if (isPrime(n))
		cout << n << " is a prime number ";
	else
		cout << n << " is not a prime number ";

	return 0;
}
