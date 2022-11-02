#include <iostream>
using namespace std;

class Solution
{
 int i,j,k,p,l,h,mid;
 int B[100];

public:
 void merge(int A[], int l, int mid, int h)
 {
  while(i<=mid && j<=h)
  {
   if(A[i]<A[j])
   B[k++]=A[i++];
   else
   B[k++]=A[j++];
  }
  for(i=0; i<=mid; i++)
  B[k++]=A[i];
  for(j=0; j<=h; j++)
  B[k++]=A[j];
  for(int i=l; i<=h; i++)
  A[i]=B[i];
 }

 void Imerge_sort(int A[], int n)
 {
  for(p=2; p<=n; p=p*2)
  {
   for(i=0; i+p-1<n; i=i+p)
   {
    l=i;
    h=i+p-1;
    mid=(l+h)/2;
    merge(A,l,mid,h);
   }
  }
  if(p/2<n)
  merge(A,0,p/2,n-1);
 }
};

int main()
{
 Solution s;
 //pending
 int A[10] = {10,20,30,40,50,60,70,80,90,100},n=10,i;
 s.Imerge_sort(A, n);

 for(i=0; i<10; i++){
  cout<<A[i]<<" ";
 }

return 0;
}