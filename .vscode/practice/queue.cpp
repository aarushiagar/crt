#include<iostream>
using namespace std;

class Queue{
    public:
    int front;
    int rear;
    int *arr;
    int size;

    Queue(int n){
        this->size = n;
        front = -1;
        rear = -1;
        arr = new int[size];

    }

    bool isempty(){
        if(front = rear = -1){
            return 1;
        }
        return 0;
    }

    void push(int data){
        if(rear == size-1){
            cout<<"overflow";
            return;
            
        }
        
        if(front = rear = -1){
            front = 0;
            rear = 0;
            
        }
            arr[rear] = data;
            rear++;
        
    }

    void pop(){
        if(front = -1){
            cout<<"underflow";
            return;
        }
            front++;
        
    }

    

    void front1(){
        cout<<"front is "<<arr[front]<< endl;;
    }
    void rear1(){
        cout<<"rear is "<<arr[rear]<<endl;
    }
};

int main(){
    Queue q(5);
    q.push(3);
    q.front1();
    q.rear1();

    q.push(4);
    q.front1();
    q.rear1();

    q.push(5);
    q.front1();
    q.rear1();

    q.push(6);
    
    cout<< "the queue is empty" << q.isempty()<< endl;
    q.front1();
    q.rear1();

    return 0;
}