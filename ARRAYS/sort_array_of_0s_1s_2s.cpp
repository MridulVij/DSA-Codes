#include<iostream>
using namespace std;

int main(){
    int a[] = {0,2,1,2,0};
    int n = 5;
        // code here
        // nested loops i,j
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1; j++){

                // check condition [0 > 0 , 0 > 1 , 1 > 2 , 2 > 2]
                if(a[j]>a[j+1]){

                // swapping performed
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
    return 0;
}
