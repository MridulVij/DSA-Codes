// Recursion using (factorial of "n" number)


#include <iostream>
using namespace std;
/*
int factorial(int n){
 int partial_ans = factorial(n);
 return n*partial_ans;
}

int main()
{
 int n;
 cin>>n;
 cout<<factorial(n);
//return 0;
}
*/





// Recursion using (sum of n natural numbers)

/*
#include <iostream>
using namespace std;

int sum(int n){
    int partial_Ans = sum(n-1);
    return n+partial_Ans;
}

int main(){
    int n;
    cin>>n;
    //int sum1 = sum(n);
    cout<<sum(n);
}
*/

//                           Finding Palindrome using Recursion 
/*
class Solution
{
public:
  double myPow(double x, int n)
  {
    // base condition
    if (n == 0)
      return 1;

    // when n is negative then this if-statement will be execute
    if (n < 0)
    {
      x = 1 / x;
      n = abs(n);
    }
    double temp = myPow(x, n / 2);

    // if N is odd then we will have to multiply X
    if (n % 2 == 1)
      return temp * temp * x;

    return temp * temp;
  }
};



int main()
{
Solution obj;

int n;
double x;
cin>>x>>n;
cout<<obj.myPow(x, n);

}
*/

// leetcode Solution

/*
class Solution{
public:
bool isPalindromeHelper(int l, int r, string &s){
  if(l>=r) 
  cout<<"This is Palindrome: "; 
  return true;
  
  if(s[l] != s[r]) 
  cout<<"This is not a Palindrome: ";
  return false;
  return isPalindromeHelper(l+1,r-1,s);
}

bool isPalindrome(string &s){
  return isPalindromeHelper(0,s.size()-1,s);
}
};

int main(){
  Solution obj;
  int l, r;
  string s;
  cin>>l>>r>>s;
  cout<<obj.isPalindromeHelper(l,r,s);
  //cout<<obj.isPalindrome();
}
*/


// Pending problem Here
/*
#include <iostream>
#include <vector>
using namespace std;

class Solution{
  public:
void reverse_Array_Helper(int l, int r, vector<int> &arr){
  if(l>=r) return;
  reverse_Array_Helper(l+1, r-1, arr);
  swap(arr[l], arr[r]);
}

void reverse_Array(vector<int> &arr, int m){
  reverse_Array_Helper(m+1, arr.size()-1,arr);
}
};

int main(){
  Solution s;
  //int x, y;
  //vector<int>arr;
  //cin>>x>>y;
  s.reverse_Array_Helper(0,4);
  //arr.push_back(20));

}
//