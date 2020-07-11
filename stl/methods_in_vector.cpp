#include <iostream>
#include <vector>

using namespace std;

int main(){
    //You can crate and iniatlise a vector
    vector<int> d{1,2,3,10,14};
    //Push Back O(1) for most of the time, if memory increase it takes some additional time
    d.push_back(16);

    //Pop Back / Removes the last element O(1)
    d.pop_back();

    cout<<d.capacity()<<endl;

    //Insert some elements in the middle we need to use d.insert(d.begin() + pos_number,element_value) O(N)
    d.insert(d.begin()+3,4,100);

    //erase some elements in the middle
    // index of the element that to be erased
    d.erase(d.begin()+2);
    // range of the elements that need to be erased 
    d.erase(d.begin()+2,d.begin()+5);


    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid the shrink
    d.resize(18); //if the size increased the resize will change the capacity of the vector

    //remove all the elements in vector,it doesn't delete the memory occupied by the array
    d.clear();

    cout<<d.size()<<endl;

    if(d.empty()){
        cout<<"This an empty vector"<<endl;
    }
    d.push_back(10);
    d.push_back(101);
    d.push_back(1982);
    //Gives the frontmost element in the vector
    cout<< d.front() << endl;
    //Gives the lastmost element in the vector
    cout<< d.back() << endl;


    for(int x:d){
        cout<<x<<",";
    }
    int n;
    cin>>n;
    vector<int> v;
    //To avoid doubling , we will use reverse function
    v.reserve(1000);
    // capacity will remain the same untill the capacity of the vector reaches it full limits
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"Changing capacity" << v.capacity() <<endl;
    }
    for(int x:v){
        cout<< x<<",";
    }

    return 0;
}