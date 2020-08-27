#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <map>
#include <unordered_map>
#define ll long long 
#define INT_BITS 32;
using namespace std;
ll twice_count(string *s,ll n){
    unordered_map<string,int> m;
    // second value or int value in these case is by default set to zero
    for(ll i=0;i<n;i++){
        m[s[i]]++;
    }
    ll res=0;
    // it->second points to the second value in these case which int
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second==2){
            res++;
        }
    }
    return res;
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
        string s[1000];
        for(ll i=0;i<n;i++){
            cin>>s[i];
        }
        cout<<twice_count(s,n)<<endl;
    }
    // To check whether a key is present or not   if(m.find(x)!=m.end()) return m[x];re
    return 0;
}