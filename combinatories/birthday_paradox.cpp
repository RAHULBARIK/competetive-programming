/* What is the minimum number of people that should be present in a hall so that there's 50% chance of two people
having the same birthday?
*/
#include <iostream>
using namespace std;

int main() {
    float x=1.0;
    //x denotes the prob of 2ppl having birthday
    int people = 0;
    float num =365;
    float denom = 365;
    float p;
    cin>>p;
    while(x > 1-p){
        // x is less than threshold
        x = x*(num)/denom;
        num--;
        people++;
        cout<<"People :"<<people<<"and "<< x<<endl;
    }
}