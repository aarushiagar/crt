#include<iostream>
#include<math.h>
using namespace std;

int main(){
 //complement of a number
    int m,n;
    n=m=5;
    int mask = 0;
    int ans =0;
    if(n==0){
        return 1;
    }
    while(n!=0){
        mask = (mask << 1)|1;
        n = m>>1;
        
    }
    ans = (~n) & mask;
    cout<<ans;
    return ans;
    return 0;
}