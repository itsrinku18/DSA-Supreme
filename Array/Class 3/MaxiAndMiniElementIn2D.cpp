#include<iostream>
using namespace std;

int getMax(int arr[][3],int rows, int cols){
    int maxi=INT16_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}


int getMini(int arr[][3],int rows, int cols){
    int mini=INT16_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;
    int key= 12;

    // row wise input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing 2D Array row wise:-"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

   cout<<"Printing Maximum element in 2D Array:"<<endl;
   cout<<getMax(arr,rows,cols)<<endl;

   cout<<"Printing  Minimum element in 2D Array:"<<endl;
   cout<<getMini(arr,rows,cols);


return 0;

}

