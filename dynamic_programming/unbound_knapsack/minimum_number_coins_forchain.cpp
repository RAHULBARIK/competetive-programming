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
    int coin[] ={1,2,3};
    int n =sizeof(coin)/sizeof(int);
    int sum=5;
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            //Intializing column first and then row 
            if(j==0) t[i][j]=0;
            if(i==0) t[i][j]=INT_MAX-8;

            //Intializing column second row 
            if(i==1 && j>0) {
                if(j%coin[0]==0){
                    t[i][j] = j/coin[0];
                }else{
                    t[i][j] = INT_MAX-8;
                }
            }
        }
    }
    // for(int i=0;i<n+1;i++){
    //     for(int j=0;j<sum+1;j++){
    //        cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=2;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coin[i-1]<=j){
                t[i][j] = min(1+t[i][j-coin[i-1]],t[i-1][j]);
            }else
            {
                t[i][j]=t[i-1][j];
            }
            
        }
    }
     for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}