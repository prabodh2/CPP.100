#include <iostream>
using namespace std;

float Average(int array[],int s)
{
    float average;
    float sum = 0;
    s = sizeof(array)/sizeof(array[0]);
    
    for(int i = 0; i < s; i ++)
    {
        sum += array[i];

    }
    average = sum/s;
    return average;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    
    for(int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << " element: ";
        cin >> arr[i];

    }

    cout << "The average of the elements of the array is : " << Average(arr,size) << endl;


    return 0;
}