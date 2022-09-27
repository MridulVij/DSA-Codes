// Status = 

// Program to Reverse an array (Reverse an Array)
#include<iostream>
using namespace std;
 // START
int main(){
 int size=0, n=1;

 // Array Size Declared
 cout<<"\nEnter the Size of Array\n";
 cin>>size;
 long arr[size];
 cout<<"\nEnter the "<<n++<<" Element of Array\n";
 for(int i=0; i<size; i++)
 {
  cin>>arr[i];
 }

 // Array printed in Reverse Direction
 for(int i=size-1; i>=0; i--)
 {
  cout<<arr[i]<<" ";
 }
return 0;
}
