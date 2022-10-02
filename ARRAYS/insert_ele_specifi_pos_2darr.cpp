// Program to Insert Elements in Specific Position of an 2D Array

#include <iostream>
using namespace std;

int main()
{
 int r,c;
 int ele_value;

 cout<<"\nEnter the Rows for Array\n";
 cin>>r;
 cout<<"\nEnter the Columns for Arrays\n";
 cin>>c;

 // Array Declared & Taking input of Rows and Columns
 int i, j;
 int arr[r][c];
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

 // Insert element in Specific position of 2D array
 cout<<"\nEnter Specific Position of Rows for Array\n";
 cin>>r;
 cout<<"\nEnter Specific Position of Columns for Array\n";
 cin>>c;

cout<<"\nEnter the 'Element Value' to Insert\n";
cin>>ele_value;

for(int i=r-1; i>=r-1; i--){
for(int i=c-1; i>=c-1; i--)
 {
 arr[i+1][j+1]=arr[i][j]; // shifting index value >>
 }
c++; // first increase Size of array
arr[r-1][c-1]=ele_value; // then put element inside array
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