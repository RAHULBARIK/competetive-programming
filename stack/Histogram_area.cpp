#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
vector<int>  NSL(int *arr,int n){
    vector <int> v;
    stack <pair<int,int>> s;
    for(int i=0;i<n;i++){
        if(s.empty()) v.pb(-1);
        else if(s.size()>0 && s.top().first<arr[i]) v.pb(i-1);
        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.empty()) v.pb(-1);
            else v.pb(s.top().second);
        }
        s.push({arr[i],i});
    }
    return v;

}
vector<int> NSR(int *arr, int n){
    vector<int> v;
    stack <pair<int,int>> s;
    for(int i=n-1;i>=0;i--){
        if(s.empty()) v.pb(n);
        else if(s.size()>0 && s.top().first<arr[i]) v.pb(i+1);
        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.empty()) v.pb(n);
            else v.pb(s.top().second);
        }
        s.push({arr[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
}
int histogram_area(int *arr,int n){
    vector<int> v1,v2;
    v1 = NSL(arr,n);
    // for(auto x:v1) cout<<x<<" ";
    // cout<<endl;
    v2=NSR(arr,n);
    // for(auto x:v2) cout<<x<<" ";
    // cout<<endl;
    int maxe=0;
    for(int i=0;i<n;i++){
        maxe=max(maxe,arr[i]*(v2[i]-v1[i]-1));
    }
    return maxe;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<histogram_area(arr,n)<<endl;
    }
    
    return 0;
}