#include <iostream>
#include <list>
using namespace std;
int main(){
    //Init
    list<int> l1{1,2,3,14,43,58};
    //Different Datatype
    list<string> l2{"apple","guava","mango","banana"};
    l2.push_back("pineapple");
    //Sorting in list class
    l2.sort();

    //reverse
    l2.reverse();
    //Iterate over the list and print the data
    cout<<l2.front()<<endl;
    l2.pop_front();

    //add to the front the list
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    l2.pop_back();
    for(auto s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    //Iterate over the list and print the data
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<< (*it)<< "->";
    }
    //some more functions in the list
    l2.push_back("orange");
    l2.push_back("lemon");
    for(string s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    //remove a fruit
    string f;
    cin>>f;
    l2.remove(f);
    for(string s:l2){
        cout<<s<<"-->";
    }
    //erase one or more elements 
    auto it = l2.begin();
    it++;
    it++;
    l2.erase(it);
    cout<<endl;
     for(string s:l2){
        cout<<s<<"-->";
    }
    //We can insert elements in the list
    it = l2.begin();
    it++;
    l2.insert(it,"FruitJuice");
    cout<<endl;
     for(string s:l2){
        cout<<s<<"-->";
    }
    return 0;

}