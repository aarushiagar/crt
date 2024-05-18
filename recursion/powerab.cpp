#include<iostream>
using namespace std;

int power(int a, int b){
    //base case
    if(a==1 || b==0){
        return 1;

    }
    if(b==1){
        return a;
    }
    //recursive call
    int ans = power(a, b/2);
    //if b is even
    if(b%2 == 0){
        return ans * ans;
    }
    else{
        return a*ans*ans;
    }

}


int main(){
    int a = 3;
    int b = 4;

   cout<<"ans is"<< power(a,b);

    return 0;
}