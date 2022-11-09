// Status = Done

// Program to search element in 1D Array with Linear Search
#include <iostream>
using namespace std;

class LinearSearch{
 int i;
 int size = 10,element;
// DMA to 1D Array
 int *arr = new int[10];

public:
// Taking 1D Array Elements from user
 void insert_ele_in_array()
 {
  cout<<"\nEnter the Array Elements\n";
  for(i=0; i<size; i++)
   cin>>arr[i];
 }

// linear Searching Elements in 1D Array
 void linear_searching()
 {
  cout<<"\nEnter Element You Want to Search\n";
  cin>>element;
  for(i=0; i<size; i++)
  {
   if(arr[i] == element)
   {
     cout<<"\nElement will found in Array at position "<<i+1<<"\n";
     break;
   }
  }

// this block checks the index value of array == size of array. it scan whole array and when element is not found it runs
  if(i == size)
   cout<<"\nElement not found!\n";
 }
};

int main()
{
LinearSearch ls;
// function calling
ls.insert_ele_in_array();
ls.linear_searching();

return 0;
}