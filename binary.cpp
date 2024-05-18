#include <iostream>
using namespace std;


int binary(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid;
    mid = start + (end - start)/2;
while(start < end){
    if(arr[mid] == key){
        return mid;

    }
    else if(arr[mid] < key){
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
    int arr[100] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 14, 16, 19, 22, 23, 25, 26, 27, 29, 31, 34, 35, 36, 38, 39, 40, 45, 46, 48, 50, 51, 52, 57, 59, 60, 61, 63, 67, 68, 69, 71, 75, 76, 77, 79, 81, 82, 83, 86, 87, 88, 90, 92, 93, 94, 95, 96, 98, 99, 100};
    int key;
    cout<<"Enter the key to be searched";
    cin>>key;
   
   
   cout<< "the index is " <<  binary(arr, 6, key);
    return 0;
}
