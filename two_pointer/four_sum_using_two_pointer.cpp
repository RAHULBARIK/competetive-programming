#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
vector<vector<int>> four_sum(vector<int> v1,int target,int n){
    vector<vector<int>> v;
    if(v1.size()==0) return v;
    sort(v1.begin(),v1.end());
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int target_2 = target - v1[i]-v1[j];
            int front = j+1;
            int back = n-1;
            while(front<back){
                if(v1[front]+v1[back]<target_2){
                    front++;
                }else if(v1[front]+v1[back]>target_2){
                    back--;
                }else {
                    vector<int> quadrapul(4,0);
                    quadrapul[0]=v1[i];
                    quadrapul[1]=v1[j];
                    quadrapul[2]=v1[front];
                    quadrapul[3]=v1[back];
                    v.push_back(quadrapul);
                    //jumping over the duplicate elements
                    while(front<back && v1[front]==quadrapul[2]) front++;

                    //jumping over the duplicate elements of the back
                    while(front<back && v1[back]==quadrapul[3]) back--;
                }
            }
            while(j+1<n && v1[j+1]==v1[j]) j++;

        }
        while(i+1<n && v1[i+1]==v1[i]) i++;
    }
    return v;
}

int main(){
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n,target;
        cin>>n>>target;
        vector<int> v;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
        }
    vector<vector<int>> v1;
    v1=four_sum(v,target,v.size());
    if(v1.size()==0)
        cout<<"-1";
    for(auto x:v1){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<"$";
      }
      cout<<endl;
    }
  
    return 0;
}