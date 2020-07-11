#include <iostream>
#include <string>
using namespace std;

int main(){
    //String init
    string s0;
    string s1("Hello");

    string s2= "Hello world!";

    string s3(s2);

    string s4=s3;
    char a[] = {'a','b','c','\0'};
    string s5(a);
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty()){
        cout<<"s0 is an empty string";
    }
    //string.empty() is used for returning boolean value True and False
    //Append function 
    s0.append("i love competitive programming much much"); 
    cout<<s0<<endl;
    s0 = s0 + "  and python";
    cout<<s0<<endl;

    //To remove the content of the string
    cout<<s0.length()<<endl;
    s0.clear();
    cout<<s0.length()<<endl;


    //Compare two strings
    s0 = "Apple";
    s1 = "Mango";
    cout<< s1.compare(s0) << endl; //Returns an integer ==0 equal, > 0 or < 0

    //Overloaded Operator operators
    if(s1>s0){
        cout<<"Mango is lexi greater than apple"<<endl;
    }

    cout<<s1[0]<<endl;

    //Finding Substrings
    string s = "i Want to have apple juice";
    int idx = s.find("apple");
    cout<<idx<<endl;

    //Remove a word from the string
    string word = "apple";
    int len = word.length();
    s.erase(idx,len + 1);
    cout<<s<<endl;
    //Iterate over all the characters in the string
    for(int i=0;i<s1.length();i++){
        cout<<s[i]<<":";
    }
    //Iterators
    for(auto it =s.begin();it != s.end();it++){
        cout<<(*it)<<endl;
    }

    //For Each loop
    //?Very important
    for(string::iterator it = s1.begin();it!=s1.end();it++){
        cout<<(*it)<<",";
    }
    cout<<endl;

    //For Each Loop
    for(char c:s1){
        cout<<c<<".";
    }

    return 0;

}