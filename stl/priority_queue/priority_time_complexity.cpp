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
	//* Creating a min heap
	priority_queue<int,vector<int>,greater<int>> pq;
	//* For creating a max heap
	// priority_queue<int> pq; 
	// Time complexities
	// priority_queue<int> pq(arr,arr+n) ; O(n) complexity and better than pushing one by one element.
	//Time complexity for pq.top() is O(1) and empty is O(1),size O(1)
	// And time complexity for push and pop operation in O(logn)
	pq.push(10);
	pq.push(15);
	pq.push(5);
	cout<<pq.size()<<" ";
	cout<<pq.top()<<" ";
	while(pq.empty()==false){
		cout<<pq.top()<<" ";
		pq.pop();
	}
    return 0;
}