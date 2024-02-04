class Solution {
public:

    unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> upperLeftDiagnoalCheck;
    unordered_map<int,bool> bottomLeftDiagnoalCheck;

    void storeSolution(vector<vector<char> > &board,int n,vector<vector<string> >&ans){
    vector<string> temp;
    for(int i=0;i<n;i++){
        string output = "";
        for(int j=0;j<n;j++){
            output.push_back(board[i][j]);
        }
        temp.push_back(output);
    }
    ans.push_back(temp);  
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

    void solve(vector<vector<char> > &board,int col,int n,vector<vector<string> >&ans){
    // base case -> jab har ke colunm me queen place ho jye
    if(col >= n){
        storeSolution(board,n,ans);
        return;
    }

    // 1 case solve karna h, baaki recursion sambhal lega
    for(int row =0; row < n; row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q'; // 1 means queen replace
            rowCheck[row]=true;
            upperLeftDiagnoalCheck[n-1+col-row]=true;
            bottomLeftDiagnoalCheck[row+col]=true;
            // recursion solve kar lega
            solve(board,col+1,n,ans);
            // backtrcking -> for back to previous colunm to where place queen to empty the cell.
            board[row][col]='.';
            rowCheck[row]=false;
            upperLeftDiagnoalCheck[n-1+col-row]=false;
            bottomLeftDiagnoalCheck[row+col]=false;
        }

    }

 }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board (n,vector<char>(n,'.'));
        vector<vector<string> >ans;
        // first queen ko place at (0,0);
        int col = 0;

        //'-' -> empty cell
        //'Q' -> Queen at the cell

         solve(board,col,n,ans);

         return ans;


        
    }
};