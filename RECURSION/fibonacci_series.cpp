#include<iostream>
using namespace std;

// Fibonacci Series
/*
long long fibonacci_recursion(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    long ans1 = fibonacci_recursion(n-1);
    long ans2 = fibonacci_recursion(n-2);
    return ans1+ans2;
}


// Driver Code
int main(){
    int n;
    cin>>n;
    cout<<fibonacci_recursion(n);
}
*/


// Fibonacci series without array without recursion
/*
int main()
{
    long fibo_size, fibo_ele, fibo_sum=0;
    cout<<"Enter the Size of Fibonacci Elements\n";
    cin>>fibo_size;
    while(fibo_size--)
        {
            cout<<"Enter the Fibonacci Elements\n";
            cin>>fibo_ele;
            fibo_sum += fibo_ele;
        }

        cout<<"Sum of Fibonacci Elements is: "<<fibo_sum;
}
*/

// Fibonacci series with array without recursion
/*
int main(){
int n,fibo_sum=0;
//
cin>>n;
int fibo_ele[n];
for(int i=0;i<n;i++){
    //
    cin>>fibo_ele[i];
}
for(int i=0; i<n; i++){
    fibo_sum+=fibo_ele[i];
}
    cout<<fibo_sum;
}
*/

// Fibonacci Series with Recursion
//
int fibo(int n){
if(n==1) return 0;
if(n==2) return 1;
cout<<n<<"\n";
long fibo_sum1=fibo(n-1);
long fibo_sum2=fibo(n-2);
return fibo_sum1+fibo_sum2;
}

int main(){
 int t,n;
 cin>>t;
 while(t--){
    cin>>n;
 }
 cout<<fibo(n);
}
//


