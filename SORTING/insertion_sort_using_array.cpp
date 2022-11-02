#include <iostream>
using namespace std;

class Solution
{
 int size,i,j,x; // x = temp , x variable is temp variable which holds the swapping value in it.
 int arr[];
public:
 void setdata(int s)
 {
  size = s;
 }

 void input_array()
 {
  cout<<"\nEnter the Elements of Array\n";
  for(i=0; i<size; i++)
  {
   cin>>arr[i];
  }
 }


 void insertion_sort()
 {
  for(i=0; i<size; i++)
  {
   j = i-1;
   x = arr[i];
  while(j>=0 && arr[j]>x)
  {
   arr[j+1] = arr[j];
   j--;
  }
  arr[j+1] = x;
  }
 }


 void output_array()
 {
  cout<<"\nElements Sorted Successfully using Insertion Sort!\n";
  for(i=0; i<size; i++)
  {
   cout<<arr[i]<<" ";
  }
 }
};

int main()
{
 Solution s;
 int size;
 cout<<"\nEnter the Size of Array\n";
 cin>>size;
 s.setdata(size);
 s.input_array();
 s.insertion_sort();
 s.output_array();

return 0;
}