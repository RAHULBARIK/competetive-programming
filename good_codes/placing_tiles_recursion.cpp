#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <cstring>
using namespace std;
#define ll long long 
ll placeTheTiles(ll n){
    if(n<=3){
        return 1;
    }
    return placeTheTiles(n-1)+placeTheTiles(n-4);
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
  ll n,arr[100000],a,b,c,d;
  cin>>n;
  cout<<placeTheTiles(n)<<endl;
     
	return 0;
}
