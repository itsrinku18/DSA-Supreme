#include<iostream>
using namespace std;




bool findKey(int arr[][3],int rows,int cols,int key){
    // search key in 2D array
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
               return true;
            }
        }
        
    }
     return false;
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

   if(findKey(arr,rows,cols,key)){
    cout<<"Key is Present"<<endl;
   }
   else{
    cout<<"Key is Not present"<<endl;
   }

return 0;

}

