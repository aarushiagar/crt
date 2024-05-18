#include<iostream>
using namespace std;

bool search(int *arr, int key, int s, int e){
    //base case
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid]> key){
        search(arr, key, s, mid-1);
    }
    else{
        search(arr, key, mid+1, e);
    }

}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int n = 6;
    int key = 5;

   if(search(arr,key,0, n-1)){
    cout<<"element found"<< endl;
   }
   else{
    cout<<"not found";
   }

    return 0;
}