#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
const int N=10000;
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int t;
    cin>>t;
    while(t--){
        // cout<<"yo"<<endl;
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<arr[i][j]<<"  ";
        //     }
        // }
        int key;
        cin>>key;
        // searching_element(arr,n,m,key);
        // cout <<searching_element(arr,n,m,key)<<endl;
        
        for(int i=0;i<n;i++){
            // cout<<*(*(arr+(i))+m)<<endl;
            if(key<arr[i][m-1]){
                bool search = binary_search(*(arr),*(arr+(i))+m,key);
                  if(search){
                // return true;
                cout<<"1"<<endl;
                break;
                 }else{
                // return false;
                cout<<"0"<<endl;
                 break;
            }
        }
        if(arr[i][m-1]<key && key<=arr[i+1][m-1]){
            bool search = binary_search( *(arr+(i))+m,*(arr+(i+1))+m,key);
            // for(int j=0;j<m;j++){
            //     cout<<arr[i+1][j]<<" ";
            // }
            
            // bool search = true;
            if(search){
                // return true;
                cout<<"1"<<endl;
                break;
            }else{
                // return false;
                cout<<"0"<<endl;
                 break;
            }
             }
         }
   
    }
       return 0;
    }

    
