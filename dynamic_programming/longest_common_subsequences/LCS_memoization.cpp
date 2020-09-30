#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
int t[100][10000];

int LCS(string s1,string s2,int n,int m){
    //Base condition
    if(n==0 || m==0){
        return 0;
    }

    if(t[n][m]!=-1){
        return t[n][m];
    }




    // Choice diagram or recursive case
    if(s1[n-1]==s2[m-1]){
        t[n][m] = 1+LCS(s1,s2,n-1,m-1);
        return t[n][m];
    }

    t[n][m] = max(LCS(s1,s2,n,m-1),LCS(s1,s2,n-1,m));
    return t[n][m];
    
}

int main(){
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    string s1="abcdgh";
    string s2="abedfhr";
    int n = s1.length();
    int m = s2.length();
    memset(t,-1,sizeof(t));
    cout<<LCS(s1,s2,n,m)<<endl;
    return 0;
}