#include<iostream>
using namespace std;

// Factorial Recursion Code
recursion_factorial(int n){
    if(n==0) return 1;
    int ans = recursion_factorial(n-1);
    return n*ans;
}

// Driver Code
int main(){
    cout<<recursion_factorial(10);
}
