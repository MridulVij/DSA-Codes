// Traverse -> It means visiting to elements presented in array.

/*
#include<iostream>
using namespace std;

int main()
{
// Array Elements is already Given
int a[5] = {1,2,3,4,5};

// Traverse of Array, accessing every element of array
for(int i=0; i<5; i++)
 {
  cout<<a[i]<<" ";
 }
return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{

// // Array size declared
// int arr_size;
// cin>>arr_size;

// // Array Elements Inserted
// int arr[arr_size];
// for(int i=0; i<arr_size; i++)
// {
//  cin>>arr[i];
// }

int arr_size=10;
int arr[arr_size] = {10,20,30,40,50,60,70,80,90,100};

// Traverse of Array, accessing every element of array
for(int i=0; i<arr_size; i++)
{
 cout<<arr[i]<<" ";
}
cout<<"\nArray Traversed, Accessed and Printed Each and Every Element Successfully\n";
return 0;
}