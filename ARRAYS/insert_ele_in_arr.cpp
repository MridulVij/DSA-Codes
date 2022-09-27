// Status = Working

 // Program to Insert Elememt in Array (Insertion in Array) 
#include<iostream>
using namespace std;

int main()
{
 // Array Size Declared
 int size=0;
 cout<<"\nEnter the Size of Array\n";
 cin>>size;

 // Array Element Inserted
int arr[size];
  cout<<"\nEnter the Elements of Array\n";
 for(int i=0; i<size; i++){
  cin>>arr[i];
 }

 // Array Element Displayed for Checking is Element Inserted or not
 for(int i=0; i<size; i++){
  cout<<arr[i]<<" ";
 }
return 0;
}