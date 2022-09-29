
 // Program to Insert Elememt in Array (Insertion in Array) 
#include<iostream>
using namespace std;

int main()
{
 // Array Size Declared
 int size[5] = {1,2,3,4,5};
 //cout<<"\nEnter the Size of Array\n";
 //cin>>size;

 // Array Element Inserted
//int arr[size];
  cout<<"\nEnter the Elements of Array\n";
 for(int i=size[5]-1; i<size[5]; i++){
  cin>>size[i];
 }

 // Array Element Displayed for Checking is Element Inserted or not
 for(int i=0; i<size[5]; i++){
  cout<<size[i]<<" ";
 }
return 0;
}

// pending