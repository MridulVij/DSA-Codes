// Traverse -> It means visiting to elements presented in array, 
#include <iostream>
using namespace std;

int main()
{
 // Array size declared
int arr_size;
cin>>arr_size;

// Array Elements Inserted
int arr[arr_size];
for(int i=0; i<arr_size; i++)
{
 cin>>arr[i];
}

// Traverse of Array, accessing every element of array
for(int i=0; i<arr_size; i++)
{
 cout<<arr[i]<<" ";
}
cout<<"\nArray Traversed, Accessed and Printed Each and Every Element\n";
return 0;
}