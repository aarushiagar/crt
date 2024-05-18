#include<iostream>
using namespace std;

// void reverse(int arr[], int n){
//     int s = 0;
//     int e = n - 1;
//     while(s<=e){
//         swap(arr[s++],arr[e--]);

//     }
// }

void alternate(int arr[], int n){
    for(int i = 0; i<n; i=+2){
        cout<<"code started";
        if(i+1 < n)
        swap(arr[i],arr[i+1]);
        
    }
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
}

// int linear(int arr[], int n, int key){
//     for(int i=0; i<n; i++){
//         if(key == arr[i]){
//             cout<<"key found at index"<<i;
//             return 1;

//         }
//     }
//     return 0;

// }

int main(){
    int arr[6] = {1,2,3,4,5,6};
   
    // int key;
    // cin>> key;

   printArray(arr, 6);
   alternate(arr, 6);
   printArray(arr, 6);


    return 0;
}