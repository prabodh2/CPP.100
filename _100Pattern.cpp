#include <iostream>
using namespace std;
int main()
{
 
  int i,j;
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;

 
   for(i=n;i>=1;i--)
     {
         for(j=i;j<=n;j++)
         {
             cout<<((char)(j+64));
         }
 
         cout<<endl;
     }
 
  return 0;
}