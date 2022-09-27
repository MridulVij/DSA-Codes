#include<iostream>
using namespace std;

int func1(int array[], int length){
    int sum=0, product =1;
    for(int i=0; i<length; i++){
        sum += array[i];
        //return sum;
        cout<<sum<<"\n";
    }
    for(int i=0; i<length; i++){
        product*=array[i];
        //return product;
        cout<<product<<"\n";
    }
}

int main(){
    int arr[] = {3,5,66};
    func1(arr, 3);
    return 0;
}
