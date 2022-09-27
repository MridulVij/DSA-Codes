#include<iostream>
using namespace std;

// Sum of N natural Numbers Recursive Code
int sum_of_n_recursion(int n){
    if(n==1) return 1;
    int ans = sum_of_n_recursion(n-1);
    return n+ans;
}

// Driver Code
int main(){
    int n;
    cin>>n;
    cout<<sum_of_n_recursion(n);
}
