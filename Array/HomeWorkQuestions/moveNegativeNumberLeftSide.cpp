#include<iostream>
using namespace std;

void moveallNegativeLeft(int*arr,int n){
    // Dutch National Flag Alog Or Two Pointer Approach
    int low=0,high=n-1;
    while(low<high){
        if(arr[low]<0){
            low++;
        }
        else if(arr[high]>0){
            high--;
        }
        else{
            swap(arr[low],arr[high]);
        }
    }

}

int main(){
    int arr[]={1,2,-3,4,-5,6};
    int n=sizeof(arr)/sizeof(int);

    moveallNegativeLeft(arr,n);

    //printing array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}