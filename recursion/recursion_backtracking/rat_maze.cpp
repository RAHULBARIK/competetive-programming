#include <iostream>
using namespace std;
bool ratInMaze(char maze[10][10],int soln[][10],int i,int j,int m ,int n){
    if(i==m && j==n){
        soln[m][n] =1;
        //print the path
        return true;
    }
    //Rat should be inside grid
    if(i>m || j>n){
        return false;
    }
    if(maze[i][j]=='X'){
        return false;
    }
    //Assume solution exist through current cell
    soln[i][j] =1;
}
int main(){
    char maze[10][10]={
                "0000",
                "00X0",
                "000X",
                "0X00",
    };
    int soln[10][10] = {0};
    return 0;
}