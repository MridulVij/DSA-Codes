// Status = Complete

// Program to Insert Elememt in Array (Insertion in Array) 
#include<iostream>
using namespace std;

int main()
{
// Array Size Declared
int size;
int ele;
cout<<"\nEnter the Size of Array\n";
cin>>size;
//int arr[size];
int *arr = new int[size];

// Element inserted in array & Displayed
for(int i=0; i<size; i++)
 {
 cin>>arr[i];
 }
for(int i=0; i<size; i++)
 {
 cout<<arr[i]<<" ";
 }
cout<<"\n";

// Inputing Element to Insert in First Position of Array
cin>>ele;
int i;
//Element inserted Successfully
for(i=size-1; i>=1-1; i--)
 {
  arr[i+1]=arr[i];
 }
 size++;
 arr[i+1]=ele;

// Element Displayed after update
for(int i=0; i<size; i++)
 {
  cout<<arr[i]<<" ";
 }
cout<<"\n";
}

