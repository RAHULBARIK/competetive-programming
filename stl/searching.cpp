#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,10,11,8,100};
    int n = sizeof(arr)/sizeof(int);

    int key = 11;
    cin>>key;
    auto it = find(arr,arr+n,key);
    int pos = it -arr;
    cout<< pos<<endl;

    return 0;
}