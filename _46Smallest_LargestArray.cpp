#include <iostream>
using namespace std;

int main()
{
    float largest,smallest;
    int size;
    cout << "Enter size of the array: ";
    cin >> size;
    float arr[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];

    }
    
    largest = arr[0];
    smallest = arr[0];

    for(int j = 0 ; j < size; j++ )
    {
        if (largest < arr[j])
        {
            largest = arr[j];
        }
    }
   
    for(int k = 0; k < size; k++)
    {
        if (smallest > arr[k])
        {
            smallest = arr[k];

        }
    }

    cout << "\n";
    cout << "The largest element in the array is: " << largest << endl;
    cout << "The samllest element in the array is: " << smallest << endl;


     



    return 0;
}
