#include <iostream>
using namespace std;

//First Method
int countBits(int n){
    int ans = 0;
    while(n>0){
        ans += (n&1);
        n = n>>1;
    }
    return ans;
}
int countBitsFaster(int n){
    int ans =0;
    while(n>0){
        n= n&(n-1);
        ans++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<countBits(n)<<endl;
    cout<<countBitsFaster(n)<<endl;
    cout<<__builtin_popcount(n)<<endl;
}