#include<iostream>
using namespace std;

bool sorted(int *arr, int n){
    //base case
    if(n==0 || n==1){
        return true;
    }
    //recursive call
    
    if(arr[0]> arr[1]){
        return false;
    }
    
    sorted(arr+1,n-1);

}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int n = 6;
   if(sorted(arr, n)){
    cout<<"already sorted"<< endl;
   }
   else{
    cout<<"not sorted"<< endl;
   }
    return 0;
}