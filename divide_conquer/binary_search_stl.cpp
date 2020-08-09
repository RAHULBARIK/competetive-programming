#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {20,30,40,40,40,50,100,1100};
    int n = sizeof(arr)/sizeof(int);
    //Search in a sorted array
    int key;
    cin>>key;
    bool present = binary_search(arr,arr+n,key);
    if(present) cout<< key<< "is present in the array"<<endl;
    else cout<< key<< " is not present in the array"<<endl;

    //Now focussing lower_bound and upper_bound in both cases the it return an iterator we need subtract arr  to get the actual index of the key in arr
    //It is returns the first address that is greater/equal to key if key is present then equal to and if not present then greater than 
    auto it_first = lower_bound(arr,arr+n,key)-arr;
    // upper_bound will return the first address that is strictly greater the key
    auto it_last = upper_bound(arr,arr+n,key)-arr;

    cout<<it_first<<"     "<<it_last-1<<endl;
}