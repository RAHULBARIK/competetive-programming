#include <iostream>
using namespace std;
int friends_pair(int N){
    //Base case
    if(N==1) return 1;
    if (N==2) return 2;



    //recursive case
    return friends_pair(N-1)+(N-1)*friends_pair(N-2);
}
int main(){
    int N;
    cin>>N;
    cout<<friends_pair(N)<<endl;
}