// Program to using pointers with arrays
#include <iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
// Here Heap memory section will allocated to pointer variable because of variabled size "*p"
int *p = new int[n]; 

for(int i=0; i<n; i++){
 cin>>p[i];
}

for(int i=0; i<n; i++){
 cout<<&p[i]<<" ";
 cout<<p[i]<<" ";
 //cout<<*p[i]<<" ";
}

delete []p;
return 0;
}