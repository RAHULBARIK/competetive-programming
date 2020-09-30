#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
vector<int> stock_span(int *arr,int n){
    stack<pair<int,int>> s;
    vector<int> v;
    for(int i=0;i<n;i++){
        if(s.empty()) v.pb(1);
        else if(s.size()>0 && s.top().first>arr[i]) v.pb(1);
        else if(s.size()>0 && s.top().first<=arr[i]){
         
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();

            }
            if(s.empty()) v.pb(i+1);
            else {
                v.pb(i-s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    return v;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
  
       int arr[] = {100,80,60,70,60,75,85};
       int n = sizeof(arr)/sizeof(int);
       vector<int> v= stock_span(arr,n);
       for(auto x:v) cout<<x<<" ";


    
    return 0;
}