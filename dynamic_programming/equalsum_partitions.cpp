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
    int arr[] = {2,3,7,8,10};
    int n=5;
    int ressum=0;
    ressum = accumulate(arr,arr+n,ressum);
    if(ressum%2==1) cout<<"Not possible"<<endl;
    // cout<<ressum<<" ";
    int sum=ressum/2;
    int  t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0){
               t[i][j]=0; 
            }
            if(j==0){
                t[i][j]=1;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j)
            t[i][j]= t[i-1][j-arr[i-1]] || t[i-1][j];
            else
            t[i][j]= t[i-1][j];

        }
    }
    if(t[n][sum]==1) cout<<"we can make equal partition ";
    else  cout<<"We cannot make equal partition";
    return 0;
}