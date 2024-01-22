#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    // Taking input from user
    cout << "Enter a string: ";
    getline(cin, str);
    // Using the length() function to find the length of the string
    int length = str.length();
    // Displaying the length of the string
    cout << "The length of the string is: " << length << endl;
    return 0;
}
