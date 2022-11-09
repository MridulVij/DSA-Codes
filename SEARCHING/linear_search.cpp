#include <iostream>
using namespace std;

class Solution
{
 int arr[10]={10,20,30,40,50,60,70,80,90,100};
 int i,element;

public:
  int LinearSearch(int e)
  {
   element = e;
   for(i=0; i<10; i++)
   {
    if(arr[i]==element)
    {
     return i;
    }
     // otherwise return (last index/size of array)
   }
  } 
};

int main()
{
Solution s;

int data;
cin>>data;
cout<<s.LinearSearch(data);

return 0;
}