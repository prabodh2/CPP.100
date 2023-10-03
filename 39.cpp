#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cout << string(n - i, ' '); // Print spaces
        for (int j = 1; j <= 2 * i - 1; ++j)
            cout << j; // Print numbers
        cout << endl;
    }

    return 0;
}
