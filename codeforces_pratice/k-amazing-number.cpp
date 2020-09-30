
#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a ,pair<int,int> b){
    if(a.second<b.second){
        return true;
    }
    if(a.second == b.second){
        return a.first<b.first;
    }
    return false;
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
       int n;
       cin>>n;
       set<int> s;
       vector<int> v;
       map<int,int> m,m1;
       int mx =INT_MIN;
       for(int i=0;i<n;i++){
           int k;
           cin>>k;
           v.push_back(k);
           if(m.find(k)==m.end()){
               m1[k]=i+1;
               m[k] = i+1;
           }else{
            //    cout<<m1[k]<<" "<<i+1-m[k]<<endl;
               m1[k] = max(m1[k],i+1-m[k]);
               m[k]=i+1;
           }
        //    cout<<m1[k]<<endl;
        }
        // cout<<m[1]<<endl;
        for(auto it=m1.begin();it!=m1.end();it++){
            m1[it->first] = max(n-m[it->first],m1[it->first]);
        }
        vector<pair<int,int>> v1;
         for(auto it=m1.begin();it!=m1.end();it++){
            // cout<<it->first<<" "<<m1[it->first]<<endl;
            v1.push_back({it->first,m1[it->first]});
        }
        sort(v1.begin(),v1.end(),comp);
        for(auto x:v1){
            cout<<x.first<<" "<<x.second<<endl;
        }
        int k=0;
        for(int i=1;i<n;i++){
            if(i<v1[k].second){
                cout<<"-1"<<" ";
            }else{
                
            }
        }
        // for(auto it=m1.begin();it!=m1.end();it++){
        //     cout<<it->first<<" "<<m[it->first]<<endl;
        // }
        // vector<pair<int,int>> v1;
        // for(auto x:s){

        // }

    }
    return 0;
}