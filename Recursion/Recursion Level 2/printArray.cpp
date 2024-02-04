#include<iostream>
using namespace std;

void printArray(int arr[],int n,int i){
    // base case
    if(i >= n){
        return;
    }
    
    // 1 case solve kardia
    cout<<arr[i]<<" ";

    // baaki recursion sambhal le ga
    printArray(arr,n,i+1);

    // // 1 case solve kardia
    // cout<<arr[i]<<" ";

}

void printArray1(int arr[],int n){
    // base case
    if(n==0){
        return;
    }
    
    // 1 case solve kardia
    cout<<arr[0]<<" ";

    // baaki recursion sambhal lega
    printArray1(arr+1,n-1);

}

int main(){
    int arr[5]={10,20,30,40,50};
    int n=5;
    int i=0;
    
    printArray(arr,n,i);
    cout<<endl;
    printArray1(arr,n);

    return 0;

}