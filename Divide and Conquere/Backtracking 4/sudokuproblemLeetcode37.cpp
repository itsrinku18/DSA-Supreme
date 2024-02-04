class Solution {
public:

bool isSafe(char value,vector<vector<char>>& board,int curr_row,int curr_col){
   
   int n = board.size();

    
    for(int i=0;i<9;i++){
       // row check -> same value check
       if(board[curr_row][i]==value){
            return false;
        }
     
       // colunm check  ->  same value check
       if(board[i][curr_col]==value){
            return false;
        }
    
       // 3 * 3 box check ->  same value check 
       if(board[3*(curr_row/3)+(i/3)][3*(curr_col/3)+(i%3)] == value){
            return false;
        }

    }
    return true;
}
    
    bool solve(vector<vector<char>>& board){
    
    int n=board[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // check for empty cell.
            if(board[i][j]=='.'){
                // fill the value 1 to 9 in cell.
                for(char value='1';value<='9';value++){
                    // check for safe
                    if(isSafe(value,board,i,j)){
                        //insert
                        board[i][j]=value;
                        // bakki recursion samhal lega
                        bool aageKaSolution = solve(board);
                        if(aageKaSolution ==true){ // this line of code no need to base code.
                           return true; 
                        } 
                        else{
                        //backtracking
                        board[i][j] = '.';
                        }

                    }
                }
                // if 1 se 9 tak koi bhi value se solution
                // nahi nikla, current cell pr,
                // that means piche kahin pr galti h,
                // go back by returning false 
                return false; 
            }
        }
    }
    // all cells filled
    return true;
    
}

    void solveSudoku(vector<vector<char>>& board){
        solve(board);
        
    }
};