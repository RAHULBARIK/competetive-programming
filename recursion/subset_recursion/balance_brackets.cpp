#include <iostream>
using namespace std;
void generate_brackets(int n,char *out,int j,int open,int close){
    //base case
    if(j==2*n){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }

    //recursive case
    if(open<n){
        out[j]='(';
        generate_brackets(n,out,j+1,open+1,close);
    }
    if(close<open){
        out[j]=')';
        generate_brackets(n,out,j+1,open,close+1);
    }


}

int main(){

    int n;
    cin>>n;
    char output[100];
    generate_brackets(n,output,0,0,0);
}