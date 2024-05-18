#include<iostream>
using namespace std;

int sum(int arr[][3]){
    int arr1[3] = {0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr1[i] += arr[i][j];
        }
        cout<<"the value for row"<< i <<" "<< arr1[i];
    }
    int maxi = -1;
    int maxIndex = -1;

    for(int i=0; i<3; i++){
        if(arr1[i] > maxi){
            maxi  = arr1[i];
            maxIndex = i;
        }
        
    }
    cout<<"max index is "<< maxIndex;
    return maxi;
    


}

int main(){
    int arr[3][3];
    cout<<"enter the array";
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"printing array";
  for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    sum(arr);
    cout<<"max value is"<< sum(arr);



    return 0;
}