#include <iostream>
using namespace std;
// bool isSafe()
bool isSafe(int board[][10],int i,int j,int n){
    //checking for the rows
    for(int row=0;row<i;row++){
        if(board[row][j]==1){
            return false;
        }
    }
    //checking for the left diagonal
    int x=i,y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    //Checking for the right diagonal
    x=i,y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}
bool solveNqueen(int board[][10],int i,int n){
    //Base case
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1) cout<<"Q"<<" ";
                else cout<<"_"<<" ";
            }
            cout<<endl;
        }
        //printing the board
        cout<<endl<<endl;
        return false;
    }
    //Recursive case
    //Try to place the queen in the current row and call on the remaining part which will solve by recursion
    for(int j=0;j<n;j++){
        // I have to check if i,j th position is safe to place the queen or not.
        bool QueenIsPossible = isSafe(board,i,j,n);
        if(QueenIsPossible){
            //Place the Queen -Assuming i,j is the right person
            board[i][j] =1;
            bool nextQueenrakhpaye = solveNqueen(board,i+1,n);
            if(nextQueenrakhpaye){
                return true;
            }
                board[i][j]=0; //Backtrack
        }
        //Means i,j is not the right postion -Assumption is wrong
    
    }
    //You have end the for loop so we cannot place queen anywhere
    return false;
}

int main(){
    int board[10][10]={0};
    int n;
    cin>>n;
    solveNqueen(board,0,n);

}