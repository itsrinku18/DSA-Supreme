#include<iostream>
#include<vector>
using namespace std;


void wavePrintMatrix(vector<vector<int>> v){
    int row=v.size();
    int col=v[0].size();

    for(int startCol=0;startCol<col;startCol++){
        //even no. of col -> Top to Bottom.
        if((startCol & 1) ==0){
            for(int i=0;i<row;i++){
                cout<<v[i][startCol]<<" ";
            }
        }
        else{
           //odd no. of col -> Bottom to top.
           for(int i=row-1;i>=0;i--){
            cout<<v[i][startCol]<<" ";
           }

        }
    }
}

// wrong logic
void waveSpiralMatrix(vector<vector<int>> v){
    int row=v[0].size();
    int col=v.size();

    for(int startRow=0;startRow<row;startRow++){
        //even no. of row -> Left to Right.
        if((startRow & 1) ==0){
            for(int i=0;i<col;i++){
                cout<<v[i][startRow]<<" ";
            }
        }
        else{
           //odd no. of col -> right to left.
           for(int i=col-1;i>=0;i--){
            cout<<v[i][startRow]<<" ";
           }

        }
    }
}

int main(){
    vector<vector<int>> v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };


    wavePrintMatrix(v);
    cout<<endl;
    // waveSpiralMatrix(v);

    return 0;
}
