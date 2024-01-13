//Write a C++ program to calculate the number of ways to climb stairs (with varying step sizes).
#include <iostream>
using namespace std;

//Function to cout the number of ways
int countWays(int* steps, int numSteps, int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0) {
        return 1;
    }
    int ways = 0;

    for (int i = 0; i < numSteps; ++i) {
        ways += countWays(steps, numSteps, n - steps[i]);
    }
    return ways;
}
int main() {
    //input a number of staries,number of step sizes and number of step from the user 
    int num;
    cout << "Enter the number of stairs: ";
    cin >> num;

    int numSteps;
    cout << "Enter the number of different step sizes: ";
    cin >> numSteps;

    int steps[numSteps];

    cout << "Enter the step sizes " << endl;
    for (int i = 0; i < numSteps; ++i) {
        cout << "Enter " << i+1 << "th step size: ";
        cin >> steps[i];
    }
    //Displaying the number to the climd staries by calling a countways function
    cout << "Number of ways to climb the stairs: " << countWays(steps, numSteps, num) << endl;

    return 0;
}
