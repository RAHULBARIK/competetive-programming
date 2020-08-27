// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_pair(vector<pair<string,pair<int,int> > > &A,string str,int x,int y);
int get_size(vector<pair<string,pair<int,int> > > &A);
void print_values(vector<pair<string,pair<int,int> > > &A);
void sort_pair(vector<pair<string,pair<int,int> > > &A);

int main() {
    #ifndef ONLINE_JUDGE
		freopen("output.txt","w",stdout);
		freopen("input.txt","r",stdin);
#endif
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<pair<string,pair<int,int> > > A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				string name;
				cin>>name;
				int x,y;
				cin>>x>>y;
				add_pair(A,name,x,y);
			}
			if(c=='b')
			{
				cout<<get_size(A)<<" ";
			}
			if(c=='c')
			{
				print_values(A);
			}
			if(c=='d')
			{
			 	sort_pair(A);
			}
		
		
		}
cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/* Inserts a pair  <string,   pair<x, y> > >    into the vector A */
void add_pair(vector<pair<string,pair<int,int> > > &A, string str, int x, int y)
{
     // Your code here
     A.push_back({str,{x,y}});
}

/* Returns the size of the vector A */
int get_size(vector<pair<string,pair<int,int> > > &A)
{
     // Your code here
     return A.size();
}

/* Prints space separated values of vector A */
void print_values(vector<pair<string,pair<int,int> > > &A)
{
     // Your code here
    for(auto x:A){
        cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<" ";
    }
}

/* Sorts the vector A based on value x and y*/
bool comparePair(const pair <string,pair<int,int>> &a,const pair <string, pair<int,int>> &b  ){
    if(a.second.first<b.second.first) return true;
    if(a.second.first == b.second.first){
        if(a.second.second < b.second.second) return true;
    }
    return false;
}
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
     // Your code here
     sort(A.begin(),A.end(),comparePair);
     
}

