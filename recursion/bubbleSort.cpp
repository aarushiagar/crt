#include<iostream>
using namespace std;

void bubble(int *arr, int n){
    //base case
    if(n==0 || n==1){
        return ;
    }

    //recursive call
    for(int i = 0; i<n ; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    bubble(arr, n-1);
}

int main(){
    int arr[6]={1,6,5,4,3,2};
    int n = 6;

    bubble(arr,n);
    for(int i=0; i<n; i++){
        cout<< arr[i]<< endl;
    }

    return 0;
}