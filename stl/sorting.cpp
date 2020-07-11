#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a<b; 
    }
    return a.length()<b.length();
}
int main(){
    int n;
    
    cin>>n;
    cin.get();

    string s[100]; 
    for(int i=0; i<n;i++){
        getline(cin,s[i]);
    }
    sort(s,s+n,compare);
    //Sorting to specify range of number and in a non-increasing order
    int a[10]={1,5,8,9,6,7,3,4,2,0};
    sort(a,a+5,greater<int>());
    for (int i=0; i<n;i++){
        cout<<s[i]<<endl;
    }
}
