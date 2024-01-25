// Recursive C++ program to find sum of digits
// of a number
#include <iostream>
using namespace std;
 
// Function to check sum of digit using recursion
int sum_of_digit(int n)
{
    if (n == 0)
    return 0;
    return (n % 10 + sum_of_digit(n / 10));
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = sum_of_digit(num);
    cout << "Sum of digits in "<< num
       <<" is "<<result << endl;
    return 0;
}
