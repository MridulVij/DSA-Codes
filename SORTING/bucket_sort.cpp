// Bucket Sort Algorithm is Like Count Sort

#include <iostream>
using namespace std;

class Solution
{
 // variables space
 int max, i=0, j=0;
 int Bins[];
public:
 void bucket_sort(int A, int n)
 {
  Node **Bins;
  max =  new Node *[max+1];
 
 for(i=0; i<max+1; i++)
  Bins[i]=NULL;

 for(i=0; i<n; i++)
 {
  Insert(Bins[A[i]], A[i]);
 }
 while(i<max+1)
 {
  while(Bins[i]!=NULL)
  {
   A[j++]==Delete(Bins[i]);
  }
  i++;
 }
 }

};

int main()
{
Solution s;
int Arr[10] = {20,3,5,2,7,8,33,26,67,29}, n=10;
s.bucket_sort(Arr, n);

return 0;
}