#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ll long long 
#define pb push_back
#define INT_BITS 32
#define M 1000000007
using namespace std;
int t[102][1002];
int knapsack(int *weight,int *profit,int W,int n){
	//Base case
	if(W<=0 || n<=0) return 0;

	//If any value is stored in the matrix already then we returned that value
	if(t[n][W]!=-1) return t[n][W];

	//Recursive case
    //When the given weight is more than knapsack weight
	if(weight[n-1]>W){
		
		 return t[n][W]=knapsack(weight,profit,W,n-1);
	}







	//When the given weight is less than knapsack weight then we have tw0 choices
	// One is that we can include the item and other is we can exclude the item
	return t[n][W]=max(knapsack(weight,profit,W,n-1),profit[n-1]+knapsack(weight,profit,W-weight[n-1],n-1));





}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
   int weight[] = {1,3,4,5,2};
   int profit[] = {4,7,5,9,2};
   int n = sizeof(weight)/sizeof(int);
   int w=14;
  
   memset(t,-1,sizeof(t));
   cout<<knapsack(weight,profit,w,n)<<endl;
   return 0;
}