#include <iostream>
using namespace std;

class Solution
{
 int i,j,k,size=10;
 int Arr[];
public:
 void setdata(int s)
 {
  size = s;
 }


 void input_array()
 {
  for(i=0; i<size; i++)
  {
   cin>>Arr[i];
  }
 }


 void selection_sort()
 {
  for(i=0; i<size-1; i++)
  {
   for(j=k=i; j<size; j++)
   {
    if(Arr[j]<Arr[k])
    k=j;
   }
   // Swap function is inbuilt in C++
   swap(Arr[i], Arr[k]);
  }
 }


void output_array()
{
 for(i=0; i<size; i++)
 {
  cout<<Arr[i]<<" ";
 }
}


};

int main()
{
 Solution s;
 s.setdata(10);
 s.input_array();
 s.selection_sort();
 s.output_array();

return 0;
}