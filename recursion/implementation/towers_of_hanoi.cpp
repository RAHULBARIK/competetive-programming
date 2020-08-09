#include <iostream>
using namespace std;

void moved(int n,char src,char helper,char dest){
    // Base case
    if(n==0){
        return ;
    }

    //recursive case
    moved(n-1,src,dest,helper);
    cout<<n<< " is moved from " <<src << " to "<<dest<<endl;
    moved(n-1,helper,src,dest);


}



int main(){
    int n;
    cin>>n;
    moved(n,'A','B','C');
}