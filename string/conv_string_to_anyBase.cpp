#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define INT_BITS 32;
using namespace std;
ll karatsuba_algorithm(string s1,string s2){
    ll n1= stoi(s1,0,2),n2=stoi(s2,0,2);
    return n1*n2;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    ll t;
    cin>>t;
    cin.ignore();
    while(t--){
       string s1,s2;
       cin>>s1>>s2;
        cout<<karatsuba_algorithm(s1,s2)<<endl;

    }
    return 0;
}