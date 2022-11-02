// Status = Pending


// Delete an element only 1 time by swapping its specific index in array
#include <iostream>
using namespace std;

int main()
{

// Array Size & Variables Declared
int arr_size, spec_index, ele_value, del_pos;
cin>>arr_size;
int arr[arr_size];

// Element inserted in array & Displayed
for(int i=0; i<arr_size; i++)
 {
 cin>>arr[i];
 }
for(int i=0; i<arr_size; i++)
 {
 cout<<arr[i]<<" ";
 }
cout<<"\n";


// // Element inserted in specific index of array given by user.
// // (Sol - it requires (i>=spec_index-1) & arr[i+1]=arr[i] )
// cout<<"\nEnter the 'Specific Position' Value of Array\n";
// cin>>spec_index;
// cout<<"\nEnter the 'Element Value' to Insert\n";
// cin>>ele_value;
// if(spec_index<=0 || spec_index>arr_size)
// {
//  cout<<"Invalid Pos"<<"\n";
// }
// else
// {
// for(int i=arr_size-1; i>=spec_index-1; i--) // making position as index for ex - position 2-1=1 index

//  {
//  arr[i+1]=arr[i]; // shifting index value >>
//  }
// }
// arr_size++; // first increase Size of array
// arr[spec_index-1]=ele_value; // then put element inside array


// // Element Displayed after Changed from Specific position
// cout<<"\nPrinting Changed Elements\n";
// for(int i=0; i<arr_size; i++)
//  {
//  cout<<arr[i]<<" ";
// }
// cout<<"\n";
  


// Delete Element from Specific Position 
//(Sol - it requires (i<arr_size) & arr[i]=arr[i+1] )
cout<<"\nEnter Position to Delete Element\n";
cin>>del_pos;
if(del_pos<=0 || del_pos>arr_size)
{
 cout<<"Invalid Pos"<<"\n";
}
else
{
 for(int i=del_pos-1; i<arr_size-1; i++)
 arr[i]=arr[i+1];
}
arr_size--;
 


// Element Displayed after Changed from Specific position
cout<<"\nPrinting Changed Elements\n";
for(int i=0; i<arr_size; i++)
{
 cout<<arr[i]<<" ";
}
cout<<"\n";

return 0;
}


/*

0 - FALSE
1 - TRUE

Logical AND operator

0 && 0 - 0
0 && 1 - 0
1 && 0 - 0
1 && 1 - 1


Logical OR operator

0 || 0 - 0
1 || 0 - 1
0 || 1 - 1
1 || 1 - 1

*/