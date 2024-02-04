//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    
    int dx[4]={1,0,0,-1};
    int dy[4]={0,-1,1,0};
    
    char direction[4]={'D','L','R','U'};
    
    bool isSafe(int srcx,int srcy,int row,int col,vector<vector<int>> &arr,vector<vector<bool> > &visited){
    if( ((srcx >=0 && srcx < row )) && (srcy >=0 && srcy < col)  // 1. index inside array
    && (arr[srcx][srcy]==1)  // 2. [1] cell
    && (visited[srcx][srcy]==false) ){ //3. Not visted
        return true;
    }
    else{
        return false;
    }

 }

void solveMaze(vector<vector<int>> &arr,int row,int col,int srcx,int srcy,
vector<vector<bool> > &visited,vector<string>& path,string output){
    // base case
    if(srcx == row-1 && srcy == col-1){
        // ans output
        path.push_back(output);
        return;
    }
    
    for(int k=0;k<4;k++){
        int newx=srcx+dx[k];
        int newy=srcy+dy[k];
        char dir=direction[k];
        if(isSafe(newx,newy,row,col,arr,visited)){
        visited[newx][newy]=true;
        solveMaze(arr,row,col,newx,newy,visited,path,output+dir);
        // backtrack
        visited[newx][newy]=false;
        }
        
    }
    
    // above and below code same work

    // ek case solve
    // Down -> i+1,j
    // if(isSafe(srcx+1,srcy,row,col,arr,visited)){
    //     visited[srcx+1][srcy]=true;
    //     solveMaze(arr,row,col,srcx+1,srcy,visited,path,output+'D');
    //     // backtracking -> unvisted this srcx,srcy
    //     visited[srcx+1][srcy]=false;
    // }

    // // Left -> i,j-1
    // if(isSafe(srcx,srcy-1,row,col,arr,visited)){
    //     visited[srcx][srcy-1]=true;
    //     solveMaze(arr,row,col,srcx,srcy-1,visited,path,output+'L');
    //     // backtracking -> unvisted this srcx,srcy
    //     visited[srcx][srcy-1]=false;
    // }

    // // Right -> i,j+1;
    // if(isSafe(srcx,srcy+1,row,col,arr,visited)){
    //     visited[srcx][srcy+1]=true;
    //     solveMaze(arr,row,col,srcx,srcy+1,visited,path,output+'R');
    //     // backtracking -> unvisted this srcx,srcy
    //     visited[srcx][srcy+1]=false;
    // }

    // // Up -> i-1,j;
    // if(isSafe(srcx-1,srcy,row,col,arr,visited)){
    //     visited[srcx-1][srcy]=true;
    //     solveMaze(arr,row,col,srcx-1,srcy,visited,path,output+'U');
    //     // backtracking -> unvisted this srcx,srcy
    //     visited[srcx-1][srcy]=false;
    // }

}
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
     
    int row = n;
    int col = n;
    
    vector<string> path;
    string output ="";

    vector<vector<bool> > visited(row,vector<bool>(col,false));
    if(m[0][0]==0){
        return path;
    }

    // sorce ki value k true mark kardete h
    visited[0][0]=true;

    solveMaze(m,row,col,0,0,visited,path,output);
    
    return path;

    

    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends