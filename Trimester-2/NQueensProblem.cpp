#include<iostream>
using namespace std; 

void printSolution(char** board,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(char** board, int row,int col,int n)
{
    //TODO check row wise
    for(int j=0;j<n;j++)
    {
        if(board[row][j]=='Q')
            return false;            
    }
    //TODO check col wise
    for(int i=0;i<n;i++)
    {
        if(board[i][col]=='Q')
            return false;            
    }
    return true;
    //TODO check diagonally
}

void solveNQueens(char** board,int row,int n)//int** is a 2D array
{
    cout<<"In backtrack function :"<<row<<endl;
    //TODO Write base condition    
    if(row==n)
    {
        printSolution(board,n);
        return;
    }
    
    for(int col=0;col<n;col++)
    {
        if(isSafe(board,row,col,n))
        {
            //Placing queen
            board[row][col]='Q';
            //Moving onto next row 
            solveNQueens(board,++row,--n);
            //Removing queen as the previous step was wrong
            board[row][col]='.';
        }
    }
    
}
 
int main()
{
    cout<<"Solve N queens"<<endl;
    int N=2;

    char** board;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            board[i][j]='.';
        }
    }
    solveNQueens(board,0,N);
    return 0;
}