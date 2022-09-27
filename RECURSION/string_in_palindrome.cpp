#include<iostream>
using namespace std;

bool palindrome_helper(int l, int r, string s){
    if(1>=r) return true;
    if(s[l] != s[r]) return false;
    return palindrome_helper(l+1, r-1, s);
}

bool palindrome(string s){
return palindrome_helper(0, s.size()-1 ,s);
}

int main(){
    int l;
    int r;
   // string *ptr = &s;
    string s;
    cout<<"Enter no. of starting index from Left";
    cin>>l;
    cout<<"Enter no. of starting index from Right";
    cin>>r;
    cout<<"Enter the String";
    cin>>s;
    cout<<palindrome_helper(l,r,s);
}
