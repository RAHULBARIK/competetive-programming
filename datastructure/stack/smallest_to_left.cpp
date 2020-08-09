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
    vector<int> v;
    stack<int> s;
    int n=4,arr[4]={1,3,2,4};
    for(int i=0;i<n;i++){
        if(s.size()==0) v.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i]){
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>arr[i]){
            while(s.size()>0 && s.top()>arr[i]){
                s.pop();
            }
            if(s.size()==0) v.push_back(-1);
            else v.push_back(s.top());

        }
        s.push(arr[i]);
    }
    for(auto x:v){
        cout<<x<<"  ";
    }
    return 0;
}