#include <iostream>
using namespace std;
int binary_string(int n){
    //base case
    if(n < 1) return 1; 




    //recursive case
    return binary_string(n-1)+binary_string(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<binary_string(n)<<endl;
}