#include<iostream>
#include<vector>
using namespace std;

int isBinarySearch(vector<int>&arr,int &start,int &end,int &key){
    // base case
    // case 1-> key is not found.
    // s > e -> invalid array.
    if(start > end){
        return -1;
    }
    // int mid=start+(end-start)/2;
    int mid=(start+end)/2;
    // case 2-> key is found.
    if(arr[mid]==key){
        return mid;
    }

    // ek case solve karu ga
    // arr[mid] <key -> right me search
    if(arr[mid]<key){
        // start=mid+1;
        start=mid+1; //using by refrence of start value
      return isBinarySearch(arr,start,end,key);

    }
    // arr[mid] >key -> left me search.
    else{
        end=mid-1; // using by refrence of end value
        return isBinarySearch(arr,start,end,key);
    }
}

int main(){
    vector<int>arr{10,20,30,50,80,90};
    int size=arr.size();
    int key=90;
    int start=0;
    int end=size-1;

    int ans= isBinarySearch(arr,start,end,key);

    cout<<"Ans is:"<<ans<<endl;

    return 0;
}