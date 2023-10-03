

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        // Print spaces before numbers
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Print the first half of numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Print the second half of numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        // Move to the next line
        cout << endl;
    }
    return 0;
}
