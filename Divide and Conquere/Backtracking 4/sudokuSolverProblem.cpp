#include<iostream>
using namespace std;

bool isSafe(int value,int board[][9],int curr_row,int curr_col){
    // row check -> same value check
    for(int col=0;col<9;col++){
        if(board[curr_row][col]==value){
            return false;
        }
    }
    

    // colunm check  ->  same value check
    for(int row=0;row<9;row++){
        if(board[row][curr_col]==value){
            return false;
        }
    }


    // 3 * 3 box check ->  same value check 
    for(int i=0;i<9;i++){
        if(board[3*(curr_row/3)+(i/3)][3*(curr_col/3)+(i%3)] == value){
            return false;
        }
    }

    return true;



}


//this function return true or false, basis on we found a solution or not
bool solve(int board[][9],int n){
// cout<<"Function Call recieved"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // check for empty cell.
            if(board[i][j]==0){
                // fill the value 1 to 9 in cell.
                for(int value=1;value<=9;value++){
                    // check for safe
                    if(isSafe(value,board,i,j)){
                        //insert
                        board[i][j]=value;
                        // bakki recursion samhal lega
                        bool remainingBoardSolution = solve(board,n);
                        if(remainingBoardSolution ==true){ // this line of code no need to base code.
                          return true; 
                        }
                        else{
                        //backtracking
                          board[i][j] = 0;
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

int main(){
    // 0 -> represnts an empty cell. 
    int board[9][9]={
        {4,5,0,0,0,0,0,0,0},
        {0,0,2,0,7,0,6,3,0},
        {0,0,0,0,0,0,0,2,8},
        {0,0,0,9,5,0,0,0,0},
        {0,8,6,0,0,0,2,0,0},
        {0,2,0,6,0,0,7,5,0},
        {0,0,0,0,0,0,4,7,6},
        {0,7,0,0,4,5,0,0,0},
        {0,0,8,0,0,9,0,0,0},
    };

   int n=9;

   solve(board,n);

   for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
      cout<<board[i][j]<<" ";
    }
    cout<<endl;
   }


    return 0;

}

