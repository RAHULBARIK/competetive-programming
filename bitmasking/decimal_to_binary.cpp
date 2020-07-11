#include <iostream>
using namespace std;

int decimalToBinary(int n){
    int num=0;
    int p=1;
    while(n>0){
        int last_bit = (n&1);
        // cout<<last_bit;
        num += p*last_bit;
        p = p*10;
        n = n>>1;
    }
    // cout<<num;
    return num;
}
int main() {
    int n;
    cin>>n;
   cout<< decimalToBinary(n)<<endl;
   return 0;

    
}