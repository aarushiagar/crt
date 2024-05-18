#include<iostream>
using namespace std;

bool palindrome(string& s, int i, int j){
    //base case
    if(i>j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    return palindrome(s, i+1, j-1);

}

int main(){
    string s = "abcba";
    if(palindrome(s, 0, s.length()-1)){
        cout<<"is a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }


    return 0;
}