#include<iostream>
using namespace std;
class Solution{

public:
int isPalindrome(string s){
    string temp = "";
  
    for(int j=0; j< s.length(); j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
            
    for(int j=0; j< s.length(); j++){
        temp[j] = toLower(temp[j]);

    }
     
    }
    return checkpalindrome(temp);
}

private:

int toLower(char ch){
    if(ch>='a' && ch<= 'z'){
        return ch;
    }
    else{
        char temp= ch - 'A' + 'a';
        return temp;
        
    }
}

bool checkpalindrome(string s){
    int start = 0;
    int end = s.length() - 1;
    while(start <= end){
    if(s[start] != s[end]){
        return 0;
    }
    else{
        start++;
        end--;
    }
   
    }
     return 1;
}

int valid(char ch){
    if((ch>='a' && ch>= 'z') ||(ch>= 'A' && ch<= 'Z' ) || (ch>=0 && ch<=9)){
        return 1;
    }
    else{
        return 0;
    }
}

};        
int main(){
    
    string s;
    cout << "Enter the string ";
    cin>> s;
   
    Solution a;
   cout<< "the string is palindrome or not";
    cout<< a.isPalindrome(s);
    

}