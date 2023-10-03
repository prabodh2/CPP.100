#include <iostream>

using namespace std;

int main() {
  // Number of rows in the pattern
  int rows = 4;

  // Counter for the numbers
  int count = 1;

  // Outer loop for each row
  for (int i = 1; i <= rows; i++) {
    // Inner loop for each column
    for (int j = 1; j <= i; j++) {
      // Print the current number
      cout << count << " ";

      // Increment the counter
      count++;
    }

    // Print a newline after each row
    cout << endl;
  }

  return 0;
}