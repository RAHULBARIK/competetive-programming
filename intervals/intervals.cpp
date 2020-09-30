#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
vector<vector<int>> merge(vector<vector<int>> &intervals){
    vector<vector<int>> mergedIntervals;
    if(intervals.size()==0) return mergedIntervals;
    vector<int> tempInterval = intervals[0];
    for(auto it: intervals){
        if(it[0]<=tempInterval[1]){
            tempInterval[1]= max(tempInterval[1],it[1]);
        }else{
            mergedIntervals.push_back(tempInterval);
            tempInterval = it;
        }
    }
    mergedIntervals.push_back(tempInterval);
    return mergedIntervals;
}

int main(){
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    vector<vector<int>> intervals,res;
    intervals = {{1,3},{2,6},{8,10},{9,11},{15,18},{8,9},{2,4},{16,17}};
    res = merge(intervals);
    for(auto it:res){
        for(auto x:it) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}