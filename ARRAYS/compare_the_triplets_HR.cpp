#include <bits/stdc++.h>
using namespace std;

class Solution{
int i,Al=0,Bo=0;
 public:
 int function(vector<int>a, vector<int>b){
    for(i=0; i<=2; i++){
        if(a[i]<b[i]){
            Bo++;

        }
        else if(a[i]>b[i]){
            Al++;
        }
        else{

        }
    }
       // return Al,Bo;

 }

};

int main()
{
Solution s;
vector<int>a = {5,6,7};
vector<int>b = {3,6,10};
s.function(a,b);
return 0;
}

