// Status = 


// Program to Insert Elements in 2D Arrays

#include <iostream>
using namespace std;

int main()
{
 // row & column variables
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
  cout<<i+1<<" "<<"Row Started\n";
   for(j=0; j<c; j++)
   {
   cout<<j+1<<" "<<"Column Started\n";
   cin>>arr[i][j];
   }
   cout<<"\n";
  }


 // Printing Rows and Columns of 2D Arrays
  //cout<<i+1<<" "<<"Row Started\n";
  //cout<<j+1<<" "<<"Column Started\n";
  for(i=0; i<r; i++)
  {
   for(j=0; j<c; j++)
   {
   cout<<arr[i][j]<<" ";
   }
   cout<<"\n";
  }
   
 // Delete Element 
 int del_ele_row, del_ele_column;
 cin>>del_ele_row>>del_ele_column;

 for(i=del_ele_row-1; i<r-1; i++)
 {
  for(j=del_ele_column-1; j<c-1; j++)
  {
   // changes needed to be fix
   arr[i][j]=arr[i+1][j+1]=0;
  }
 }

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