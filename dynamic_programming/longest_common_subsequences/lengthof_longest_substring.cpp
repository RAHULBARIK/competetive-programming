#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int t;
    cin>>t;
    while(t--){
        
    
     string s1="abcgifidh";
     string s2="abcqwioueww";
     int n= s1.length();
     int m = s2.length();
     int t[n+1][m+1];
     //Intialization
     for(int i=0;i<n+1;i++){
         for(int j=0;j<m+1;j++){
             if(i==0 || j==0){
                 t[i][j]=0;
             }
         }
     }
    //Writing top-down dp 
    int result=0;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(s1.at(i-1)==s2.at(j-1)){
                t[i][j]=1+t[i-1][j-1];
                result = max(result,t[i][j]);
            }
            else{
                t[i][j]=0;
            }

        }
    }
    // for(int i=0;i<n+1;i++){
    //     for(int j=0;j<m+1;j++){
    //          cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<result<<endl;
    }
    return 0;
}