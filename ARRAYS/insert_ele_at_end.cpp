// Status = Complete

 // Program to Insert Elememt in Array (Insertion in Array) 
#include<iostream>
using namespace std;

int main()
{
// Array Size Declared
int size;
int ele;
cin>>size;
int arr[size];

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

// Inserting Element for End Position in Array
for(int i=size; i<=size; i++)
 {
  cin>>ele;
 }

// Element inserted Successfully
for(int i=size-1; i<=size-1; i++)
 {
  arr[i+1]=arr[i];
 }
arr[size]=ele;
size++;

// Element Displayed after update
for(int i=0; i<size; i++)
 {
  cout<<arr[i]<<" ";
 }
cout<<"\n";
}

