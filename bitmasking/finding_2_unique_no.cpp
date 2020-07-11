#include <iostream>
using namespace std;


int main(){

    int n;
    cin>>n;
    int no;
    int res =0;
    int a[100005];
    for(int i=0;i<n;i++){
        cin>>no;
        a[i]=no;
        res=res^no;

    }
    cout<<res<<endl;
    // xor = a^b;
    int temp = res;
    int ct=0;
    while((temp&1) != 1){
        ct++;
        temp = temp>>1;
    }
    cout<<ct<<endl;
    //The first bit in xor is at position 'pos'
    int mask = (1<<ct),res1=0; 
    cout<<mask<<endl;
    //find those numbers which contain set bit at position pos
    for(int i=0;i<n;i++){
        if((a[i]&mask)>0){
            res1=res1^a[i];
        }
    }
    cout<<res1<<endl;
    int b = res^res1;
    cout<<res1<<" "<<endl;
    cout<<b<<endl;
    return 0;
}