#include <iostream>
#include <vector>
using namespace std;

int main(){


    vector<int> a;
    // for defining vector we use vector<str> b; now significes that vector containing str class
    vector<int> b(5,10);// five int with value 10 - init a vecotr of zeros (n,0)
    vector<int> c(b.begin(),b.end());

    vector<int> d{1,2,3,4,35};

    //Look at how we can iterate over the vector
    // By using the loops for iterating in vector
    for (int i=0; i<c.size();i++){
        cout<< c[i] << ",";
    }
    cout<<endl;
    for(auto it = b.begin();it!=b.end();it++){
        cout<< c[it-b.begin()] << ", "<<it-b.begin();
        cout<< (*it) <<endl;
    }
    //For each loop most convient way of iterating over the vectors
    cout<<endl;
    for(int x:d){
        cout<<x<<",";
    }

// Some more functions on vector 
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
    }
    for(int x:v){
        cout<<x<<endl;
    }
    //* Sorting vector in reverse order sort(A.begin(),A.end(),greater<int>())
    return 0;
}