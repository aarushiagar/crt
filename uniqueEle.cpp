#include<iostream>
using namespace std;

int unique(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];

    }
    return ans;
}

int uniOcc(int arr[], int n){
    
}

int main(){
    int arr[6]={2,3,4,3,2,4};
    int uni =unique(arr, 6);

    if(uni != 0){
        cout<<"unique element ";

    }
    else{
        cout<<"not unique element";
    }

    return 0;
}