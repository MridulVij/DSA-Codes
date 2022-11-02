// Status = Pending (Error - bad_array_new_length)

#include <iostream>
using namespace std;


class Solution
{
 int i,j,max;
 int *c;
 int Arr[];

public:

 int find_max(int Arr[], int n)
 {
  max = INT32_MAX;
  for(i=0; i<n; i++)
  {
   if(Arr[i]>max)
   max = Arr[i];
  }
  return max;
 }


 void count_sort(int Arr[], int n)
 {
  max = find_max(Arr, n);
  c = new int[max-1];
  for(i=0; i<max+1; i++)
  c[i]=0;
  for(i=0; i<n; i++)
  c[Arr[i]]++;

  while(i<max+1)
  {
   if(c[i]>0)
   {
    Arr[j++]=i;
    c[i]--;
   }
   else
   i++;
  }
 }


};

int main()
{
Solution s;
int Arr[10] = {1,2,3,4,5,6,7,8,9,10};
int n=10,i;
s.count_sort(Arr, n);

for(i=0; i<n; i++){
 cout<<Arr[i]<<" ";
 }

return 0;
}