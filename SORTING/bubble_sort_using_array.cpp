#include <iostream>
using namespace std;

class Solution
{
 int i,j,temp,size=10;
 int arr[];
public:


// Taking Input Elements in Array 
 void array_input()
 {
  for(i=0; i<size; i++)
  {
   cin>>arr[i];
  }
 }


 // Sorting of Array using Bubble Sort
 int Bubble_Sort()
 {
  for(i=0; i<size-1; i++){
   for(j=0; j<size-1; j++){
    if(arr[j]>arr[j+1])
     {
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
     }
   }
  }
 }


// Printing Sorted  Array Elements
 int sorted_array()
 {
  cout<<"\nArray is Sorted Using Bubble Sort!\n";
  for(int i=0; i<size; i++)
  {
   cout<<arr[i]<<" ";
  }
 }

};

int main()
{
 Solution s;
 s.array_input();
 s.Bubble_Sort();
 s.sorted_array();


return 0;
}