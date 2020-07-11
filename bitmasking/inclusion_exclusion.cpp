#include <iostream>
using namespace std;

#define ll long long 

int main(){
    ll t;
    cin>>t;

    ll primes[] = {2,3,5,7,11,13,17,19};

    while(t--){
        ll n;
        cin>>n;
        ll subset = (1<<8);
        ll ans = 0;
        for(ll i=1;i<subset;i++){
            ll dem = 1;
            ll setBits = __builtin_popcount(i);

            for(ll j=0;j<8;j++){
                if(i & (1<<j)){
                    dem = dem*primes[j];
                }
            }
            if(setBits&1){
                ans += n/dem;
            }
            else{
                ans -= n/dem;
            }
        }
        cout<<ans<<endl;
    }
}