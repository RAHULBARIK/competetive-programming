#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
int magic_triplet(vector<int> v,int n){
    multiset<int> m1,m2;
    rep(i,0,n){
         int k;
        cin>>k;
        if(m1.empty()) m1.insert(k);
        else m2.insert(k);
    }



}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    ll t;
    cin>>t;
    while(t--){
       multiset<int> m1,m2;
       vector<int> v;
       int n;
       cin>>n;
       rep(i,0,n){
          
           int k;
           cin>>k;
           v.pb(k);

       }
    magic_triplet(v,n);
    }
    return 0;
}