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
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        char s[str.length()+1];
        int i;
        for( i=0;i<str.length();i++){
            s[i]=str.at(i);
        }
        s[i]='\0';
        char *token = strtok(s,".");
        vector<string> a;
        while(token!=NULL){
            a.push_back(token);
            token = strtok(NULL,".");
        }
        for(int i=a.size()-1;i>=0;i--)  {
            cout<<a[i];
            if(i!=0) cout<<".";
        }
        cout<<endl;
    }
    return 0;
}