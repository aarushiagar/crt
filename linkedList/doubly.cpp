#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;

    }
    ~Node(){
        int value = this -> data;
        if(next != NULL){
            delete next;
            next = NULL;

        }
    }
};

void insertAtHead(Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        

    }
    else{
    Node* temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

void insertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
     Node* temp = head;
    if(position == 1){
        insertAtHead(head, data);
        return;
    }
     int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    
    nodeToInsert->next = temp->next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}


void deletion(Node* &head, int position){
    if(position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
    Node* current = head;
    Node* previous = NULL;
    int cnt = 1;
        while(cnt < position){
            previous = current;
            current = current -> next;
            cnt++;
        }
        current -> prev = NULL;
        previous -> next = current -> next;
        current -> next = NULL;
        delete current;

    }

}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<< " ";
        temp = temp -> next;
    }
    cout<< endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head, 12);
    insertAtHead(head, 14);

    insertAtTail(tail, 16);
    print(head);

    insertAtPosition(head, tail, 3, 20);
    print(head);

    deletion(head, 4);
    print(head);
    return 0;
}