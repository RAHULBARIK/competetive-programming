#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#define ll long long 
#define INT_BITS 32;
using namespace std;
void merge(int *a,int s,int e,int n){
    int mid=(s+e)/2;
    int i=s,j=mid+1,k=s,temp[1000];
    while(i<=mid && j<=e){
        if(a[i]<a[j]) temp[k++]=a[i++];
        else temp[k++]=a[j++];
    }
    // for(i=0;i<=mid;i++) cout<<a[i]<<" ";
    // cout<<endl;
    // for(j=mid+1;j<=e;j++) cout<<a[j]<<" ";
    // cout<<endl;
    while(i<=mid) temp[k++]=a[i++];
    while(j<=e) temp[k++]=a[j++];
    for(i=s;i<=e;i++) 
    {
        a[i]=temp[i];
        // cout<<a[i]<<" ";
    }
}
void mergeSort(int a[],int s,int e,int n){
    //Base case -1 or 0 elements
    if(s>=e){
        return;
    }

    //Recursive case 
    int mid=(s+e)/2;
    mergeSort(a,s,mid,n);
    mergeSort(a,mid+1,e,n);
    merge(a,s,e,n);



}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    // ll t,n,i,j,k,m;
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,0,n-1,n);
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}