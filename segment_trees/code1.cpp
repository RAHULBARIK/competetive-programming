#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#define ll long long 
#define INT_BITS 32;
using namespace std;
//*Building the tree
void buildTree(int *a,int s,int e, int *tree,int index){
    // Base Recursive case
    if(s==e){
        tree[index] =a[s];
        return ;
    }
    // Recursive Case
    int mid =(s+e)/2;
    buildTree(a,s,mid,tree,2*index);
    buildTree(a,mid+1,e,tree,2*index +1);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return;

 



}
//* seacrching the minimum element on the query
int query(int *tree,int ss,int se,int qs,int qe,int index){
    //complete overlap
    if(qs<=ss && qe>=se){
        return tree[index];
    }
    // NO overlapping case
    if(se<qs || qe<ss){
        return INT8_MAX;
    }
    // partial overlapp case
    int mid=(ss+se)/2;
    int left = query(tree,ss,mid,qs,qe,2*index);
    int right =query(tree,mid+1,se,qs,qe,2*index+1);
    return min(left,right);
    

}
//* Updating a single element in the array
void updateNode(int *tree,int ss,int se,int ind,int increament,int index){

    //If the index is out of bound 
    if(ind<ss || ind>se){
        return;
    }
    //If reach to that element that is ss=se
    if(ss==se){
        tree[index] = tree[index]+increament;
        return ;
    }
    int mid=(ss+se)/2;
    updateNode(tree,ss,mid,ind,increament,2*index);
    updateNode(tree,mid+1,se,ind,increament,2*index+1);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return ;
}
//* Updating a range of element in the aray
void updateRange(int *tree,int ss,int se,int l,int r,int inc,int index){
    // if the range is out of bound
    if(r<ss || l >se){
        return ;
    }
    //?Here order of base condition is important
    //? Reaching to the single element
    if(se==ss){
        tree[index]+=inc;
        return ;
    };
    //Recursive case
    int mid=(ss+se)/2;
    updateRange(tree,ss,mid,l,r,inc,2*index);
    updateRange(tree,mid+1,se,l,r,inc,2*index+1);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    return ;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    int a[]={1,3,2,-5,6,4};
    int n= sizeof(a)/sizeof(int);
    // int *tree = new int[4*n +1]; //Method a created a new array having a fixed size
    int tree[4*n+1];
    buildTree(a,0,n-1,tree,1);
    // for(int i=1;i<=13;i++){
    //     cout<<tree[i]<<"  ";
    // }
    //Update checking
    // int ind;
    // cin>>ind;
    // updateNode(tree,0,n-1,3,10,1);
    //Calling the updateRange 
    updateRange(tree,0,n-1,1,3,10,1);
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<query(tree,0,n-1,l,r,1)<<endl;
    }
    return 0;
}