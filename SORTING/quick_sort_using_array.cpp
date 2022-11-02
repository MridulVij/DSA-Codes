#include <iostream>
using namespace std;

class Solution
{
 int i,j;
 int l,h,pivot,temp;
 int Arr[];
public:

 int partition(int Arr[], int l, int h)
 {
  pivot = Arr[l];
  i = l;
  j = h;

  do
  {
   do{i++;}while(Arr[i]<=pivot);
   do{i++;}while(Arr[j]>pivot);

   if(i<j)
   {
    temp = Arr[i];
    Arr[i] = Arr[j];
    Arr[j] = temp;
   }
  }while(i<j);
    temp = Arr[i];
    Arr[i] = Arr[j];
    Arr[j] = temp;
    return j;
 }

void quick_sort(int Arr[], int l, int h)
{
 if(l<h)
 {
  j=partition(Arr,l,h);
  quick_sort(Arr,l,j);
  quick_sort(Arr,j+1,h);
 }
} 


};

int main()
{
 Solution s;
 int Arr[] = {20,30,50,70,80,99,33,50,4,6};
 s.quick_sort(Arr, 0, 9);
// pending
 for(int i=0; i<10; i++)
 {
  cout<<Arr[i]<<" ";
 }
return 0;
}