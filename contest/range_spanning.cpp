#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
bool isvalid(vector<int> &v,int b,vector<int> v2){
    int it = v2[0];
    int it1 = v2[1];
    // cout<<v2.size()<<endl;

    // for(auto x:v2) cout<<x<<" ";
    // cout<<endl;
    // cout<<*it<<"^"<<endl;
    if( v2[0]-b+1>0) {
        // cout<<"!"<<endl;
        return false;
    }
    for(int i=0;i<v2.size()-1;i++){
        // cout<<v2[i]<<" "<<v2[i+1]<<endl;
        if(v2[i]+b>=v2[i+1]-b+1){
            continue;
        }else
        {
            // cout<<"@"<<endl;
            return false;
        }
        
    }
    if(v2[v2.size()-1]+b-1<v.size()-1){
        //   cout<<"#"<<endl;
         return false;
       
    }
    return true;
}
int minimum(vector<int> &v,int b){
    vector<int> v1;
    set<int> s;
    for(int i=0;i<v.size();i++){
        if(v[i]==1) {
            v1.pb(i);
            s.insert(i);
            }
    }
    for(int i=0;i<v1.size();i++){
        v[v1[i]]=0;
        s.erase(v1[i]);
        // bool k = isvalid(v,b,s);
        // cout<<k<<endl;
        vector<int> v2;
        for(auto x:s) v2.pb(x);
        if(isvalid(v,b,v2)) {
            v[v1[i]]=0;
            // cout<<"valid"<<endl;
        }
        else {
            // cout<<"not valid"<<endl;
            s.insert(v1[i]);
            v[v1[i]]=1;
        }
        // for(auto x:s) cout<<x<<" ";
        // cout<<endl;
    }
    // int ct=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==1) ct++;
    // }
    int ct=s.size();
    return ct;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    vector<int> v;
    for(int i=0;i<8;i++){
        int k;
        cin>>k;
        v.pb(k);
    }
    int b;
    cin>>b;
   cout<< minimum(v,b)<<endl;
    return 0;
}