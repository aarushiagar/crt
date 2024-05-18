#include<iostream>
using namespace std;

int binary(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<=e){
    if(key == arr[mid]){
        cout<< "key found at index "<< mid;
        return 1;
    }
    else if(key < arr[mid]){
        e = mid - 1;
    }
    else{
        s = mid + 1;
    }
    mid = s + (e-s)/2;
    }
    cout<< "key not found";
return 0;
}

int main(){
     int arr[6];
    for(int i=0; i<6; i++){
        cin>> arr[i];

    }
    int key;
    cin>> key;

    binary(arr, 6, key);


    return 0;
}