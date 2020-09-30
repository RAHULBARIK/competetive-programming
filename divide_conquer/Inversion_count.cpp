#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
int merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int i=s,j=mid+1,k=s,temp[100000];
    int cnt=0;
    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            cnt+= mid-i+1;
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    for(i=s;i<=e;i++){
        arr[i]=temp[i];
    }
    return cnt;
}
int inversion_count(int *arr,int s,int e){
    //Base case
    if(s>=e){
        return 0;
    }


    //Recursive case
    int mid= (s+e)/2;
    int x = inversion_count(arr,s,mid);
    int y = inversion_count(arr,mid+1,e);
    int cross = merge(arr,s,e);
    return x+y+cross;
}

int main(){
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int arr[] = {1,5,2,6,3,0};
    int n = sizeof(arr)/sizeof(int);
    cout<<inversion_count(arr,0,n-1)<<endl;

    return 0;
}