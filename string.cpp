#include<iostream>
using namespace std;


int toLower(char ch){
    if(ch>='a' && ch<= 'z'){
        return ch;
    }
    else{
        char temp= ch - 'A' + 'a';
        return temp;
    }
}

int palindrome(char name[], int len){
     int start = 0;
    int end = len -1;
    while(start <= end){
    if(toLower(name[start]) != toLower(name[end])){
        return 0;
    }
    else{
        start++;
        end--;
    }
   
    }
     return 1;
}

void reverse(char name[], int len){
    int start = 0;
    int end = len -1;
    while(start <= end){
        swap(name[start], name[end]);
        start++;
        end--;
        
    }
   
   
}

void print(char name[], int len){
     for(int i=0; i< len; i++){
        cout<< name[i];
    }
}
    


int length(char name[]){
    int i, count=0;
    for(i=0; name[i]!= '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter the name ";
    cin>> name;
    int len = length(name);
    cout<< len;
   reverse(name, len);

   print(name, len);

   cout<< palindrome(name, len);
   
  

}