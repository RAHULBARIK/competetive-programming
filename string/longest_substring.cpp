#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
int longest_subsequence(string s){
    map<char,int> m;
    int n = s.length();
    int l=0,c=0;
    rep(i,0,n){
        if(m.find(s[i])==m.end()){
            m[s[i]]=i;
            c++;
        }
        else{
            i=m[s[i]];
            if(c>l) l=c;
            c=0;
            m.clear();
        }
    }
    if(c>l) l=c;
    return l;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    ll t;
    cin>>t;
    while(t--){
         string s;
         cin.ignore();
         cin>>s;
         cout<<longest_subsequence(s)<<endl;
        
    }
    return 0;
}