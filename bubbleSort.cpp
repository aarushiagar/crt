#include<iostream>
using namespace std;


int bubble(int arr[], int n){
    for(int i=0; i < n-1; i++){
            for(int j=0; j < n-i; j++){
                if(arr[j]> arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
    }
}
void printarr(int arr[], int n){
    for(int i=0; i<= n-1; i++){
        cout << arr[i]; 
    }
}

int main(){
    int arr[] = {3,8,2,1,7};
    bubble(arr, 5);
    printarr(arr, 5);

    return 0;
}