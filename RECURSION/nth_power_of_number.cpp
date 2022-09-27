#include<iostream>
using namespace std;

// Nth power of number
//
long long power(int x, int n){
    if(n==0) return 1;
    long long ans = power(x,n-1);
    return x*ans;
}


// Driver Code
int main(){
    int x,n;
    cin>>x>>n;
    cout<<"Nth Power of Number: "<<power(x,n);
}
//


// Not a optimum way
// Method 2 to Solve Nth Power of Number
/*
long long nth_power(int x, int n){
    long long ans = nth_power(x,n/2);
    if(n%2==1) return ans*ans*x;
    return ans*ans;
}
//
int main(){
    int x,n;
    cin>>x>>n;
    cout<<nth_power(x,n);
}
*/
