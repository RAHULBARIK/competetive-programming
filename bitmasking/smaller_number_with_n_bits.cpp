//Also we learn how to compute large nCr or combinations in these question

#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
int com(int pos,int ct){
    if(ct>pos) return 0; //for the case (0,1)

    int diff=pos-ct;
    int res=1;

    //Else give nCr value for larger numbers
    for(int i=1;i<=diff;i++){
        res = ((pos-i+1)*res)/i;
        //  cout<<res<<"      ";
    }
    // cout<<res<<"      ";
    return res;

}
ll smallest_equal_bits(ll n){
    ll res=0;
    ll ct=1;
    for(int i=0;i<64;i++){
        if((ll)1<<i & n){
            cout<<i<<" "<<ct<<endl;
            res = res + com(i,ct);
            ct++;
        }
    }

   return res;

}

int main(){
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
        cout<<smallest_equal_bits(n)<<endl;
    }
    return 0;
}