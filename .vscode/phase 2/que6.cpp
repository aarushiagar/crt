// Median in array
#include <bits/stdc++.h>
using namespace std;

int mode(int arr[], int size){
    unordered_map <int, int> m;
    for(int i = 0; i < size; i++){
        m[arr[i]]++;
    }
    int max = 0;
    int mode = arr[0];
    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second > max){
            max = it->second;
            mode = it->first;
        }

    }
    return mode;

}

double findMedian(int arr[], int size) {
    //randomised quick select algo in O(n) time comp.
    // but now this code is using O(nlogn) time comp.
    //what is ammortization
    sort(arr, arr + size);
    if (size % 2!= 0)
        return (double)arr[size / 2];
    return (double)(arr[(size - 1) / 2] + arr[size / 2]) / 2.0;
}

int main() {
    int arr[] = {7,-6,3,1,7,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Median is : " << findMedian(arr, size) << endl;
    int mod = mode(arr,size);
    cout << "Mode is : " << mod << endl;

    return 0;
}

