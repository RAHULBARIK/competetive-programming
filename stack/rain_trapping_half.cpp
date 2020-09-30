#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
int rain_trapping(int *arr,int n){
    stack<pair<int,int>> s;
    vector<pair<int,int>> v;
    for(int i=n-1;i>=0;i--){
        if(s.empty()) v.pb({0,0});
        else if (s.size()>0 && s.top().first>=arr[i]){
            v.pb({0,0});
        }
        else if(s.size()>0 && s.top().first<arr[i]){
            while(s.size()>0 && s.top().first<arr[i]){
                s.pop();
            }
            if(s.empty()) v.pb({0,0});
            else{
                
                v.pb({i+1,s.top().second});
            }
        }
        s.push({arr[i],i});
    }
    reverse(v.begin(),v.end());
    int max=0;
    for( auto x:v) cout<<x.first<<" "<<x.second<<endl;



    return max;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);
    cout<<rain_trapping(arr,n)<<endl;
    return 0;
}