//Find the how many subarrays can be formed that is divisible by n where n is size of the array
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <cstring>
using namespace std;
#define ll long long 
ll a[1000005], pre[1000005];

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(pre,0,sizeof(pre)); //For creating  an arrray that only consists zero inside it
        //for including memset in the code the header file is used is #include <cstring>
        int sum=0;
        pre[0] = 1;
        //read the input
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
            sum = (sum +n)%n;
            pre[sum]++;
        }
        ll ans =0;
        for(int i=0;i<n;i++){
            int m = pre[i];
            ans += (m)*(m-1)/2;
        }
        cout<<ans<<endl;

    }

      
     
	return 0;
}
