#include <iostream>
using namespace std;


int binary(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid;
    mid = start + (end - start)/2;
while(start < end){
    if(mid == key){
        return mid;

    }
    else if(mid < key){
        start = mid + 1;
    }

    else{
        end = mid - 1;
    }
 mid = start + (end - start)/2;
}
return -1;
}

int main()
{
    int arr[5] = {4, 5, 6, 7, 8};
    int key;
    cout<<"Enter the key to be searched";
    cin>>key;
   
   
   cout<< "the index is " <<  binary(arr, 6, key);
    return 0;
}
