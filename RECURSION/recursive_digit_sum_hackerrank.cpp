#include<iostream>
using namespace std;


// recursive function
int superDigit(string n, int k){
// base condition applied
if(k>0)
long int sum = superDigit(n,k-1);
return sum
}
*/

int main(){
    string n = 9875;
    int k = 4;
    cout<<superDigit(n,k);
}
