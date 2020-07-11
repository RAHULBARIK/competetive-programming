#include <iostream>
using namespace std;
bool isOdd(int n){
    return (n&1);
}
int getBit(int n,int i){
    int mask = (1<<i);
    int bit = n&mask>0?1:0;
    return bit;
}
void setBit(int &n,int i){
    int mask = (1<<i);
    n= (n|mask);
    
}
void clearBit(int &n, int i){
    int mask = ~(1<<i);
    n = n&mask;
    
}
void upadteBit(int &n,int i, int v) {
    // if(v ==1){
    //     setBit(n,i);
    // }
    // else{
    //     clearBit(n,i);
    // }
    int mask1,mask2;
    mask1 = ~(1<<i);
    n= n & mask1;
    mask2 = v<<i;
    n = n | mask2;

}
int main() {
    int n=7;
    int i;
    int v;
    cin>>i>>v;
    // cout<<getBit(n,i)<<endl;
    // cout<< setBit(n,i)<<endl;
    // cout<< clearBit(n,i)<<endl;
    upadteBit(n,i,v);
    cout<< n <<endl;

    return 0;
}