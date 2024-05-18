#include<iostream>
using namespace std;

int sum(int *arr, int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];

    }

    //recursive call
    int remaining = sum(arr+1, n-1);
    int add = arr[0] + remaining;
    return add;

}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int n = 6;
    int s = sum(arr,n);
    cout<< "sum " << s;

    return 0;
}