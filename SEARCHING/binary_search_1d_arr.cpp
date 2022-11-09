//Status = Working

// Program to Find Key Element's Index position in 1D Array using Binary Search Algorithm

#include <iostream>
using namespace std;

class Solution
{
 int size,i;
 // DMA to 1D Array

public:
 int BinarySearch(int e)
 {
  int l,h,mid=0,element = e;
  int arr[10] = {10,20,30,40,50,60,70,80,90,100};
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
   cout<<"\nElement not found\n";
   return -1;
  }
};

int main()
{
Solution obj;

int e;
// cout<<"\nEnter the Size of Array!\n";
// cin>>s;
cout<<"\nEnter the Key Element!\n";
cin>>e;
cout<<obj.BinarySearch(e);
}