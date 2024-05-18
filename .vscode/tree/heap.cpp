#include<iostream>
using namespace std;


class Heap{
    public:
    int arr[100];
    int size = 0;

    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deleteNode(){
        if(size == 0){
            cout<<"nothing to delete";
            return;
        }

        arr[1] = arr[size];
        size--;
        int i=1;
        while(i< size){
            int left = 2*i;
            int right = 2*i+1;

            if(left < size && arr[left]> arr[i]){
                swap(arr[left], arr[i]);
                i = left;
                
            }
            else if(right < size && arr[right]> arr[i]){
                swap(arr[right], arr[i]);
                i = right;
            }
            else{
                return;
            }
        }
    }
};


void heapify(int arr[], int n, int i){
    //heapify algorithm for max heap in 1-based indexing
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;

    if(left<=n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right<=n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}


//heap sort

void heapSort(int arr[], int n){
    int size = n;
    while(size>1){
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}

int main(){
    Heap h;
    h.insert(20);
    h.insert(30);
    h.insert(40);
    h.insert(50);

    //printing the array

    h.deleteNode();

    //printing the array

    int arr[5] = {1, 54, 53, 55, 52};
    int n = 5;
    for(int i= n/2; i>0; i--){
        heapify(arr, n, i);
    }


    //printing the array
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    heapSort(arr, n);

    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }

    return 0;

}