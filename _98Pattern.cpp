#include <iostream>
using namespace std;

int main()
{
    int i, j, N;

    cout << "Enter the value of n: ";
    cin >> N;

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=N; j>=i; j--)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}

