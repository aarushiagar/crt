#include<iostream>
using namespace std;

void fib(int n){
    int a =0;
    int b=1;
    cout<< a<< " "<< b << " ";
    int c;
    for(int i=2; i<n; i++){
        c = a + b;
        cout<< c<<" ";
        a = b;
        b = c; 
    }
    

}

int main(){
    int n;
    
    cout<<"enter a number";
    cin>> n;
    fib(n);

    return 0;
    
}