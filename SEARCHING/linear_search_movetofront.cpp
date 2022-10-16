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
     // Move to Front/Head in this desired element from any index will moved to index 0 and searching will very fast
     swap(arr[i], arr[0]);
     return 0;
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