
#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);//disconnect c with c++(false)
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int arr[]={8,15,3,7};
    int n = sizeof(arr)/sizeof(int);
    int t[1001][1001];
    memset(t,-1,sizeof(t));
    //Intilization
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j) t[i][j]=0;
            if(i==j) t[i][j]=arr[i];
        }
    }

    //Top-down approach
    int row = 0;
    int col = 1;
    for(int j=col;j<n;j++){
        for(int k=0;;k++){
            if(j+k==n){
                row=0;
                break;
            }
            
            int i1 = row+k;
            int j1 = j+k;
            int op1 = arr[i1];
            if(i1+2<n){
                op1 = op1 +min(t[i1+2][j1],t[i1+1][j1-1]);
            }else{
                op1 = op1 +0;
            }

            int op2 = arr[j1];
            if(j1-2>=0){
                op2 = op2 +min(t[i1+1][j1-1],t[i1][j1-2]);
            }else{
                op2 = op2 +0;
            }
            cout<<op1<<" "<<op2<<endl;
            t[i1][j1] = max(op1,op2);

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<t[0][n-1]<<endl;
    return 0;
}