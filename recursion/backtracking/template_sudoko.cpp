#include <fstream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repe(i,a,b) for(ll i=a;i<=b;i++)
#define bac(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long ll;
typedef long double ld;
typedef vector< ll > vi;
typedef vector<pair<ll,ll> > vpii;
typedef pair<ll,ll> pii;
#define all(c) c.begin(),c.end()
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define setbitc(x) __builtin_popcount(x)
#define init(x,a) memset(x,a,sizeof(x))
#define INF 1000000000  
#define MOD 1000000007
#define M 998244353
#define N 500010
#define PI 3.14159265358979323846  /* pi */

ll mex(ll x,ll n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return mex((x*x)%MOD,n/2);
    else                             //n is odd
        
        return (x*mex((x*x)%MOD,(n-1)/2))%MOD;

}
ll minv(ll n) 
{ 
    return mex(n,MOD-2); 
}
bool possible(int a[9][9],int row,int col,int k)
{
    rep(i,0,9)
    if(a[row][i]==k||a[i][col]==k) return false;
    rep(i,(row/3)*3,(row/3+1)*3)
    rep(j,(col/3)*3,(col/3+1)*3)
    if(a[i][j]==k) return false;
    return true;
}
bool solve(int a[9][9],int row,int col)
{
    if(row==9) return true;
    if(col==9) return solve(a,row+1,0);
    if(a[row][col]!=0) return solve(a,row,col+1);
    rep(k,1,10)
    {
        if(possible(a,row,col,k))
        {
            a[row][col]=k;
            if(solve(a,row,col+1))
            return true;
        }
        a[row][col]=0;
    }
    return false;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int a[9][9];
        rep(i,0,9) rep(j,0,9) cin>>a[i][j];
        if(solve(a,0,0))
        {
            rep(i,0,9)
            {
                rep(j,0,9)
                cout<<a[i][j]<<" ";
            }
        }
        cout<<"\n";
        
    }
    return 0;
}