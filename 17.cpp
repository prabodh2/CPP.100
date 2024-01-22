#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int squareResult = square(num);
    int cubeResult = cube(num);
    cout << "Square of " << num << " is: " << squareResult << endl;
    cout << "Cube of " << num << " is: " << cubeResult << endl;
    return 0;
}
