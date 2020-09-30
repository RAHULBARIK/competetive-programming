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
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
   int weight[] = {1,3,4,5,2};
   int profit[] = {4,7,5,9,2};
   int n = sizeof(weight)/sizeof(int);
   int w=14;
   int t[n+2][w+2];
   memset(t,-1,sizeof(t));
    // for(int i=0;i<n+1;i++){
    //    for(int j=0;j<w+1;j++){
    //        cout<<t[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }
    // for(int i=0;i<n+1;i++){
    //    for(int j=0;j<w+1;j++){
    //        if(i==0 || j==0){
    //            t[i][j]=0;
    //        }
    //    }
    // }
    //  for(int i=0;i<n+1;i++){
    //    for(int j=0;j<w+1;j++){
    //        cout<<t[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }
   for(int i=0;i<n+1;i++){
       for(int j=0;j<w+1;j++){
           //Base case
           if(i==0 || j==0) {
               t[i][j]=0;
               continue;
           }


           //Recursive case
           if(weight[i-1]<=j){
               t[i][j]= max(profit[i-1]+t[i-1][j-weight[i-1]],t[i-1][j]);
           }else
           {
               t[i][j]=t[i-1][j];
           }
        //  cout<<t[i][j]<<" ";
       }
    //  cout<<endl;
   }
    // for(int i=0;i<n+1;i++){
    //    for(int j=0;j<w+1;j++){
    //        cout<<t[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }
   cout<<t[n][w]<<endl;
    return 0;
}