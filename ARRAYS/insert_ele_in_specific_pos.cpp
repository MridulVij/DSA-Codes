// Status = Pending

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






// Insert an element only 1 time in specific index in array
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

// Pending Code
// Element inserted in specific index of array given by user.
cout<<"\nEnter the 'Specific Index' Value of Array\n";
cin>>spec_index;
cout<<"\nEnter the 'Element Value' to Insert\n";
cin>>ele_value;
for(int i=arr_size-1; i>=spec_index-1; i--)
{
 arr[i+1]=arr[i];
}
arr[spec_index-1]=ele_value;
arr_size++;

// Element Displayed after Changed from Specific position
cout<<"\nPrinting Changed Elements\n";
for(int i=0; i<arr_size; i++)
{
 cout<<arr[i]<<" ";
}
return 0;
}