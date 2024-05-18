#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str = "aarushi";

    stack<char> s;
    for(int i=0; i<str.length();i++){
        char ch = str[i];
        s.push(ch);

    }
    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();


    }

    cout<< " ans is " << ans;


    // stack<int> s;
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);

    // s.pop();

    // cout<< s.top();

    // cout<< s.size();

    // if(s.empty() == 0){
    //     cout<< " not empty";
    // }
    // else{
    //     cout<< " empty";
    // }

    return 0;
}