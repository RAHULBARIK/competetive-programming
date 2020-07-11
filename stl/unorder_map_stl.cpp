#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
//For including the map data structure we have to include map header

int main() {

    unordered_map<string,int> m;
    //Insert 
    m.insert(make_pair("mango",100));
    //make_pair is the function that is used to make pairs for insertion in map object

    //Another method to make a pair
    pair<string,int> p;
    p.first ="Apple";
    p.second =120;

    m.insert(p);

    //2.
    m["banana"] =20;
    //search for a element
    string fruit;
    cin>>fruit;

    auto it = m.find(fruit);
    if(it!=m.end()){
        cout<<"Price of "<<fruit<<" is"<<m[fruit]<<endl;
    }
    else{
        cout<<"fruit is not present"<<endl;
    }



    return 0;
}