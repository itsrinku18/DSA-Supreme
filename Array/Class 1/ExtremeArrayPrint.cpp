#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,5,7,9,2,4,8,7};
    int size=9;
    int start=0;
    int end=size-1;

    // while (true)
    // {
    //     if(start>end)
    //     break;
    //     if(start == end){
    //     cout<<arr[start]<<" ";
    //     }
    //     else{
    //      cout<<arr[start]<<" "; 
    //      cout<<arr[end]<<" ";  
    //     } 
    //     start++;
    //     end--;
    // }

    while(start<=end){
        if(start == end){
        cout<<arr[start]<<" ";
        }
        else{
         cout<<arr[start]<<" "; 
         cout<<arr[end]<<" ";  
        } 
        start++;
        end--;
    }
    

    return 0;
}