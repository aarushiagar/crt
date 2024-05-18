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

    // ~Node(){
    //     int value = this -> data;

    //     if(this -> next != NULL){
    //         delete next;
    //         this -> next = NULL;
    //     }
    //     cout<<" memory is free for data" << value;
    // }
};

void insertAtStart(Node* &head, int data){
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;


}

void insertAtEnd(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;

}

void insertAtMiddle(Node* &head,Node* &tail, int position, int data){
    Node* temp = head;
    if(position == 1){
        insertAtStart(head, data);
        return;
    }
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next == NULL){
        insertAtEnd(tail, data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node* &head){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = current;
            current = current -> next;
            cnt++;
        }
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;

    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " " << endl;
        temp = temp -> next;
    }

}

int main(){
    Node* node1 = new Node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;


    Node* head = node1;
    Node* tail = node1;
    cout<<"before insertion"<< " ";
    print(head);
    insertAtEnd(tail, 12);
    insertAtEnd(tail, 14);
    insertAtEnd(tail, 15);
    print(head); 
    insertAtMiddle(head,tail,2,18);
    insertAtMiddle(head,tail,1,18);
    insertAtMiddle(head,tail,7,18);
    cout<<"after insertion"<< " ";
    print(head); 
    deleteNode(3, head);
     cout<<"after deletion"<< " ";
    print(head); 
     

    


    return 0;
}