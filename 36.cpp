#include <iostream>
using namespace std;
int main()
{
    int height;
    // Get the height of the triangle from the user
    cout<<" Enter the height of the triangle " <<endl;
    cin>>height;
    for(int i=1 ; i<=height ; ++i)
    cout<< string(i, '*') <<endl;
    return 0;
}