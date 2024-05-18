#include<iostream>
using namespace std;

void swap(int arr[], int n){
    int i=0;
    //int j=n-1;
    while(i<= (n/2.0)-1){
        swap(arr[i], arr[n-i-1]);
        i++;
    }
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