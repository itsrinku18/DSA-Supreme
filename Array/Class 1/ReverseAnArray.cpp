#include<iostream>
using namespace std;

int main(){
  int arr[]={23,4,5,78,9,0,32};
  int size=7;
  int start=0;
  int end=size-1;

  while(start<=end){
    // step1. swap array of start and end element
    swap(arr[start],arr[end]);
    // step2. 
    start++;
    //step3.
    end--;
  }

//   printing array
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}