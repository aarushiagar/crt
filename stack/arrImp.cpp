#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;


    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<< " overflow ";
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<< " the stack is in underflow condition";
              
        }
    }

    int peek(){
        if(top >= 0)
        return arr[top];
        else
        cout<< " empty stack";
        return -1;
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    Stack st(5);

    st.push(2);
    st.push(3);
    st.push(4);
    
    cout<< st.peek();
    
    st.pop();

    cout<< st.peek();

    cout << st.isEmpty();

    return 0;

}