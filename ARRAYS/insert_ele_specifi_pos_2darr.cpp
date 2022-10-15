//Status = Complete

// Program to Insert Elements in Specific Position of an 2D Array

#include <iostream>
using namespace std;

class my2dclass
{
  int row_size, column_size;
  int ele_2darrays;
  int i,j;
  int row,column;
  // Dynamic Memory Allocation of 2d Array
  int arr[][];// pending

public:
  void input2d_array(int r, int c)
  {
    
    row_size = r;
    column_size = c;

    for (int i = 0; i < row_size; i++) 
    {
        
    }

    cout<<"\nEnter the 2d Arrays Elements\n";
    for(i=0; i<row_size; i++)
    {
      cout<<"Row"<<i+1<<"\n";
      for(j=0; j<column_size; j++)
      {
      cout<<"Column"<<j+1<<"\n";
        cin>>arr[i][j];
      }
    }
  }



  void output2d_array()
  {
    for(i=0; i<row_size; i++)
    {
      for(j=0; j<column_size; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<"\n";
    }
    cout<<"\nElements Printed Successfully\n";
  }



  void specificpos2d_array(int r1, int c1, int ele)
  {
    row = r1;
    column = c1;
    ele_2darrays = ele;

    for(i=0; i<row_size-1; i++)
    {
      for(j=0; j<column_size-1; j++)
      {
       arr[i][j];
      }
      arr[row][column] = ele_2darrays;
    }

    for(i=0; i<row_size; i++)
    {
      for(j=0; j<column_size; j++)
      {
        cout<<arr[i][j]<<" ";
      }
      cout<<"\n";
    }
    cout<<"\nElements Printed Successfully after Specific Position Update\n";
}
};

int main()
{
//Class Object Created
my2dclass c2d;

int r,c,s_r,s_c,ele_2darray;

cout<<"\nEnter the Row of 2d Array\n";
cin>>r;
cout<<"\nEnter the Column of 2d Array\n";
cin>>c;
c2d.input2d_array(r,c);
c2d.output2d_array();

//take input to reach specific position of row and column of 2d array 
cout<<"\nEnter Specific Position of ROW\n";
cin>>s_r;
cout<<"\nEnter Specific Position of COLUMN\n";
cin>>s_c;
cout<<"\nEnter Specific Element of 2d Array\n";
cin>>ele_2darray;
c2d.specificpos2d_array(s_r,s_c,ele_2darray);

return 0;
}