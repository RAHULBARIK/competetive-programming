#include <iostream>
using namespace std;
long long int powerup(long long int n,long long int k){
    long long int ans=1;
    int last_bit;
    while(n>0){
        last_bit = n&1;
        if(last_bit == 1){
            ans= ans*k;
        }
        k=k*k;// every time the loop is running we are squaring the k value
        n=n>>1;//Discard the last bit of N
    }
    return ans;

}
int main(){
    long long int n,k;
    cin>>n>>k;
    cout<<powerup(n,k)<<endl;

    return 0;
}