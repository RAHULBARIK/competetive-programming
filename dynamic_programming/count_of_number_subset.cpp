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
   int arr[]={2,3,5,6,8,10};
   int n= sizeof(arr)/sizeof(int);
   int sum=10;
   int t[n+1][sum+1];
   //Intialization
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
    //  for(int i=0;i<n+1;i++){
    //    for(int j=0;j<sum+1;j++){
    //        cout<<t[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }
    for(int i=1;i<n+1;i++){
       for(int j=1;j<sum+1;j++){
           if(arr[i-1]<=j){
               t[i][j]= t[i-1][j-arr[i-1]] + t[i-1][j];
           }
           else{
               t[i][j] = t[i-1][j];
           }
       }
    }
      for(int i=0;i<n+1;i++){
       for(int j=0;j<sum+1;j++){
           cout<<t[i][j]<<" ";
       }
       cout<<endl;
    }
    cout<<t[n][sum]<<endl;
   return 0;
}