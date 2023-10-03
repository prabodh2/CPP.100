#include <iostream>
using namespace std;

int main()
{
    int num ,i;
    cout << "Enter a number: ";
    cin >> num;
    if ( num > 1)
    {
        for(i = 2;i < num; i++)
    {
            if (num % i == 0)
            {
                cout << num << " is a composite number" << endl;
                break; 
            } 
        else
        {
            cout << num << " is a prime number" << endl;

        }
    }
    }
    else if (num == 0 || num == 1)
    {
        cout << num << " is neither prime nor composite number" << endl;
    
    }
    else
    {
        cout <<"INVALID" << endl;

    }

    return 0;
}