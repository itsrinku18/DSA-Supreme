#include<iostream>
using namespace std;

void swapAlternateArray(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1 <size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int arr[]={1,2,7,8,5};
    int n=5;

    swapAlternateArray(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

  return 0;

}