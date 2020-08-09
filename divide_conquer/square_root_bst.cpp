#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#define ll long long 
#define INT_BITS 32;
using namespace std;
float square_root(int n,int p){
    int s=0,e=n;
    float ans =0;
    while(s<=e){
        int mid=(s+e)/2;
    
        if(mid*mid == n){
            return mid;
            //Only if given n is a perfect square
        }
        if(mid*mid<n){
            ans = mid;
            s=mid+1;
        }
        else{
            e = mid-1;
        }
        // cout<<ans<<"  ";
    }
    cout<<ans<<endl;
    float inc=0.1;
    for(int times=0;times<p;times++){
        while(ans*ans<=n){
            ans=ans+inc;
        }
        ans = ans-inc;
        inc=inc/10;
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int n,p;
    cin>>n;
    cin>>p;
    cout<<square_root(n,p)<<endl;
    return 0;
}