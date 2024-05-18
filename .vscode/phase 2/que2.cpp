#include<iostream>
using namespace std;

void swap(int arr[], int n){
    
    int num = arr[n-1];

    for(int k=n-2; k>=0; k--){
        arr[k+1] = arr[k];
    }
    arr[0] = num;
}

int main(){
    int arr[] = {2,3,4,5,6,7};
    int n = 6;
    cout<<"Array before reversing";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    swap(arr, n);
    cout<<"Array after reversing";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}