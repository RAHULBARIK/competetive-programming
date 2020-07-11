//you are given a 32-bit number and u can want to replace M bits of N number starting i to j index
#include <iostream>
#include <algorithm>
using namespace std;

int clearRangeItoJ(int n, int i,int j){
    int ones = (~0);
    int a = ones <<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    int ans = n&mask;
    return ans;

}
int  set_n_m_bits(int n,int m, int i){
    int mask = m<<i;
    n= n&mask;
    return n;
}

int main(){
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    // cout<<n<<m<<i<<j;
    n=clearRangeItoJ(n,i,j);
    n=set_n_m_bits(n,m,i);
    cout<<n<<endl;



    return 0;
}