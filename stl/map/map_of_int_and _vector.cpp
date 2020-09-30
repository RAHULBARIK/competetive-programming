#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define INT_BITS 32;
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
     string s;
     cin>>s;
     map <char,vector<int>> m;
     for (int i=0;i<s.length();i++){
       m[s.at(i)].push_back(i);
     }
     ll final_res=0;
     for(auto it=m.begin();it!=m.end();it++){
      //  cout<<it->first<<endl;
       vector<int> &v=  it->second;
       ll res=0;
      //  for(auto it=v.begin();it!=v.end();it++){
      //    for(auto it2=it+1;it2!=v.end();it2++){
      //       res+= *it2-*it;
      //    }
      //  }
      int i=0;
      int n = v.end()-v.begin();
      for(auto it2=v.begin();it2!=v.end();it2++,i++){
        res+= i*(v[i]) -(n-1-i)*v[i];
      }
        // cout<<res<<" ";
       final_res+=res;
       

     }
     cout<<final_res;
    return 0;
}