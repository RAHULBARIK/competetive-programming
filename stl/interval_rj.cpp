#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <stack>
#include <map>
#include <set>
#define ll long long 
#define INT_BITS 32;
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
        freopen("input.txt","r",stdin);
    #endif
    set < pair<int,int>> s;
    s.insert({2,3});
    s.insert({401,450});
    s.insert({10,20});
    s.insert({30,400});
    int point=31;
    auto it=s.upper_bound({point,INT32_MAX});
    if( it == s.begin()){
        cout<<"Sorry the element is not present in the intervals"<<"\n";
        return 0;
    }
    it--;
    pair<int,int> current =*it;
    if(current.first<=point && current.second >= point){
        cout<<"so the pair is present and the interval is "<<current.first<<"  "<<current.second<<endl;
    }
    else{
        cout<<"It is not present in the interval";
    }
    return 0;
}