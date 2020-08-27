#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <map>
#define ll long long 
#define INT_BITS 32;
using namespace std;
void print(map<int,int> m){
	for(auto it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}


}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    ll t;
    cin>>t;
	map <int,int> m;
    while(t--){
		ll n;
		cin>>n;
		for(ll i=0;i<n;i++){
			ll value;
			cin>>value;
			m[value]=i;
			//?make pairs storing helps to store previous or intial value as it is
			// pair<int,int> pa;
			// pa = {value,i};
			// m.insert(pa);
			// or insert({value,i});
		}
		print(m);
		ll k;
		cin>>k;
		if(m.find(k)!=m.end()){
			cout<<"erased "<<k<<endl;
			m.erase(k);
			print(m);
		}else
		{
			cout<<"not found"<<endl;
		}
		
    }
    return 0;
}