#include <iostream>
using namespace std;

int firstOcc(int *a,int n,int key){
    // if()
   
    if(n == 0 ) return -1;

    //Recursive case
     if(a[0]==key){
        //  cout<<key<<endl;
        return n;
    }
    else
    {
        //  cout<<a[0]<<"  "<<n<<endl;
        return firstOcc(a+1,n-1,key);
       
    }
    return 0;
}
int lastOcc(int *a,int n,int key){
    int i;
    if(n==0) return -1;
   
    //recursive case
    i=lastOcc(a+1,n-1,key);
     if(a[0]== key && i==-1){
        return 0;
    }
    if(i==-1) return -1;
    else return i+1;
    
}
int storeOcc(int *a,int i,int n,int key,int *out,int j){
        if(i==n){
            return j;
        }
        //recursive case
        if(a[i]==key){
            out[j++]=i++;
            return storeOcc(a,i,n,key,out,j);
        }
        return 0;
}

int main(){
    int arr[] = {1,2,3,7,4,5,6,7,10};
    int key =7;
    int n = sizeof(arr)/sizeof(int);
    if(firstOcc(arr,n,key)==-1) cout<<"-1"<<endl;
    else cout<<n-firstOcc(arr,n,key)<<endl;;
    cout<<lastOcc(arr,n,key)<<endl;
    int output[100];
    for(int i=0;i<storeOcc(arr,0,n,key,output,0);i++){
        cout<<output[i]<<endl;
    }

    return 0;
}