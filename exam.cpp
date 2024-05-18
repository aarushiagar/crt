#include<iostream>
using namespace std;


int set(int n){
     int count = 0;
    while(n != 0){
       
        if(n&1 == 1){
            count = count + 1;
        }
         n>>1;
        
    }
    cout<< "count is"<< count;
   
}
int main(){
    int n;
    cout<< "Enter the number";
    cin>> n;
    
    cout << "answer is"<< set(n);
    
    return 0;
}