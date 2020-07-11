#include <iostream>
#include <set>
using namespace std;

int main(){

    // *Multiset - that can store multiple occurrnace of  same elements
    // *stored in a specific -> sorted according to internal comparsion object
    // *values once inserted cannot be modified
    // *associative container -> elements are refered by their value and not by the index
    // *underlying implementation is a bst
    int arr[]= {10,20,30,20,10,10};
    multiset<int> m(arr,arr+6);

    //erase -20 then all occurance of 20 will be erased
    m.erase(20);

    //Iterate
    for(int x:m){
        cout<<x<<",";
    }



    



    return 0;
}