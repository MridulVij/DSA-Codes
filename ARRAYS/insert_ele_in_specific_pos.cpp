// Status = Working

// Start Insert an element in specific index 
#include <iostream>
using namespace std;

/*
// Program START from here.
int main()
{

// Array Size Declared
int arr_size;
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

// Element inserted in specific index of array given by user.
int spec_index;
cin>>spec_index;

for(int i=spec_index; i<arr_size; i++)
{
 cin>>arr[i];

}

// Element Displayed after Changed from Specific position
for(int i=0; i<arr_size; i++)
{
 cout<<arr[i]<<" ";
}
return 0;
}
*/






// Insert an element only 1 time by swapping its specific index in array
#include <iostream>
using namespace std;

// Program START from here.
int main()
{

// Array Size & Variables Declared
int arr_size;
int spec_index;
int ele_value;
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

// Element inserted in specific index of array given by user.
// (Sol - it requires (i>=spec_index-1) & arr[i+1]=arr[i] )
cout<<"\nEnter the 'Specific Position' Value of Array\n";
cin>>spec_index;
cout<<"\nEnter the 'Element Value' to Insert\n";
cin>>ele_value;
for(int i=arr_size-1; i>=spec_index-1; i--) // making position as index for ex - position 2-1=1 index
 {
 arr[i+1]=arr[i]; // shifting index value >>
 }
arr_size++; // first increase Size of array
arr[spec_index-1]=ele_value; // then put element inside array

// Element Displayed after Changed from Specific position
cout<<"\nPrinting Changed Elements\n";
for(int i=0; i<arr_size; i++)
 {
 cout<<arr[i]<<" ";
 }
return 0;
}
  