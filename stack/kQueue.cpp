#include<iostream>
#include<queue>
using namespace std;

class kqueue{
    int k;
    int n;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;

    kqueue(int n, int k){
        this -> n = n;
        this -> k = k;

        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        next = new int[n];
        freespot = 0;

        for(int i=0; i< k; i++){
            front[i] = -1;
            rear[i] = -1;

        }

        for(int i=0; i< n; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;


    }

    int enqueue(){

        
    }
    int dequeue(){


    }

};


int main(){
    kqueue q(5,3);
    
    





    return 0;
}