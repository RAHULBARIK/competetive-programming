#include <iostream>
#include <queue>
using namespace std;

int main(){

    //*push -> O(logN)
    //*pop -> O(logN)
    // *Top -> O(1)
    //* empty() to check whether the heap is empty or not
     // max priority queue
    priority_queue<int,vector<int>,greater<int>> pq; //min priority queue
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int no;
        cin>>no;
        pq.push(no); //O(logN)
    }
    //Remove the elements from the heap
    while(!pq.empty()){
        cout<< pq.top()<< " ";
        pq.pop();
    }

    return 0;
}