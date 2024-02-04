#include<iostream>
using namespace std;

void merge(int* arr, int s,int e){
    
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    // int arr[n]; // it is bad practise to decalre array.
 
    // assume to create array for len1, len2 length.
    int* left = new int[len1];
    int* right = new int[len2];

    // copy values left array
    int k = s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }

    // copy values  right array
    k = mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    // merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] =left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
          arr[mainArrayIndex]  = right[rightIndex];
          mainArrayIndex++;
          rightIndex++;
        }
    }

    // copy logic for left array
    while(leftIndex < len1){
        arr[mainArrayIndex++]=left[leftIndex++];
    }

    // copy logic for right array
    while(rightIndex < len2){
        arr[mainArrayIndex++]=right[rightIndex++];
    }

    // TODO : delete left and right wala newly created array. 



}

void mergeSort(int* arr,int s,int e){
    // base case
    //s==e -> single element
    //s>e ->invalid array

    if(s>=e)
        return;

    int mid = (s+e)/2;

    //left part sort kardo recursion
    mergeSort(arr,s,mid);

    //right part sort kardo recursion
    mergeSort(arr,mid+1,e);

    // merge sorted sub array
    merge(arr,s,e);


   
}

int main(){
    int arr[]={38,27,43,3,3,3,3,3,3,3,3,3,9,20};
    int n=14;

    int start=0;
    int end=n-1;

    mergeSort(arr,start,end);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;


}