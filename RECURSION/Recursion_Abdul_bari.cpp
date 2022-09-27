/*
#include<iostream>
using namespace std;

// Recursion Code
void recursive_function(int n){
    if(n>0){
    cout<<"Recursion Runs "<<n<<" times"<<endl;
    recursive_function(n-1);}
cout<<"Recursion Ends...coz they reach base condition"<<n<<endl;
}
// Driver Code
int main(){
    int n;
    cin>>n;
    recursive_function(n);
}
*/

/*
#include<iostream>
using namespace std;

// Recursion Code

void recursive_function(int n){
    if(n>0){
    recursive_function(n-1);
    cout<<"Recursion Runs "<<n<<endl;
}
//cout<<"Recursion Ends...coz they reach base condition"<<n<<endl;
}
// Driver Code
int main(){
    int n;
    cin>>n;
    recursive_function(n);
}
*/

/*
#include<iostream>
using namespace std;

// Recursion Code
void recursive_function(int n)
{
    if(n>0)
        {
            cout<<n<<" ";
            //recursive_function(n-1);
            recursive_function(n-1);
        }
//cout<<"Recursion Ends...coz they reach base condition"<<n<<endl;
}
// Driver Code
int main()
{
    //int n;
    //cin>>n;
    recursive_function(3);
}
*/



//                                      TREE RECURSION
//
/*
#include<iostream>
using namespace std;

// Recursion Code
void recursive_function(int n)
{
    if(n>0)
        {
            cout<<n<<" ";
            recursive_function(n-1);
            recursive_function(n-1);
        }
//cout<<"Recursion Ends...coz they reach base condition"<<n<<endl;
}
// Driver Code
int main()
{
    //int n;
    //cin>>n;
    recursive_function(3);
}
*/



//                                      INDIRECT RECURSION
/*
#include<iostream>
using namespace std;

// Function Declaration
void fun_B(int);
void fun_A(int);

void fun_A(int n){ // function defination 1
    if(n>0){
        cout<<n<<endl;
        fun_B(n-1);
    }
}

void fun_B(int n){ // function defination 2
    if(n>0){
        cout<<n<<endl;
        fun_A(n/2);
    }
}

int main(){
    int value = 3;
    fun_A(value); // function call
    //fun_B(value);
}
*/









//          Print number of (1 to N)
/*
    void recursive_function(int N)
    {
        // Write Your Code here
        if(N>0){
            recursive_function(N-1);
            cout<<N<<" ";
        }
        return;
    }
*/
// practice problem
/*
#include<iostream>
using namespace std;

int sum(int n){
    if(n==0){ return 0; } // if condition is TRUE
    cout<<"Call Starts"<<n<<endl;
    sum(n-1); // if condition is FALSE
    cout<<"Call Ends"<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    sum(n);
}
*/


/*
1. Sum of numbers from 1 to n
2. Sum of digits of a number
3. Factorial of a number
4. fibonacci Sequence
5. Check if a string is palindrome
6. Find nCr. [hint nCr=(n-1)Cr + (n-1)C(r-1)]
*/


// sum of numbers from 1 to n

#include<iostream>
using namespace std;

void sum(int n){
    if(n>0){
    sum(n-1);
    cout<<n<<"\n";
    }
    return; // this return terminates the
}

int main(){
    int n;
    cin>>n;
    sum(n);
}
//


//sum of digits of number
/*
#include<iostream>
using namespace std;

int sum_n(int n){
    if(n==0){return 0;}
    long long ans = sum_n(n-1);
    return
}

int main(){
    int n;
    cin>>n;
    sum_n(n);
}
*/
