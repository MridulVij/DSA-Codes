#include <bits/stdc++.h>
using namespace std;

class Solution{
int sum=0,i=0,j=0;
 public:
 int function(vector<int>v,int n){
   // base case condition
   if(n==0)return;
   for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        // pending
        cout<<v[i][j]<<" ";
        i++;
        sum = function(v,n-1);
   }
   }
   //recursion reverse from here
   return sum;
 }

};

int main()
{
Solution s;
vector<int>v;
int i,size,input=0;

cout<<"\nEnter the Size of Vector\n";
cin>>size;

cout<<"\nEnter the Elements of Vector\n";
for(i=0; i<size; i++){
   cin>>input;
   v.push_back(input);
}
int n = size;
cout<<"\nVector Elements Printed Here\n";
s.function(v,n);

return 0;
}
