#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

unordered_map<int,bool> rowCheck;
unordered_map<int,bool> upperLeftDiagnoalCheck;
unordered_map<int,bool> bottomLeftDiagnoalCheck;


void printSolution(vector<vector<char> > &board,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;   
}

bool isSafe(int row,int col,vector<vector<char> > board,int n){
    if(rowCheck[row]==true)
        return false;

    if(upperLeftDiagnoalCheck[n-1+col-row] == true)
        return false;
    

    if(bottomLeftDiagnoalCheck[row+col]== true)
        return false;


    return true;    

    }


 void solve(vector<vector<char> > &board,int col,int n){
    // base case -> jab har ke colunm me queen place ho jye
    if(col >= n){
        printSolution(board,n);
        return;
    }

    // 1 case solve karna h, baaki recursion sambhal lega
    for(int row =0; row < n; row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q'; // 1 means queen place
            rowCheck[row]=true;
            upperLeftDiagnoalCheck[n-1+col-row]=true;
            bottomLeftDiagnoalCheck[row+col]=true;
            // recursion solve kar lega
            solve(board,col+1,n);
            // backtrcking -> for back to previous colunm to where place queen to empty the cell.
            board[row][col]='-';
            rowCheck[row]=false;
            upperLeftDiagnoalCheck[n-1+col-row]=false;
            bottomLeftDiagnoalCheck[row+col]=false;
        }

    }

 }

int main(){
    int n=4;
    vector<vector<char> > board(n,vector<char>(n,'-'));
    
    // first queen ko place at (0,0);
    int col = 0;

    //'-' -> empty cell
    //'Q' -> Queen at the cell

    solve(board,col,n);


    return 0;

}