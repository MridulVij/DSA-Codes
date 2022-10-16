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
     // Transposition is happen with swapping the original index value with original index value -1 (for ex = 10 -> 20, 20 -> 10)
     swap(arr[i], arr[i-1]);
     return i-1;
    }
     
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