//double reversal approach for shifting an array by k elements
#include<iostream>
using namespace std;

// void swap1(int arr[], int i,int j){
//     //int j=n-1;
//     while(i<= j){
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }

// void swap(int arr[], int n, int k){

//     swap1(arr,0, n-1);
//     swap1(arr,0, n-k-1);
//     swap1(arr,n-k, n-1);
    
// }



int main(){
    int arr[] = {2,3,4,5,6,7};
    int n = 6;
    int k = 3;
    cout<<"Array before reversing";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    swap(arr, n, k);
    cout<<"Array after reversing";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}