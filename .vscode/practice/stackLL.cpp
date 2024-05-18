#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* link;

    Node(int data){
        this->data = data;
        this -> link = NULL;

    }
};

class Stack{
    public:
    Node* top;

    Stack(){
        this -> top = NULL;
    }

    void push(int data){
        Node* temp = new Node(data);

        if(!temp){
            cout<<"overflow";
            exit;
        }
        temp ->data = data;
        temp -> link = top;
        top = temp;

    }

    void pop(){
        Node* temp;
        temp = top;
        top = top-> link;
        free(temp);
    }

    void peek(){
        if(top == NULL){
            cout<<"underflow";
        }
        else{
            cout<<"top is"<< top-> data;
        }
    }

    int empty(){
        return top == NULL;
    }


};

int main(){

    Stack s;
    s.empty();
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.pop();
    


    return 0;
}