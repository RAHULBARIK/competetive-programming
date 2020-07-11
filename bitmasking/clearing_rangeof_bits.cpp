#include <iostream>
using namespace std;
int clearRangeBits(int n,int i,int j){
    int mask = (-1<<j) | ~(-1<<i);
    n = n&mask;
    return n;
}
int clearLastIBits(int n,int i){
    int mask = (-1<<i);
    n = n & mask;

    return n;
}

int main(){
    int n=63;
    int i,j;
    cin>>j>>i;
    cout<<clearLastIBits(n, i)<<endl;
    cout<<clearRangeBits(n,i,j+1)<<endl;


    return 0;
}