#include <iostream>
using namespace std;
int profit(int *weight,int *prices,int N,int C){
    //Base case
    if(N==0||C==0){
        return 0;

    }
    //recurisive case
     int ans =0;
     int inc,exc;
     inc=exc=0;

    //include case
    if(weight[N-1]<=C){
     inc = prices[N-1]+profit(weight,prices,N-1,C-weight[N-1]);
    }
    // exclude case
    exc = profit(weight,prices,N-1,C);
    ans = max(inc,exc);
    return ans;
}
int main(){
    int weight[] = {1,2,3,5};
    int prices[] = {40,20,30,100};

    int N=4;
    int C=7;
    cout<<profit(weight,prices,N,C);
    return 0;
}