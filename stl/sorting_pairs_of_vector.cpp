#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define INT_BITS 32;
using namespace std;
bool compGreat(const pair<string,int> &a,const pair<string,int> &b){
    if(a.second>b.second) return true;
    if(a.second == b.second)
    {
        if(a.first<b.first) return true;
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector< pair<string,ll> > v;
        for(int i=0;i<n;i++){
            ll k;
            string s;
            cin>>s>>k;
            v.push_back({s,k});
        }
        sort(v.begin(),v.end(),compGreat);
        for(auto x:v){
            cout<<x.first<< " "<<x.second<<endl;
        }

        
    }
    return 0;
}