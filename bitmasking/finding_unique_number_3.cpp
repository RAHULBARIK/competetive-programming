//In this question we need that find a unique number that is present only once among the 3 mutliples of a number
// 3 3 3 1 1 1 2 op-> 2
#include <iostream>
using namespace std;
int main(){
    int cnt[64] ={0};

    int n,no;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>no;
        //Update the count array by extracting bits;
        int j=0;
        int no1=no;
        while(no>0){
            int last_bit = (no&1);
            cnt[j] += last_bit;
            no=no>>1;
            j++;
            
        }
     }
           int p=1,sum=0,j;
        for(j=0;j<64;j++){
            cout<<cnt[j]<<" ";
            sum = sum + (cnt[j]%3)*p;
            p=p*2;
        }
        cout<<sum;

    return 0;
}