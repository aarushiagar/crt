#include<iostream>
using namespace std;

bool search(int *arr, int n, int key){
    //base case
    if(n==0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    search(arr+1, n-1, key);
    
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int n = 6;
    int key = 9;

   if(search(arr, n,key)){
    cout<<"element found"<< endl;
   }
   else{
    cout<<"not found";
   }

    return 0;
}