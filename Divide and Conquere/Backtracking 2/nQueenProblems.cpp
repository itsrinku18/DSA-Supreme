#include<iostream>
#include<vector>
using namespace std;

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
        // check karna chahte h, kya main current cell[row,col] pr Queen
        // rak sakta hu ya nahi 
        int i = row;
        int j = col;

        //check row
        while(j >=0){
            if(board[i][j]== 'Q'){
                return false;
            }
            j--;

        }

        // check upperLeftDiagonal
        i = row;
        j = col;
        while(i >=0 && j>=0){
            if(board[i][j]=='Q'){
                return false;
            }
            i--;
            j--;
        }

        // check bottomLeftDiagonal
        i = row;
        j = col;
        while(i < n && j>=0){
            if(board[i][j]=='Q'){
                return false;
            }
            i++;
            j--;
        }
        //kahin pr bhi queen nahi mili
        //iska matlab ye position safe hai
        //iska matlab  return kardo true 
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
            board[row][col]='Q'; // 1 means queen replace
            // recursion solve kar lega
            solve(board,col+1,n);
            // backtrcking -> for back to previous colunm to where place queen to empty the cell.
            board[row][col]='-';
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