#include<iostream>
using namespace std;

int main(){
    // declare 2D array
    int arr[3][3];

    // initialse 2DArray
    int brr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}};

    cout<<brr[2][2]<<endl;  
    cout<<brr[1][2]<<endl;
    cout<<brr[2][3]<<endl;

    // print 2D arry row-wise
    //outer loop
    cout<<"Printing Row Wise:"<<endl;
    for(int i=0;i<3;i++){
        // for every row, we need to print value in each column
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    cout<<"Printing Colunm Wise:"<<endl;
     // print 2D arry row-wise
    //outer loop
    for(int i=0;i<3;i++){
        // for every row, we need to print value in each column
        for(int j=0;j<3;j++){
            cout<<brr[j][i]<<" ";
        }
        cout<<endl;
    }

    // cout<<"Taking Input row wise in 2d Array:"<<endl;

    // int drr[4][3];
    // int rows=4;
    // int cols=3;

    // // row wise input
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cin>>drr[i][j];
    //     }
    // }

    // cout<<"Printing row wise"<<endl;
    //  for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<drr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


      cout<<"Taking Input colounm wise in 2d Array:"<<endl;

    int err[4][3];
    int rows=4;
    int cols=3;

    // col wise input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>err[j][i];
        }
    }

    cout<<"Printing colounm wise"<<endl;
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<err[j][i]<<" ";
        }
        cout<<endl;
    }

    


    return 0; 
}