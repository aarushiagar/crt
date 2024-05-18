#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;
    pair<string, int> p = make_pair("love", 2);
    m.insert(p);

    m["mera"] = 3;
    m["babbar"] = 3;
    cout<< m["mera"] <<endl;
    cout<< m["love"] <<endl;
    cout<< m.size() <<endl;
    cout<< m.count("bro") <<endl;
    cout<< m.count("love") <<endl;

   return 0;
}