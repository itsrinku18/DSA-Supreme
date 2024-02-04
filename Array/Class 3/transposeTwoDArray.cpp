#include<iostream>
using namespace std;

void transposeMatrix(int arr[][3],int rows,int cols,int transpose[][3]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            // swap(arr[i][j],arr[j][i]);
            transpose[j][i]=arr[i][j];
        }
    }
}

void printArray(int arr[][3],int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}



int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;


    // row wise input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing 2D Array row wise:-"<<endl;
    printArray(arr,rows,cols);
    cout<<"Starting Transpose"<<endl;
    int transpose[3][3];
    // transposeMatrix(arr,rows,cols);
    transposeMatrix(arr,rows,cols,transpose);
    cout<<"Printing After transpose:"<<endl;
    printArray(transpose,rows,cols);

 
return 0;

}