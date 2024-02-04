#include<iostream>
using namespace std;

int main(){
    int arr[]={-1,-3,-5,-7,-2,-45,-7};
    // int arr[]={1,3,5,7,2,45,7};
    // int arr[]={0,0,0,0,0,0,0};
    // int arr[]={1,2,3,5,-10,-45,-9};
    int size=7;
    // int maxNumber =0;
    int minNumber =INT32_MAX;
    
 
    for(int i=0;i<size;i++){
        if(arr[i]<minNumber){
            // found a number greater than maxNumber, update maxNumber
            minNumber=arr[i];
        }
    
    }

    cout<<"Maximum Number:"<<minNumber<<endl;

    return 0;
}