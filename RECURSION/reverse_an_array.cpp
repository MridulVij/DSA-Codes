#include<iostream>
#include<vector>
using namespace std;

void reverse_array(int l, int r, vector<int>arr){
    if(l>=r) return;
    reverse_array(l+1, r-1, arr);
    swap(arr[l], arr[r]);
}

void revers(vector<int>arr, int m){
reverse_array(m+1,arr.size()-1,arr);
}

int main(){
    int l;
    int r;
    int n;
    vector<int>arr;
    cin>>l>>r;
    //cin>>n;
    //cin>>arr.back();// problem pending here
    reverse_array(l,r,arr);
}
