#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#define ll long long 
#define INT_BITS 32;
using namespace std;
bool CanPutCows(int *stalls,int n,int cows,int mid){
    int ct=1;
    int last_cow = stalls[0];
    for(int i=1;i<n;i++){
        if(stalls[i]-last_cow>=mid){
            last_cow = stalls[i];
            ct++;
            if(ct==cows) return true;
        }
    }
    return false;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    //Problem: Aggresive Cow(SPOJ.com)
    // after sorting the array
    int stalls[] = {1,2,4,8,9};
    int n=5;
    int cows = 3;
    //binary search algorithm 
    int s=0;
    int e=stalls[n-1]-stalls[0];

    int ans =0;
    while(s<=e){
        int mid = (s+e)/2;
        cout<<s<<" "<<e<<"  " <<mid<<endl;
        bool cowsRakhPaye = CanPutCows(stalls,n,cows,mid);
        cout<<cowsRakhPaye<<endl;
        if(cowsRakhPaye) {
            s=mid+1;
            ans = mid;
        }
        else e = mid-1;
    }
    cout<<endl<<endl<<ans;
    return 0;
}