//BS on a sorted and rotated array
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#define ll long long 
#define INT_BITS 32;
using namespace std;
int find(int *a,int n,int key){
    int s=0,e=n-1,mid=(s+e)/2;
    while(s<=e){
        
                if(a[mid]==key){
                    return mid;
                }
                else if(a[mid]>=a[s]){
                    if(key<=a[mid] && key>=a[s]){
                        e=mid-1;
                    }
                    else{
                        mid+1;
                    }
                }
                else {
                    if(key>=a[mid] && key<=a[e]){
                        s=mid+1;
                    }
                    else{
                        e=mid-1;
                    }
                }
                mid= (s+e)/2;
        }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int n;
    int a[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<find(a,n,key);

 //This some zebsy stuff so that it we can copied to the code1.cpp
    return 0;
}