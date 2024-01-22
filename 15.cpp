#include <iostream>
using namespace std;
int main()
{
    string input;
    cout<<" Enter the String : " <<endl;
    getline(cin, input);
    reverse(input.begin(), input.end());
    cout<<" Reversed String : " << input << endl;
    return 0;
}
