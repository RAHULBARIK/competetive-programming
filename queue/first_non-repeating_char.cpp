#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define INT_BITS 32;
using namespace std;
char nonRepeat(string s,int n){
    queue<char> q;
    int arr[26]={0};
    for(auto x:s){
        //Pushing each element to the array
        q.push(x);
        //Increasing the frequency count
        arr[x-'a']++;

        while(!q.empty()){
            if(arr[q.front()-'a']>1){
                q.pop();
            }else
            {
                // cout<<q.front()<<" ";
                break;
            }
        }
        

    }
    if(q.empty()) return 'A';
    return q.front();

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
        int n;
        cin>>n;
        cin>>s;
        if(nonRepeat(s,n)=='A') cout<<"-1"<<endl;
        else cout<<nonRepeat(s,n)<<endl;
    }
    return 0;
}