//Status = Working

// Program to Impliment Binary Search in 1D Arrays
#include <iostream>
using namespace std;

class Solution
{
public:
 int BinarySearch(int e)
 {
int l,h,mid=0,element;
int arr[10] = {10,20,30,40,50,60,70,80,90,100};
  element = e;
  l=0, h=arr[10]-1; 
  while(l<=h)
  {
   mid = (l+h)/2;
   if(element == arr[mid])
    return mid;
   else if(element<arr[mid])
    h=mid-1;
   else
    l=mid+1;
   }
   return -1;
  }
};

int main()
{
 Solution s;
 cout<<s.BinarySearch(23);

return 0;
}