//Greatest Nearest element to right
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


int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int n,a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector <int> v;
    stack <int> s;
    for(int i=n-1;i>=0;i--){
        if(s.size() == 0) v.push_back(-1);
        else if(s.size()>0 && s.top() > a[i])
            {
                v.push_back(s.top());
            }
        else if(s.size()>0 && s.top()<a[i]){
            while(s.size()>0 && s.top()<a[i]){
                s.pop();
            }
            if(s.size() ==0) v.push_back(-1);
            else v.push_back(s.top());
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<"  ";
    }
    return 0;
}