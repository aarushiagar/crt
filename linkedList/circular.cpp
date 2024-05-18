#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }

    ~Node(){
        if(this -> next = NULL){
            delete next;
            next = NULL;
        }
    }

};

void insertNode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* node1 = new Node(d);
        tail = node1;
        node1 -> next = node1;
            
    }
    else{
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deletion(Node* &tail, int value){
    if(tail == NULL){
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev-> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr-> next;
        }

        prev -> next = curr -> next;
        // ek node ki linked list
        if(curr == prev){
            tail = NULL;
        }
        // >2 node ki linked list
        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

    }

}

void print(Node* tail){
     Node* temp = tail;

     if(tail == NULL){
        cout<<"empty list";
        return;
     }

    do{
        cout<< tail -> data<< " ";
        tail = tail -> next;
    }while(tail != temp);
    cout<< endl;

}

int main(){
    
    Node* tail = NULL;

    insertNode(tail,8,11);
    print(tail);

    insertNode(tail,11,12);
    print(tail);

    insertNode(tail,12,13);
    print(tail);

    insertNode(tail,13,14);
    print(tail);

    insertNode(tail,12,15);
    print(tail);

    deletion(tail,13);
    print(tail);

    deletion(tail,11);
    print(tail);

    return 0;
}