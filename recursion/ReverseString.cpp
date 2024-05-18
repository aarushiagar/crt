#include<iostream>
using namespace std;

void reverse(string& s, int i, int j){
    //base case
    if(i>j){
        return ;
    }
    swap(s[i++],s[j--]);

    //recursive call
    reverse(s, i,j);



}

int main(){
    string s = "abcde";
    reverse(s,0,s.length()-1);

    for(int i=0; i<s.length();i++){
        cout<< s[i];
    }



    return 0;
}