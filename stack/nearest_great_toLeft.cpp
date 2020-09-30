#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
vector<int> NGL(int *arr,int n){
    vector<int> v;
    stack<int> s;
    for(int i=0;i<n;i++){
        if(s.empty()) v.pb(-1);
        else if(s.size()>0 && s.top()>arr[i]) v.pb(s.top());
        else if (s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 && s.top()<=arr[i]){
                s.pop();
            }
            if(s.empty()) v.pb(-1);
            else v.pb(s.top());
        }
        s.push(arr[i]);
    }

//  reverse(v.begin(),v.end());
 return v;


}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int arr[]={19,15,2,20,16,3,15,6};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v=NGL(arr,n);
    for(auto x:v) cout<<x<<" ";
    return 0;
}