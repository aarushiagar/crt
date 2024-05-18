#include<iostream>
#include<queue>
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }

};

node* buildTree(node* root){
    cout<< "Enter the data";
    int data;
    cin>> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<< " Enter the left node of" << root -> data << endl;
    root -> left = buildTree(root-> left);
    cout<< " Enter the right node of" << root -> data << endl;
    root -> right = buildTree(root-> right);


}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);

            }
        }
        else{
            cout<< temp -> data <<" ";
            if(temp -> left){
                q.push(temp->left);
            }
            if(temp -> right){
                q.push(temp->right);
            }
        }//1 3 5 -1 -1 4 -1 -1 2 -1 -1


    }

}

void inorder(node* root){
    if(root == NULL){
        return;
    }
    inorder(root-> left);
    cout<< root-> data;
    inorder(root-> right);
}
void preorder(node* root){
    if(root == NULL){
        return;
    }
    cout<< root-> data;
    preorder(root-> left);
    
    preorder(root-> right);
}
void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root-> left);
   
    postorder(root-> right);
     cout<< root-> data;
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    levelOrderTraversal(root);
    cout<<endl;
    cout<<"inorder "<< endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder "<< endl;
    preorder(root);
    cout<<endl;
    cout<<"preorder "<< endl;
    preorder(root);


    return 0;
}