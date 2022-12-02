#include <bits/stdc++.h>
using namespace std;

class Solution{
    int i;
    public:
void print_string(char c[]){
    for(i=0; c[i] != '\0'; i++){
        cout<<c[i]<<" ";
    }
}

};

int main(){
    Solution s;
    char c[10];
    int size=0;
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>c[i];
    }
    s.print_string(c);
}