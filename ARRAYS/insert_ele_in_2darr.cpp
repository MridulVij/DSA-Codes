// Status = Complete

// Program to Insert Elements in 2D Arrays

#include <iostream>
using namespace std;

int main()
{
 int r,c;
 
 cout<<"\nEnter the Rows for Array\n";
 cin>>r;
 cout<<"\nEnter the Columns for Arrays\n";
 cin>>c;

 // Array Declared & Taking input of Rows and Columns
 int arr[r][c];
 int i, j;
  for(i=0; i<r; i++)
  {
  cout<<i<<" "<<"Row Started\n";
   for(j=0; j<c; j++)
   {
   cout<<j<<" "<<"Column Started\n";
   cin>>arr[i][j];
   }
   cout<<"\n";
  }


 // Printing Rows and Columns of 2D Arrays
  cout<<i<<" "<<"Row Started\n";
  cout<<j<<" "<<"Column Started\n";
  for(i=0; i<r; i++)
  {
   for(j=0; j<c; j++)
   {
   cout<<arr[i][j]<<" ";
   }
   cout<<"\n";
  }
   
return 0;
}