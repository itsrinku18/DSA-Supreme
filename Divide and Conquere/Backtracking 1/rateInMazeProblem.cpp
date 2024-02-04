#include<iostream>
#include<vector>
using namespace std;

 bool isSafe(int srcx,int srcy,int row,int col,int arr[][4],vector<vector<bool> > &visited){
    if( ((srcx >=0 && srcx < row )) && (srcy >=0 && srcy < col)  // 1. index inside array
    && (arr[srcx][srcy]==1)  // 2. [1] cell
    && (visited[srcx][srcy]==false) ){ //3. Not visted
        return true;
    }
    else{
        return false;
    }

 }

void solveMaze(int arr[4][4],int row,int col,int srcx,int srcy,
vector<vector<bool> > &visited,vector<string>& path,string output){
    // base case
    if(srcx == row-1 && srcy == col-1){
        // ans output
        path.push_back(output);
        return;
    }

    // ek case solve
    // Down -> i+1,j
    if(isSafe(srcx+1,srcy,row,col,arr,visited)){
        visited[srcx+1][srcy]=true;
        solveMaze(arr,row,col,srcx+1,srcy,visited,path,output+'D');
        // backtracking -> unvisted this srcx,srcy
        visited[srcx+1][srcy]=false;
    }

    // Left -> i,j-1
    if(isSafe(srcx,srcy-1,row,col,arr,visited)){
        visited[srcx][srcy-1]=true;
        solveMaze(arr,row,col,srcx,srcy-1,visited,path,output+'L');
        // backtracking -> unvisted this srcx,srcy
        visited[srcx][srcy-1]=false;
    }

    // Right -> i,j+1;
    if(isSafe(srcx,srcy+1,row,col,arr,visited)){
        visited[srcx][srcy+1]=true;
        solveMaze(arr,row,col,srcx,srcy+1,visited,path,output+'R');
        // backtracking -> unvisted this srcx,srcy
        visited[srcx][srcy+1]=false;
    }

    // Up -> i-1,j;
    if(isSafe(srcx-1,srcy,row,col,arr,visited)){
        visited[srcx-1][srcy]=true;
        solveMaze(arr,row,col,srcx-1,srcy,visited,path,output+'U');
        // backtracking -> unvisted this srcx,srcy
        visited[srcx-1][srcy]=false;
    }

}

int main(){
    // int maze[3][3]= {
    //     {1,0,0},
    //     {1,1,0,},
    //     {1,1,1,},
    // };

    // int maze[4][4]= {
    //     {1,0,0,0},
    //     {1,1,0,1},
    //     {1,1,0,0},
    //     {0,1,1,1}
    // };

    int maze[4][4]= {
        {1,0,0,0},
        {1,1,1,0},
        {0,1,1,0},
        {0,1,1,1}
    };

    if(maze[0][0]==0){
        cout<<"No path Exits"<<endl;
        return 0;
    }



    int row = 4;
    int col = 4;

    vector<vector<bool> > visited(row,vector<bool>(col,false));

    // sorce ki value k true mark kardete h
    visited[0][0]=true;

    vector<string> path;
    string output ="";

    solveMaze(maze,row,col,0,0,visited,path,output);

    cout<<"printing the result:"<<endl;
    for(auto i:path){
        cout<<i<<" ";
    }
    cout<<endl;

    if(path.size()==0){
        cout<<"No path Exits"<<endl;
    }






    return 0;
}