#include <iostream>
using namespace std;

void Linear_Search(int array[],int size,int element)
{
    for(int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            cout << element << " found at index " << i << endl;
            break;

        }
        else 
        {
            cout << element <<  " not found in the array " << endl ;
            break;

        }
    }
}

int main()
{
    int S;
    int search;
    cout << "Enter the size of the array: ";
    cin >> S;
    int arr[S];
    for(int j = 0; j < S; j++)
    {
        cout << "Enter " << j + 1 << " element: ";
        cin >> arr[j];

    }
    cout << "Enter the element you want to search for: ";
    cin >> search;
    cout << "***********************************\n\n";
    Linear_Search(arr,S,search);
    cout << "***********************************\n\n";



}