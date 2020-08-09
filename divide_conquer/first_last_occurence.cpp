//To find the first and last occurences of a key in a sorted array


#include <iostream>
using namespace std;
int binary_search_first_occur(int *a,int n ,int key){
    int s = 0,e = n-1,mid=(s+e)/2,index=-1;
    while(s<=e){
        cout<<s<<" "<<e<<" "<<mid<<endl;
        if(a[mid]==key) {
            index =mid;
            e = mid-1;
        }
        else if (a[mid]<key) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
           mid= (s+e)/2;
     
    }
        return index;
}
int binary_search_last_occur(int *a,int n ,int key){
    int s = 0,e = n-1,mid=(s+e)/2,index=-1;
    while(s<=e){
        cout<<s<<" "<<e<<" "<<mid<<endl;
        if(a[mid]==key) {
            index =mid;
            s = mid+1;
        }
        else if (a[mid]<key) {
            s = mid+1;
        }
        else {
            e = mid-1;
        }
           mid= (s+e)/2;
     
    }
        return index;
}

int main(){

    int arr[] = {1,2,5,8,8,8,8,10,12,15,20};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<binary_search_first_occur(arr,n,key)<<endl;
    cout<<binary_search_last_occur(arr,n,key);

    
}