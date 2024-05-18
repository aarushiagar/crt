#include<iostream>
using namespace std;

class Stack{
    public:
     int top;
     int size;
     int *arr;

     Stack(int size){
        top=-1;
        this->size = size;
         arr = new int[size];
     }

     void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<< " stack overflow";
        }
     }

     void pop(){
        if(top >=0){
            arr[top] = -1;
            top--;
        }
        else{
            cout<< " stack underflow";
        }
     }

     int peek(){
        if(top>= 0){
            return arr[top];
        }
        else{
            cout<< " stack underflow";
        }

     }

     void empty(){
        if(top == -1){
            cout<<"empty stack";
        }
        else{
            cout<<"not empty";
        }
     }

     void display(){
        if(top>= 0){
            
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<" ";
                
            }
        }
     }

};


int main(){
    Stack s(5);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();
    s.peek();
    s.display();

}