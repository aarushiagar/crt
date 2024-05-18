#include<iostream>
using namespace std;

void Selection(int arr[], int size){
    for(int i=0; i <= size - 1; i++){
        int minIndex = i;
        for(int j= i+1; j <= size-1; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printarr(int arr[], int n){
    for(int i = 0; i <= n-1; i++){
        cout << arr[i]<< endl;
    }
}

int main(){

    int arr[] = {8, 5, 10, 4, 6};
    Selection(arr, 5);
    printarr(arr, 5);
    return 0;
}
