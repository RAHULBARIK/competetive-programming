#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    if(a.second<b.second) return true;
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        v.pb({s,e});
    }
    sort(v.begin(),v.end(),comp);
    for(auto x:v) cout<<x.first<<","<<x.second<<endl;
    int fin=v[0].second;
    int res=1;
    for(int i=1;i<n;i++){
        if(v[i].first>=fin){
            fin=v[i].second;
            res++;

        }
    }
    cout<<res;


    return 0;
}