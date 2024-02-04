#include<iostream>
#include<vector>
using namespace std;

bool isSorted(int arr[],int  i,int n){
    // base case
    if(i==n-1){
        return true;
    }

    // ek case solve karuga
    if(arr[i+1] <= arr[i]){
        return false;
    }

    return isSorted(arr,i+1,n);
}

bool isSorted1(vector<int> &arr,int i,int &n){
    // base case
    if(i==n-1){
        return true;
    }

    // ek case solve karuga
    if(arr[i+1] <= arr[i]){
        return false;
    }

    return isSorted1(arr,i+1,n);
}


int main(){
    // int arr[]={10,20,40,50,60};
    // int arr[]={10,20,90,50,60};
    // int arr[]={10};
    // int arr[]={1,1,1,1,1};
    // int n=5;
    // int i=0;

    // bool ans= isSorted1(arr,i,n);

    // using vector
    vector<int> arr{1,2,3};
    int i=0;
    int n=arr.size();

    bool ans= isSorted1(arr,i,n);
    if(ans){
       cout<<"Array is Sorted"<<endl; 
    }else{
       cout<<"Array is Not Sorted"<<endl;
    }
    
}