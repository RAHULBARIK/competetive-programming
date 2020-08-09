#include <iostream>
#include <set>
#include <string>
using namespace std;
void permute(char *a,int i,set<string> &s){
    //Base case
    if(a[i]=='\0'){
        // cout<<a<<endl;
        string t(a);
        // making of char array to string and nameing it all we do by writing string t(a); here, t is a string consist of characters of a as elements
        s.insert(t);
        return ;
    }

    //Recursive case
    for(int j=i;a[j] != '\0';j++){
        swap(a[i],a[j]);
        permute(a,i+1,s);
        swap(a[i],a[j]);
    }

}
int main(){
    char a[100];
    cin>>a;
    set<string> s;
    //It is way to declare to set of strings that is set<string> set_name;
    permute(a,0,s);
    //print the set of strings
    for(auto x:s){
        cout<<x<<endl;
    }
}