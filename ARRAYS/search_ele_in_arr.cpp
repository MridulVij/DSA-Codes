// Status = Working

// Program to Searching Element in Array (Searching in Array) // pending
#include <iostream>
using namespace std;

// START
int main()
{
 // Array Variable Declared
int size_of_array;
int ele_search, searched_ele=0;
int index, index2;

 // Array Size Declared
  cout<<"\nEnter the Size of Array\n";
  cin>>size_of_array; 
  int arr[size_of_array];

 // Array Element Inserted
  cout<<"\nEnter the Elements of Array\n";
for(int index=0; index<size_of_array; index++)
 {
  cin>>arr[index];
 }

 // Index Value Input for Searching
  cout<<"\nEnter Searching Index Value to Find\n";
  cin>>ele_search;
for(index=0; index<=ele_search; index++)
 {
  if(index==ele_search)
  {
    cout<<arr[ele_search]<<" ";
  }
 }
return 0;
}

