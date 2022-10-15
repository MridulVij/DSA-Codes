// Status = Done using OOPS concept

// Insert an Element in Array by Entering Size & Elements of Array.
#include<iostream>
using namespace std;

class myClass
{
   int arr_size, i;
   //Dynamic Memory Allocated to Array
   int *arr = new int[arr_size];

   public:
   void inserting_arr(int a)
   {
      arr_size = a;
      cout<<"\nEnter the Elements of an Array\n";
      for(i=0; i<arr_size; i++)
      {
         cin>>arr[i];
      }
   }

   void printing_arr()
   {
      for(i=0; i<arr_size; i++)
      {
         cout<<arr[i]<<" ";
      }
      cout<<"\nElements Printed Successfully!\n";
   }
};

int main()
{
   // Class Object
   myClass c1;

   int input;
   cout<<"\nEnter the Size of Array\n";
   cin>>input;
   c1.inserting_arr(input);
   c1.printing_arr();
}