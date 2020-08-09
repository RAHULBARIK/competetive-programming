#include <iostream>
using namespace std;

void generate_strings(char *in,char *out,int i,int j) {
    //Base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
       return ; 
    }
    //Recursive case
    out[j]=in[i]+16;
    generate_strings(in,out,i+1,j+1);
    if(in[i+1]!='\0' && in[i+1]!= '0'){
        int digit = (in[i]-'0')*10+(in[i]-'0');
        if(digit < 26){
        out[j]='0'+digit+17;
        generate_strings(in,out,i+2,j+1);
        }
    }

}

int main(){

    char input[100],output[100];
    cin>>input;
    generate_strings(input,output,0,0);

    return 0;
}