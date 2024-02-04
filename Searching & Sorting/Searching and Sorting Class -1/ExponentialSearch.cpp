#include<iostream>
using namespace std;


 int binarySearch(int arr[],int start,int end, int target){
    while(start <=end){
        int mid = start+(end-start)/2;
        if(arr[mid]== target){
            return mid;
        }
        else if(target < arr[mid]){
            //left search
            end=mid-1;
        }
        else{
            //right search
            start =mid+1;
        }
         mid = start+(end-start)/2;
    
    }
    return -1;
 }

int expoSearch(int arr[],int size,int target){
    if(arr[0]== target){
        return 0;
    }

    int i=1;
    while( i<size && arr[i] <= target){
        i=i*2; //i*=2 // i=i << 1;
    }
    return binarySearch(arr,i/2,min(i,size-1),target);

}

int main(){
    int arr[]={3,4,5,6,11,13,14,15,56,70};
    int n=sizeof(arr)/sizeof(int);
    int target=56;
    int ans = expoSearch(arr,n,target);

    cout<<"Search or target Element at Index:"<<ans<<endl;

    return 0;

}