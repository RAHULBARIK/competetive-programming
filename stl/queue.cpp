#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;


    for(int i=1;i<=5;i++){
        q.push(i);
    }
    while(!q.empty()){
        cout<<q.front()<< " <-";
        q.pop();
    }

    cout<<q.back()<<endl;
    //* To view the element that is on the back of the queue


    return 0;
}