#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {20,30,40,40,40,40,40,50,100,1100};
    int n = sizeof(arr)/sizeof(int);
    //Search in a sorted array
    int key;
    cin>>key;
    bool present = binary_search(arr,arr+n,key);
    if (present){
        cout<< "Present ";
    }
    else{
        cout<< "Absent ";
    }
    //Two more things
    // Get the index of the element
    // lower_bound(s,e,key) and upper_bound(s,e,key)
    auto lb = lower_bound(arr,arr+n,key);
    cout<<(lb-arr)<<endl;

    //Upper bound method
    auto it = upper_bound(arr,arr+n,40);
    cout<<(it-arr)<<endl<<"This is upper_bound of 40"<<endl;

    if((lb-arr)==n){
        cout<<"Element is not present"<<endl;
    }

    return 0;
}