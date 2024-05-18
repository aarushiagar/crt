//juggling
#include<iostream>
#include<algorithm>
using namespace std;




int main(){
    int arr[10] = {2,3,4,5,6,7,8,9,10,11};

    for(int i=0; i<10; i++){
        cout<<arr[i] <<" ";
    } cout<<endl;

    
    int n = 10;
    int k = 3;
    int cycles = __gcd(n,k);
    int l = n/cycles;

    for(int i =0; i< cycles; i++){
        int temp = arr[i];
        int z = i;
        for(int j=0; j< l-1; j++){

            arr[z] = arr[(z+k)%n];
            z = (z + k)%n;
        }
        arr[z] = temp;
    }

    for(int i=0; i<10; i++){
        cout<<arr[i] <<" ";
    }

    return 0;
}