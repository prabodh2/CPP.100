#include <iostream>
using namespace std;

int main()
 {
    int num;

    // Input the number
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
     {
        cout << "Factorial is not defined for negative numbers." << endl;
    } 
    else 
    {
        long long factorial = 1;

        // Calculate factorial using a nested loop
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }

        // Display the result
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}
