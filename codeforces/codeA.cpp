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
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int  sumo=0;
       int  sume=0;
       int arr[n+2];
        rep(i,0,n){
            int k;
            cin>>k;
            arr[i]=k;
            if(i%2==0) sume+=k;
            else sumo+=k;
        }
       if(sumo==sume){
           if(sumo==0){
               cout<<1<<endl<<0<<endl;
               continue;
           }
           cout<<n<<endl;
           for(int i=0;i<n;i++) cout<<arr[i]<<" ";
       }
       else if(sumo>sume){
           int diff = sumo-sume;
        //    cout<<diff<<"&";
           
             if(n-2*diff==0){
                 cout<<1<<endl<<0<<endl;
                 continue;
             }
               cout<<n-2*diff<<endl;
           int ct1=0,ct2=0;
           for(int i=0;i<n;i++){
             
                if(i%2==0) {
                    if(arr[i]==0 && ct1!=diff) {
                        ct1++;
                        continue;}
                     cout<<arr[i]<<" ";
                }
                else{
                    if(arr[i]==1 && ct2!=diff) {
                        ct2++;
                        continue;
                    }
                     cout<<arr[i]<<" ";
                }
           }
        }
       else {
            int diff = sume-sumo;
        //    cout<<diff<<"&";
             
                if(n-2*diff==0){
                 cout<<1<<endl<<0<<endl;
                 continue;
             }
             cout<<n-2*diff<<endl;
           int ct1=0,ct2=0;
           for(int i=0;i<n;i++){
             
                if(i%2==0) {
                    if(arr[i]==1 && ct1!=diff) {
                        ct1++;
                        continue;}
                     cout<<arr[i]<<" ";
                }
                else{
                    if(arr[i]==0 && ct2!=diff) {
                        ct2++;
                        continue;
                    }
                     cout<<arr[i]<<" ";
                }
           }
       }
       cout<<endl;

    }
    return 0;
}